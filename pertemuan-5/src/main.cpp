#include <iostream>
#include <sl.h>
using namespace std;
int main()
{
    double postX = 400;
    double postY = 600;
    slWindow(800, 600, "Control", false);
    int font = slLoadFont("./assets/PlusJakartaSans-Regular.ttf");
    int plane = slLoadTexture("./assets/plane.png");
    int shoot = slLoadWAV("./assets/vine_boom.wav");
    double radius = 25;
    while (!slShouldClose())
    {
        std::string debug_info = std::to_string(slGetMouseX()) + ", " + std::to_string(slGetMouseY());
        slSetBackColor(0, 1, 0);
        slSetFont(font, 24);
        slText(slGetMouseX(), slGetMouseY(), debug_info.c_str());

        if(slGetMouseButton(SL_MOUSE_BUTTON_LEFT)){
            double dX = slGetMouseX() - 400;
            double dY = slGetMouseY() - 100;
            double dist = std::hypot(dX,dY);
            if (dist <= radius)
            {
                postX = 400;
                postY = 100;
            }
            
        }

        if (slGetKey('W'))
        {
            postY++;
        }
        if (slGetKey('S'))
        {
            postY--;
        }
        if (slGetKey('A'))
        {
            postX--;
        }
        if (slGetKey('D'))
        {
            postX++;
        }

         if (slGetMouseButton(SL_MOUSE_BUTTON_LEFT))
        {
            slSoundPlay(shoot);
        }
        
        // if(slGetMouseButton(SL_MOUSE_BUTTON_LEFT)){
        //     postX = slGetMouseX();
        //     postY = slGetMouseY();
        // }

        slSprite(plane, postX, postY, 64, 63);
        slRender();
    }

    slClose();
    return 0;
}
