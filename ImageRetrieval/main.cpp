#include "imageretrieval.h"
#include <QtWidgets/QApplication>
#include "core_main.h"

int main(int argc, char *argv[]) {
	qRegisterMetaType<QVector<int> >("QVector<int>");
	qRegisterMetaType<QVector<QString> >("QVector<QString>");

	QApplication a(argc, argv);
	ImageRetrieval w;
	w.show();
	return a.exec();
}
