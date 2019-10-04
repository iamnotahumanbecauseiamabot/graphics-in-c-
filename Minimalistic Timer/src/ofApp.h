#pragma once

#include "ofMain.h"
#include <string>
class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		float frameRateForCapture;  
        float lastTime;
        ofSoundPlayer mySound;
        string text;
        string text_0;
        int release;
        int timer_value;
        int centre_of_width;
        int centre_of_height;
        ofTrueTypeFont font;
        ofTrueTypeFont font_0;
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
};
