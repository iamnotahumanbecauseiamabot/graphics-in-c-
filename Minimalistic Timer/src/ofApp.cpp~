#include "ofApp.h"
#include <string> 

using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
ofBackground(0,0,0);
text = "";
text_0 = "";
release = 0;
//cin >> timer_value; //shifted to GUI now.
timer_value =0; //shifted to commandline now.
font.load("Caviar_Dreams_Bold.ttf", 300);
font_0.load("Caviar_Dreams_Bold.ttf", 125);
lastTime = ofGetElapsedTimef();
frameRateForCapture = 1; // 30 fps
//centre_of_width = ofGetWidth()/2;
//centre_of_height = ofGetHeight()/2;
mySound.load("tick.mp3");
mySound.setLoop(true); //Sound will loop

}

//--------------------------------------------------------------
void ofApp::update(){
if(release==1){
float timePerFrame = 1.0 / frameRateForCapture;  
float currentTime = ofGetElapsedTimef();
if (currentTime - lastTime > timePerFrame){  
  // DO SOMETHING HERE
  if(timer_value>=0){
  mySound.play();
  text = to_string(timer_value--);
  }
  else{
  mySound.stop();
  text = "";
  text_0="Bruh Stop.";
  }
  lastTime = currentTime;
}
}
else{
text = to_string(timer_value);
}
}

//--------------------------------------------------------------
void ofApp::draw(){
font.drawString(text, ofGetWidth()/2 - font.stringWidth(text)/ 2,ofGetHeight()/2 + font.stringHeight(text)/ 2);
font_0.drawString(text_0, ofGetWidth()/2 - font_0.stringWidth(text_0)/ 2,ofGetHeight()/2 + font_0.stringHeight(text_0)/ 2);
}

//--------------------------------------------------------------
/*OF_KEY_BACKSPACE, OF_KEY_RETURN, OF_KEY_PRINTSCR, OF_KEY_F1 - OF_KEY_F12, OF_KEY_LEFT, OF_KEY_UP, OF_KEY_RIGHT, OF_KEY_DOWN, OF_KEY_PAGE_UP, OF_KEY_PAGE_DOWN, OF_KEY_HOME, OF_KEY_END, OF_KEY_INSERT*/

void ofApp::keyPressed(int key){

if(key=='+'){
timer_value = timer_value+ 1;
}
else if(key=='-' && timer_value>0){
timer_value = timer_value- 1;
}
if(key==OF_KEY_RETURN){
release = 1;
}
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
