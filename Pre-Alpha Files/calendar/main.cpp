#include "calendar.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	calendar w;
	w.show();
	return a.exec();
}
