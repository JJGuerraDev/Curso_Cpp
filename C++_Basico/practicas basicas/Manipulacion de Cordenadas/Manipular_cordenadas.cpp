#include <iostream>
#include <cstdio>
#include <X11/Xlib.h>

using namespace std;

int main(void){

    printf("*");

    XWarpCursor();

    return 0;
}