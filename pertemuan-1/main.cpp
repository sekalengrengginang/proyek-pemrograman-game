#include <iostream>
#include <sl.h>
using namespace std;
int main()
{
    /*  */
    slWindow(800, 600, "GamePertama", false);

    while (!slShouldClose())
    {
        slSetBackColor(1.0, 1.0, 1.0);
        slSetForeColor(0.0, 1.0, 0.0, 1.0);
        slCircleFill(400, 400, 50, 50);
        slRender();
    }

    slClose();

    return 0;
}
