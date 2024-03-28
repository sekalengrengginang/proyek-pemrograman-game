#include <iostream>
#include <sl.h>
int main()
{
    double postX = 400;
    double postY = 600;
    double velY = 0;
    double gravity = -0.1;
    slWindow(800, 600, "Assets", false);
    int average = slLoadTexture("./assets/average.png");
    int vine_boom = slLoadWAV("./assets/vine_boom.wav");
    while (!slShouldClose())
    {
        velY += gravity;
        postY += velY;
        if (postY <= 100)
        {
            velY = 3;
            slSoundPlay(vine_boom);
        }
        slSprite(average, postX, postY, 128, 171);
        slRender();
    }

    slClose();
    return 0;
}
