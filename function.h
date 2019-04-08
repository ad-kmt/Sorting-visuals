#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED



void delport(int x)
{
    setviewport(10*x,0,10+10*x,500,1);
    clearviewport();
}

void setbar(int x,int value,int color) //forms a bar of a given height and at a defined position.
{
    delport(x);
    setviewport(10*x,0,10+10*x,500,1);
    setfillstyle(SOLID_FILL, color);
    bar(0, 500-value, 9, 500);
    delay(0.5);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

#endif // FUNCTION_H_INCLUDED
