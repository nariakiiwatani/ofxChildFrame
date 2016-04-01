#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	frame_.setSize(128,128);
	frame_.getInnerTransformNode().setAnchorPoint(64,64,0);
	frame_.getInnerTransformNode().setTranslation(64,64,0);
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
	frame_.begin();
	ofDrawCircle(64,64,64);
	frame_.end();
	frame_.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	switch(button) {
		case OF_MOUSE_BUTTON_LEFT: {
			TransformNode &node = frame_.getInnerTransformNode();
			node.addTranslationX(x-ofGetPreviousMouseX());
			node.addTranslationY(y-ofGetPreviousMouseY());
		}	break;
		case OF_MOUSE_BUTTON_RIGHT: {
			TransformNode &node = frame_.getInnerTransformNode();
			node.mulScale(ofVec3f(100+x-ofGetPreviousMouseX(), 100+y-ofGetPreviousMouseY(), 100)/100.f);
		}	break;
	}
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
