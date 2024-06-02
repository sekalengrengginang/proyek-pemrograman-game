#include <sl.h>
#include "sorcerer.h"
int main()
{
    slWindow(800, 600, "The Sorcerer", false);
    int imgSorcerer = slLoadTexture("./assets/koyuki.png");
    Sorcerer sorcerer(imgSorcerer);
    while (!slShouldClose())
    {
        sorcerer.update(10);
        sorcerer.draw();
        slRender();
    }
    slClose();
    return 0;
}