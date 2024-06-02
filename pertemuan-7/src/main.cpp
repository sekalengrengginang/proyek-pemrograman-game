#include <sl.h>
int main()
{
    slWindow(800, 600, "Animation", false);
    int sprites[] = {
        slLoadTexture("./assets/player-run-1.png"),
        slLoadTexture("./assets/player-run-2.png"),
        slLoadTexture("./assets/player-run-3.png"),
        slLoadTexture("./assets/player-run-4.png"),
        slLoadTexture("./assets/player-run-5.png"),
        slLoadTexture("./assets/player-run-6.png"),
    };
    int idxSprite = 0;
    double duration = 0;
    while (!slShouldClose())
    {
        slSetBackColor(1, 1, 1);
        slSprite(sprites[idxSprite], 200, 200, 68, 88);
        duration += slGetDeltaTime();

        if (duration >= 2)
        {
            idxSprite++;
            if (idxSprite >= 6)
            {
                idxSprite = 0;
                duration = 0.0;
            }
        }
        slRender();
    }
    slClose();
    return 0;
}