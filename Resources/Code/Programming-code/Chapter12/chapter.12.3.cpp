
//
// This is example code from Chapter 12.3 "A first example" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

// The NOGDI below is needed to prevent Windows from including wingdi.h which has a duplicate
// declaration of 'Polygon' and throws ambiguous error.
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
#define NOGDI
#endif

#include "Simple_window.h"    // get access to our window library
#include "Graph.h"            // get access to our graphics library facilities
#include "ImageData.h"
//------------------------------------------------------------------------------

int main()
{
    using namespace Graph_lib;   // our graphics facilities are in Graph_lib

    Point tl(100,100);           // to become top left  corner of window
    string fname;
    cin >> fname;
    ImageData data(fname);
    Simple_window win(tl, data.getWidth() * 20 + 70, data.getHeight() * 20, fname);    // make a simple window
    vector<vector<Pixel>> img = data.getImage();
    int x = 0;
    int y = 0;
    for(int j = 0; j < data.getHeight(); j++){
        y=0;
        for(int i = 0; i < data.getWidth(); i++){
            Pixel p = img[j][i];
            Rectangle r(Point(x,y),20,20);
            Color c = fl_rgb_color(p.getColor().x(),p.getColor().y(),p.getColor().z());
            r.set_fill_color(c);
            y += 20;
            win.attach(r);
        }
        x+=20;
    }

    win.wait_for_button();       // give control to the display engine
}

//------------------------------------------------------------------------------
