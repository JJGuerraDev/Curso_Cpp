// biblioteca de Linux
#include <X11/Xlib.h>

void Mover_Cursor(Display *MyDisplay, Window MyWIndow, int x, int y);

int main(void){

    Display *MyDisplay = XOpenDisplay(NULL);

    Window Root_Window = DefaultRootWindow(MyDisplay);

    Mover_Cursor(MyDisplay,Root_Window,100,100);

    XCloseDisplay(MyDisplay);

    return 0;
}

void Mover_Cursor(Display *MyDisplay, Window MyWIndow, int x, int y){

    XPoint MyPoint = {(short int)x,(short int)y};

    XWarpCursor(MyDisplay,MyWIndow,MyPoint);
}