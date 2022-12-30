/*Pointer to Pointer(Double Pointer): Pointer stores the memory address of other variables. So, when we define a pointer to a pointer, the first pointer is used to store the address of the variables, and the second pointer stores the address of the first pointer.*/
#include <iostream>
using namespace std;
int main(){
    int *p;
    int x = 10;
    p = &x;
    cout << "Address of variable: " << p << endl;
    cout << "Value of x using dereferencing: " << *p << endl;
    int **q;
    q = &p;
    cout << "Address of pointer which is stored in double pointer: " << q << endl;

    cout << "Address of pointer: " << &p << endl;
    cout << *q << endl;
    cout << **q << endl;
return 0;
}