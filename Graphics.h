#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <windows.h>

int spawnWindow(HINSTANCE instance, int cmdShow, int width, int height, const char* title, int maxfps, void (*callback)());
void resizeWindow(int width, int height);
unsigned char* pixels;
int size;

#endif //GRAPHICS_H
