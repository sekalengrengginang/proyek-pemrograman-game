#include <iostream>
#include <sl.h>
int main()
{

    double postX = 400;
    double postY = 600;
    double velY = 0;
    double gravity = -0.2;
    slWindow(800, 600, "gameloop", false);
    // int sprite = slLoadTexture("./assets/ikuyo.png");
    while (!slShouldClose())
    {
        // input
        if (slGetKey(SL_KEY_ENTER))
        {
            // enter maka bola akan naik
            velY = 5;
        }

        // update posisi lingkaran
        velY += gravity;
        postY += velY;
        // render lingkaran
        // slSprite(sprite,postX, postY,128,128);
        // slText(300,150,"Ikuyo Whangsapp");
        // slSetForeColor(0, 1, 0, 1);
        // slCircleFill(postX, postY, 50, 100);
        slRender();
    }

    slClose();
    return 0;
}
