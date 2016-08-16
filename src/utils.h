#pragma once

#include "ofMain.h"
#include <opencv2/core.hpp>

/**
 *  Convert ofPixels_<T> to cv::Mat, Pixels dose not copied.
 *  @param pix ofPixels, ofFloatPixels, ofShortPixels.
 *  @return cv::Mat
 */
template <typename T>
static cv::Mat toCv(ofPixels_<T>& pix)
{
    int depth;
    switch(pix.getBytesPerChannel())
    {
        case 4: depth = CV_32F;
        case 2: depth = CV_16U;
        case 1: default: depth = CV_8U;
    }
    return cv::Mat(pix.getHeight(), pix.getWidth(), CV_MAKETYPE(depth, pix.getNumChannels()), pix.getData(), 0);
}
