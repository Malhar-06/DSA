#include <iostream>
using namespace std;
int main(){
    //allocate heap memory to array
    //"new" means allocate heap memory 
    int *a = new int[5];

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    a[3] = 40;
    a[4] = 50;

    cout << a[4] << endl;

    //deallocate memory from heap

    //delete a;
               /*this line is very dangerous here we didn't declared that we want to delete whole array,
                we just give instruction to delete the "a" variable but on this array a means firat element in the array
                and whenever we get the address of the array it gives address of first element, and if we delete that first element 
                then how can we access other element in the array 
                and here the concept of "MEMORY LEAKAGE comes"    */
    
    delete []a; // this is the right syntax to deallocate heap array

    cout << sizeof(a) << endl; /*in c++ pointer array size is normally 8 byte
                                but output varies compiler to compiler
                                but how to find the size of whole pointer array ?
                                we will see that in the next code bases    */

    int b[5];
    cout << sizeof(b) << endl; //"stack memory" here output will come 20 byte

return 0;
}