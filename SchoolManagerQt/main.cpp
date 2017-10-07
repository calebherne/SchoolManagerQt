#include "SchoolManagerQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SchoolManagerQt w;
	w.show();
	return a.exec();
}
