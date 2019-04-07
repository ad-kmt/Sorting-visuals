#ifndef CLASS_ARRAY_H_INCLUDED
#define CLASS_ARRAY_H_INCLUDED

class arrayfunc{

public:
    int n;                  //size
    int *arr = new int[n];
    int range;              //range

    void random_array(int n,int range); //generates random elements to array.

    void reset_array(); //resets the sorted array with random elements.

    void print_array(); //last display of array after sorting.

};

    void arrayfunc::random_array(int n,int range)
    {
        this->n=n;
        this->range=range;

        for(int i=0;i<n;i++)
        {
            arr[i]= rand()%range+1; // range: 1-range
        }

        int gd = DETECT, gm;

        initgraph(&gd, &gm, "C:\\TC\\BGI");
        initwindow(10*this->n,this->range+50,"Visualization");
    }

    void arrayfunc::reset_array()
    {
        for(int i=0;i<n;i++)
        {
            arr[i]= rand()%range+1; // range: 1-range
        }
    }

    void arrayfunc::print_array()
    {
        for(int i=0;i<100;i++)
        {
            setbar(i,arr[i],GREEN);
            delay(10);
        }
        for(int i=0;i<100;i++)
        {
            setbar(i,arr[i],WHITE);
            delay(10);
        }

    }


#endif // CLASS_ARRAY_H_INCLUDED
