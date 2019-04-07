#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {

        key = arr[i];

        setbar(i,arr[i],GREEN);
        delay(0);

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
                delay(0);
            }
            else
            {
                setbar(j+1,arr[j+1],WHITE);
                delay(0);
            }

            j = j - 1;

            setbar(j+1,arr[j+1],RED);
            delay(0);

            setbar(j,arr[j],RED);
            delay(0);
        }

        arr[j + 1] = key;

        setbar(j+1,arr[j+1],WHITE);
        delay(0);

        setbar(j,arr[j],WHITE);
        delay(0);

    }
}

#endif // INSERTION_H_INCLUDED
