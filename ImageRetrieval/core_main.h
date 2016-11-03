#pragma once 

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <map>
#include <algorithm>
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "feature_loader.h"
#include "feature_extract.h"
#include "feature_compare.h"
#include "feature_preprocess.h"

#include "ml.h"
#include "compare.h"

using namespace std;
using namespace cv;

void core();
vector<int> find_similiar_image(int index, vector<string> &infos);
string getFilePath999(int index);
