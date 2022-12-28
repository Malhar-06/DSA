#include <stdio.h>

int main(){


    /*Memory Leakage: When developer handles memory allocation and fails/forgot to free up the memory that is no longer required that time memory leakage will happen.*/

    //If we want to allocate array in heap memory ie. dynamic array. see below code...

    int *arr = (int *) malloc(5 * sizeof(int)); //allocation
    //here int * means we want to store data int, 
    //5*sizeof(int)- means 5 data we want to store and int size is 4 byte. hence 5*4 = 20 bytes we need.
    *arr = 10; //stored 1st element
    *(arr + 1) = 20; // stored 2nd element
    printf("%d\n", *arr);
    printf("%d\n", *(arr+1));
    free(arr); //de-allocation

    return 0;
}
//In this code, There are some errors but still, we get output so please, consider that.