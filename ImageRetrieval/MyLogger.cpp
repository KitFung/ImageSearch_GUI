#include "MyLogger.h"

MyLogger& MyLogger::instance() {
	 static MyLogger INSTANCE;
	 return INSTANCE;
}
