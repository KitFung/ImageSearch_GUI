#include <QThread>
#include <QtWidgets>
#include "core_main.h"

class SearchingThread : public QThread {
	Q_OBJECT
public:
	SearchingThread();

protected:
	void run();

private:
	int inputID;

signals:
	void doneSearch(QVector<int> res, QVector<QString> infos);
};
