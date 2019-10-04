#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
ofSetCircleResolution(100);
gui.setup();

gui.add(intSlider.setup("Change Radius",  10,  1, 100));
gui.add(floatSlider.setup("Change Wave frequency",  0.1,  0.01, 1));
gui.add(floatSlider_1.setup("Change Radius frequency",  0.0,  0.001, 1));
gui.add(toggle.setup("Change Pattern", false));
//gui.add(button.setup("button"));
//gui.add(label.setup("label", "THIS IS  A LABEL"));

//gui.add(intField.setup("int Field", 100, 0,  100));
//gui.add(floatField.setup("float Field", 100.0, 0.0, 100.0));
//gui.add(textField.setup("text field", "text"));

//gui.add(vec2Slider.setup("vec2slider", ofVec2f(0,0),ofVec2f(0,0),ofVec2f(ofGetWidth(),ofGetHeight())  ));
gui.add(vec3Slider.setup("Change RGB frequency", ofVec3f(0,0,0),ofVec3f(0.01,0.01,0.01),ofVec3f(1,1,1) ));
//gui.add(vec4Slider.setup("vec4slider", ofVec4f(0,0,0,0),ofVec4f(0,0,0,0),ofVec4f(255,255,255,255)  ));

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
//radius,  colorCircles,  
void ofApp::draw(){
float time = ofGetElapsedTimef();
ofBackground(255);
int radius = intSlider;
float set_r = vec3Slider->x;
float set_b = vec3Slider->y;
float set_g = vec3Slider->z;
float wave_freq = floatSlider;
float rad_freq = floatSlider_1;
for(int i=0; i<ofGetWidth()-2*(radius);i++){

if(toggle){
ofSetColor(127 + 127*tan(i*(0.01+set_r) + time), 127 + 127*tan(i*(0.012+set_b) + time), 127 + 127*tan(i*(0.013+set_g) + time));}
else{
ofSetColor(127 + 127*sin(i*(0.01+set_r) + time), 127 + 127*sin(i*(0.012+set_b) + time), 127 + 127*sin(i*(0.013+set_g) + time));}

ofDrawCircle(radius+i, ofGetHeight()/2 + (radius/2)*(sin(i*wave_freq + time)),radius - (radius/4)*(sin(i*rad_freq +time)));
}

gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

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
