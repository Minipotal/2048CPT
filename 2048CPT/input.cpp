#include "input.h"

keyDetect::keyDetect()
{

}

void keyDetect::arrowDetect()
    {
        bool badKey = true;
        while (badKey)
        {
            badKey = false;
            int c = 0;
            switch ((c = _getch()))
            {
            case KEY_UP:
                break;
            case KEY_DOWN:
                break;
            case KEY_RIGHT:
                break;
            case KEY_LEFT:
                break;
            default:
                badKey = true;
                break;
            }
        }
    }
