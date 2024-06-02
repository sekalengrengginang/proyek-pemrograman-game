#include "sorcerer.h"
#include <sl.h>

Sorcerer::Sorcerer(int resid)
{
    health=5;
    postX =400;
    postY =300;
    resID = resid;
}

void Sorcerer::jump(double vy)
{
}

void Sorcerer::die()
{
}

void Sorcerer::draw()
{
    slSprite(resID,postX,postY,128,128);
}

void Sorcerer::update(double dt)
{
    postY--;
}
