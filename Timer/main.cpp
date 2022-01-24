#include <iostream>
#include "MyTimer.h"



int main()
{
    int val = 0;
    {
        MyTimer timer;
        for (int i = 0; i < 0xFFFFFF; i++)
        {
            val += i;
        }
    }

    return 0;
}