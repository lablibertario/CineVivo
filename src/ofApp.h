#pragma once


#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxXmlSettings.h"
#include "ofxAssimpModelLoader.h"
#include "GuiApp.h"
#define WIDTH 1280
#define HEIGHT 800
#define LIM 10

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void exit();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //OSC
    ofxXmlSettings XML;
    ofxOscReceiver reciever;
    ofxOscSender sender;
    int portIn;
    int portOut;
    
    // CineVivo LiveCoding
    ofVec2f one[LIM],two[LIM],three[LIM],four[LIM];
    ofTexture texVideo[LIM];
    ofPixels pix[LIM];
    
    bool fullScreen = false;
    
    ofVideoGrabber cam;
    bool camON[LIM];
    
    int rectMode[LIM];
    
    ofVideoPlayer videoLC[LIM];
    ofImage mask[LIM];
    
    int vX[LIM];
    int vY[LIM];
    int vIndex[LIM];
    int vIndexPlaying[LIM];
    int maskedIndex[LIM];
    float vScaleX[LIM];
    float vScaleY[LIM];
    ofColor vColor[LIM];
    int vOpacity[LIM];
    float vRotX [LIM];
    float vRotY [LIM];
    float vRotZ [LIM];
    float vSpeed [LIM];
    int vW [LIM];
    int vH [LIM];
    
    bool shaderOn[LIM];
    int blur[LIM];
    ofShader shader[LIM];
    ofFbo fbo[LIM];
    int ambientLight;
    
    // utilities
    int numVideosLoaded;
    
    ofxAssimpModelLoader models3D;
    ofLight light;
    ofLight lightC;
    
    shared_ptr<GuiApp> gui;
};

