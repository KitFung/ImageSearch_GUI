#include "SearchingThread.h"

SearchingThread::SearchingThread() {}

void SearchingThread::run() {
	this->inputID = 1;
	vector<string> infos;
	vector<int> similiars = find_similiar_image(inputID, infos);

	QVector<int> res = QVector<int>::fromStdVector(similiars);
	QVector<QString> resinfo;
	for (auto s : infos) resinfo.push_back(QString::fromStdString(s));
	
	// QThread::sleep(2);
	
	emit doneSearch(res, resinfo);
}
