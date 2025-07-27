#pragma once
#ifndef MYHEADER_H
#define MYHEADER_H

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include <time.h>
//#include <windows.h>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <vector>
#include <fstream>

void hw6_2();

void binary_thinning(unsigned char*, unsigned char*, int, int);

void padding(unsigned char*, unsigned char*, int, int, int);
double MSE(unsigned char*, unsigned char*, int, int);

using namespace cv;
using namespace std;

#endif  // MYHEADER_H

#pragma once


