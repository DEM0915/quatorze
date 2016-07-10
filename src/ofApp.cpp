#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    ofVideoPlayer Chanel;

};

void ofApp::setup(){

    ofHideCursor();
    Chanel.load("Le Paris de Chanel.mp4");
    Chanel.play();
    Chanel.setLoopState(OF_LOOP_PALINDROME);
    
}

void ofApp::update(){
    
    Chanel.update();
    
}

void ofApp::draw(){
    
    ofBackground(255);
    Chanel.draw(62, 62,1241, 644);

}


int main(){
    
    ofSetupOpenGL(1024,768,OF_FULLSCREEN);
    ofRunApp(new ofApp());
}
