#include "imageretrieval.h"
#include <QtWidgets/QApplication>
#include "core_main.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageRetrieval w;
	w.show();
	return a.exec();
}
