//
//  ofxChildFrame.h
//
//  Created by Iwatani Nariaki on 2016/03/30.
//
//

#pragma once

#include "TransformNode.h"
#include "ofFbo.h"

namespace ofx { namespace childframe {

class Frame
{
public:
	void setSize(float x, float y);
	TransformNode& getInnerTransformNode() { return inner_transform_; }
	ofFbo& getFbo() { return fbo_; }
	
	void begin();
	void end();
	
	void draw() const { draw(0,0); }
	void draw(float x, float y) const { draw(x,y,getWidth(),getHeight()); }
	void draw(float x, float y, float w, float h) const;
	
	float getWidth() const;
	float getHeight() const;
private:
	TransformNode inner_transform_;
	ofFbo fbo_;
};

}}

using ofxChildFrame = ofx::childframe::Frame;