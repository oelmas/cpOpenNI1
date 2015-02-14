#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class cpOpenNI1App : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void cpOpenNI1App::setup()
{
}

void cpOpenNI1App::mouseDown( MouseEvent event )
{
}

void cpOpenNI1App::update()
{
}

void cpOpenNI1App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( cpOpenNI1App, RendererGl )
