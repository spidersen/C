#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    printf("Hello world!\n");

    int h, min, seg, x;
    x = 0.1;

    for(h = 0; h < 24; h++)
    {
        for(min = 0; min < 60; min++)
        {
            for(seg = 0; seg < 60; seg++)
              {
                 printf("%02d:%02d:%02d\r ", h, min, seg);
                Sleep(x);
              }

        }
    }







    return 0;
}
