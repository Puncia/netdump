#include "netdump.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	netdump w;
	w.show();
	return a.exec();
}