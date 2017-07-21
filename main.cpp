#include "mainwidget.h"
#include <QApplication>

int main(int argv, char **argc)
{
	QApplication app(argv, argc);
	
	Quants::MainWidget *widget = new Quants::MainWidget;
	widget->show();

	return app.exec();
}

