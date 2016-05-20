#ifndef NETDUMP_H
#define NETDUMP_H

#include <QtWidgets/QMainWindow>
#include "ui_netdump.h"

class netdump : public QMainWindow
{
	Q_OBJECT

public:
	netdump(QWidget *parent = 0);
	~netdump();

private:
	Ui::netdumpClass ui;
};

#endif // NETDUMP_H
