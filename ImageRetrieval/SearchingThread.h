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
	void startSearch();
signals:
	void doneSearch(vector<int> similiars, vector<string> infos);
};
