//
//  ofxChildFrame.cpp
//  example
//
//  Created by Iwatani Nariaki on 2016/03/30.
//
//

#include "ofxChildFrame.h"
#include "ofGraphics.h"

void ofxChildFrame::setSize(float x, float y)
{
	fbo_.allocate(x,y);
}

void ofxChildFrame::begin()
{
	inner_transform_.refreshMatrix();
	fbo_.begin();
	ofClear(0);
	inner_transform_.pushMatrix();
}

void ofxChildFrame::end()
{
	inner_transform_.popMatrix();
	fbo_.end();
}

void ofxChildFrame::draw(float x, float y, float w, float h) const
{
	fbo_.draw(x,y,w,h);
}

float ofxChildFrame::getWidth() const
{
	return fbo_.getWidth();
}
float ofxChildFrame::getHeight() const
{
	return fbo_.getHeight();
}

