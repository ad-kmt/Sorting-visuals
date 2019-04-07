#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED



void delport(int x)
{
    setviewport(10*x,0,10+10*x,500,1);
    clearviewport();
}

void setbar(int x,int value,int color)
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
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

#endif // FUNCTION_H_INCLUDED
