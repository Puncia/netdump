#include "netdump.h"

netdump::netdump(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	srv = new QTcpServer(this);
	start_server(1);

	QObject::connect(srv, SIGNAL(newConnection()), this, SLOT(new_client()));	
}

std::string string_to_hex(const std::string& input)
{
	static const char* const lut = "0123456789ABCDEF";
	size_t len = input.length();

	std::string output;
	output.reserve(2 * len);

	for (size_t i = 0; i < len; ++i)
	{
		const unsigned char c = input[i];
		output.push_back(lut[c >> 4]);
		output.push_back(lut[c & 15]);
		output.push_back(' ');
	}

	return output;
}

void netdump::start_server(uint port)
{
	if (!srv->listen(QHostAddress::LocalHost, 12345))
	{
		//!!
	}
	


}

void netdump::new_client()
{
	client = srv->nextPendingConnection();
	
	ui.add_label->setStyleSheet("color: #88D03B;");
	ui.add_label->setText(QString("connected to " + client->localAddress().toString() + ":" + std::to_string(client->localPort()).c_str()));

	QObject::connect(client, SIGNAL(readyRead()), this, SLOT(read_message()));	
	QObject::connect(client, SIGNAL(disconnected()), this, SLOT(close_connection()));
}

void netdump::close_connection()
{
	ui.add_label->setStyleSheet("color: #D03B3B;");
	ui.add_label->setText("disconnected");
}

void netdump::read_message()
{
	QByteArray b = client->readAll();
	QLabel *l_mixed;
	QString s_mixed;
	
	QString ascii = set_ascii(b);
	QList<QString> dec = set_dec(b).split(' ');
	QList<QString> hex = set_hex(b).split(' ');
	QList<QString> bin = set_bin(b).split(' ');

	for (int i = 0; i < b.length(); i++)
	{
		s_mixed = ascii[i]; s_mixed += "\t";
		s_mixed += dec.front(); s_mixed += "\t"; dec.pop_front();
		s_mixed += hex.front(); s_mixed += "\t"; hex.pop_front();
		s_mixed += bin.front(); s_mixed += "\t"; bin.pop_front();

		l_mixed = new QLabel(s_mixed);
		l_mixed->setWordWrap(true);
		ui.layout_mix->insertWidget(0, l_mixed, 0, Qt::AlignTop);
	}
}

QString netdump::set_ascii(QByteArray str)
{
	
	QLabel *l = new QLabel(QString::fromLocal8Bit(str).insert(0, "> ").replace("\r\n", "\\n"));
	l->setWordWrap(true);
	ui.layout_ascii->insertWidget(0, l, 0, Qt::AlignTop);

	return QString::fromLocal8Bit(str);
}

QString netdump::set_dec(QByteArray str)
{
	QString str_dec, new_str_dec, str_ret;
	
	for (int i = 0; i < str.length(); i += 2)
	{
		int_least8_t C = str.toStdString().c_str()[i] | (str.toStdString().c_str()[i + 1] << 4);
		str_dec += std::to_string(C).c_str();
		str_dec += " ";
		str_ret += std::to_string(C).c_str();
		str_ret += " ";
		str_ret += std::to_string(C).c_str();
		str_ret += " ";
	}
	
	new_str_dec = str_dec;
	QLabel *l = new QLabel(new_str_dec.insert(0, "> "));
	l->setWordWrap(true);
	ui.layout_dec->insertWidget(0, l, 0, Qt::AlignTop);

	return str_ret;
}

QString netdump::set_hex(QByteArray str)
{
	std::string new_str_hex, str_hex = string_to_hex(str.toStdString());

	new_str_hex = str_hex;
	QLabel *l = new QLabel(QString(new_str_hex.c_str()).insert(0, "> "), this);
	l->setWordWrap(true);
	ui.layout_hex->insertWidget(0, l, 0, Qt::AlignTop);

	return QString(str_hex.c_str());
}

QString netdump::set_bin(QByteArray str)
{
	QString str_bin, new_str_bin;

	for (char bin : str.toStdString())
	{
		str_bin += std::bitset<8>(bin).to_string().c_str();
		str_bin += " ";
	}

	new_str_bin = str_bin;
	QLabel *l = new QLabel(new_str_bin.insert(0, "> "));
	l->setWordWrap(true);
	ui.layout_bin->insertWidget(0, l, 0, Qt::AlignTop);

	return str_bin;
}

netdump::~netdump()
{
	
}