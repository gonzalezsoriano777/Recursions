#include <stdio.h>
#include <math.h>

int expo(int, int);

int exponr(int, int);

int main(void)
{
    int nonExpo = exponr(2, 1);
    printf("This is the non recursive %i.\n", nonExpo);
    int Expo = expo(6, 5);
   printf("This is recursive %i.\n", Expo);
}

int expo(int num, int Ofpower)
{
    if(Ofpower == 0) // any number that is equivalent to 0 is 1
    {
        return 1;
    }
    return num = pow(6, 5);
}

int exponr(int num, int ofpower)
{
     int local = 1; // if there is a 0 power the lowest would be one for a return

     for (int i = 0; i < num; i++)
     {
         // int answer = pow(6, 5);
         local = pow(2, 3);

    }
    return local;
}
