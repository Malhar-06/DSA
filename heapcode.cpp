#include <iostream>
using namespace std;

int main(){
    int *p;
    int x = 5;
    p = &x;

    cout << p << endl;
    cout << &p << endl;

    int **q;  /*double pointer means *q will go to the memory position of &p
                and again **q will go into *q memory position and extracts the data*/
    q = &p;
    cout << q << endl;
    //that's why the output shows the same memory address.

return 0;
}