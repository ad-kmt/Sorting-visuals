#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED


void insertionSort(int arr[], int n)
{
    int Delay = 10; //change this delay value for slower/faster visualization.

    ostringstream str2;
    str2<<Delay;
    string str1 = "Delay: ";
    string str3 = " ms";
    string str = str1 + str2.str() + str3;

    setviewport(0,0,1000,520,0);
    outtextxy(10,510,"INSERTION SORT");
    outtextxy(260,510,&str[0]);

    int i, key, j;
    for (i = 1; i < n; i++) {

        key = arr[i];

        setbar(i,arr[i],GREEN);
        delay(Delay);

        j = i - 1;

        setbar(j,arr[j],RED);

         /*Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];
            if(j+1==i)
            {
                setbar(j+1,arr[j+1],GREEN);
                delay(Delay);
            }
            else
            {
                setbar(j+1,arr[j+1],WHITE);
                delay(Delay);
            }

            j = j - 1;

            setbar(j+1,arr[j+1],RED);
            delay(Delay);

            setbar(j,arr[j],RED);
            delay(Delay);
        }

        arr[j + 1] = key;

        setbar(j+1,arr[j+1],WHITE);
        delay(Delay);

        setbar(j,arr[j],WHITE);
        delay(Delay);
        }
        setbar(i,arr[i],WHITE);
        delay(Delay);
}

#endif // INSERTION_H_INCLUDED
