#ifndef QUICK_H_INCLUDED
#define QUICK_H_INCLUDED

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    setbar(high,pivot,RED);
    delay(0);
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            setbar(i,arr[i],RED);
            setbar(j,arr[j],RED);
            delay(0);

            swap(&arr[i], &arr[j]);

            setbar(i,arr[i],WHITE);
            setbar(j,arr[j],WHITE);
            delay(0);

        }
        else
        {
            setbar(j,arr[j],RED);
            delay(0);
            setbar(j,arr[j],WHITE);
            delay(0);
        }

    }

    setbar(i+1,arr[i+1],RED);
    setbar(high,arr[high],RED);
    delay(0);

    swap(&arr[i + 1], &arr[high]);

    setbar(i+1,arr[i+1],WHITE);
    setbar(high,arr[high],WHITE);
    delay(0);

    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

#endif // QUICK_H_INCLUDED
