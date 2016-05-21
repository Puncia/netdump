#ifndef NETDUMP_H
#define NETDUMP_H

#include <QtWidgets/QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include "ui_netdump.h"
#include <bitset>
#include <sstream>
#include <iomanip>
#include <QScrollBar>
#include <QTextCodec>

class netdump : public QMainWindow
{
	Q_OBJECT

public:
	explicit netdump(QWidget *parent = 0);

	void start_server(uint port);

	void set_mix(QByteArray str);
	QString set_ascii(QByteArray str);
	QString set_dec(QByteArray str);
	QString set_hex(QByteArray str);
	QString set_bin(QByteArray str);
	
	~netdump();

private:
	Ui::netdumpClass ui;
	QTcpServer *srv;
	QTcpSocket *client;

public slots:
	void new_client();
	void read_message();
	void close_connection();
};

#endif // NETDUMP_H
