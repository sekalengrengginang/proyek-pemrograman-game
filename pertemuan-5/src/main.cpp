#include <iostream>
#include <sl.h>
using namespace std;
int main()
{
    slWindow(800, 600, "Translate", false);
    while (!slShouldClose())
    {
        slPush();
        slSetForeColor(0,1,0,1);
        slTranslate(400,300);
        slRectangleFill(0,0,100,10);
        slPop();

        slSetForeColor(1,1,0,1);
        slRectangleFill(400,200,100,10);
        slRender();
    }

    slClose();
    return 0;
}
