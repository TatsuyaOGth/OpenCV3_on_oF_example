#pragma once

#include "ofMain.h"
#include "utils.h"

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/features2d.hpp>
#include <opencv2/photo.hpp>


class ofApp : public ofBaseApp{

	public:
		void setup();
		void draw();
		void keyPressed(int key);
		
    ofImage mLenaImg; // original image
    ofImage mResImg; // result image
};
