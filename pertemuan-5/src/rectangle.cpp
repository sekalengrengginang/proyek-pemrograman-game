#include <iostream>
#include <sl.h>
using namespace std;
int main()
{
    slWindow(800, 600, "Translate", false);
    double angle1 = 0;
    double angle2 = 0;
    double scale = 0;
    while (!slShouldClose())
    {
        slPush();
        slTranslate(400, 300);
        slSetForeColor(1, 1, 1, 1);
        slRotate(angle1);
        slRectangleFill(0, 0, 200, 20);

        slPush();
        slSetForeColor(0, 1, 0, 1);
        slTranslate(-100, 0);
        slRotate(angle2);
        slRectangleFill(0, 0, 100, 10);
        slPop();

        slPush();
        slSetForeColor(0, 1, 0, 1);
        slTranslate(100, 0);
        slRotate(angle2);
        slRectangleFill(0, 0, 100, 10);
        slPop();
        slPop();
        slPush();
        slSetForeColor(1, 1, 1, 1);
        slTranslate(400, 100);
        slScale(scale, 1);
        slRectangleOutline(0, 0, 100, 100);
        slPop();

        slRender();
        angle1++;
        angle2 -= 5;
        scale+=0.1;
    }

    slClose();
    return 0;
}
