#ifndef MERGE_H_INCLUDED
#define MERGE_H_INCLUDED

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int Delay = 10; //change this delay value and the delay value at line 87 for slower/faster visualization.

    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
       {
            L[i] = arr[l + i];
       }
    for (j = 0; j < n2; j++)
    {
            R[j] = arr[m + 1+ j];
    }

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {

            arr[k] = L[i];
            setbar(k,L[i],RED);
            delay(Delay);
            setbar(k,L[i],RED);
            delay(Delay);
            i++;
        }
        else
        {
            arr[k] = R[j];
            setbar(k,R[j],RED);
            delay(Delay);
            setbar(k,R[j],RED);
            delay(Delay);
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        setbar(k,L[i],RED);
        delay(Delay);
        setbar(k,L[i],RED);
        delay(Delay);
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        setbar(k,R[j],RED);
        delay(Delay);
        setbar(k,R[j],RED);
        delay(Delay);
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    int Delay = 10;

    ostringstream str2;
    str2<<Delay;
    string str1 = "Delay: ";
    string str3 = " ms";
    string str = str1 + str2.str() + str3;

    setviewport(0,0,1000,520,0);
    outtextxy(10,510,"MERGE SORT       ");
    outtextxy(260,510,&str[0]);

    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

#endif // MERGE_H_INCLUDED
