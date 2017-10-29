#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(15);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofEnableBlendMode(ofBlendMode::OF_BLENDMODE_ADD);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	ofColor body_color;
	for (int i = 0; i < 14; i++) {
		ofRotate(ofGetFrameNum());

		body_color.setHsb(216 - i * 16, 255, 255);
		ofSetColor(body_color);

		float x = 300 * cos(0 * DEG_TO_RAD);
		float y = 300 * sin(0 * DEG_TO_RAD);

		ofDrawCircle(ofVec2f(x, y), 30);
		ofDrawLine(ofVec2f(0, 0), ofVec2f(x, y));
	}
}

//--------------------------------------------------------------
int main() {
	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}