#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include"function.h"
#include"class_array.h"
#include"selection.h"
#include"Insertion.h"
#include"Merge.h"
#include"Quick.h"
using namespace std;

// driver code
int main()
{

    arrayfunc A; // Object Declaration
    A.random_array(100,500); //Initializing with size and range of numbers
    A.print_array();

    selectionSort(A.arr,A.n);

    A.print_array();
    A.reset_array();
    A.print_array();

    delay(1000);
    insertionSort(A.arr,A.n);

    A.print_array();
    A.reset_array();
    A.print_array();

    delay(1000);
    mergeSort(A.arr,0,A.n);

    A.print_array();
    A.reset_array();
    A.print_array();

    delay(1000);
    quickSort(A.arr,0,A.n);

   getch();
   closegraph();
}


