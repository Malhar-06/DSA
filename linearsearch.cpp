#include <iostream>
using namespace std;

//linear search algo
//time CPU ; time complexity ; O(n) ; O(Linear) ; n == linear
//worst case scenario : O(n)

malharsearch(int data[], int searchTerm, int length ){
    for(int i=0; i <= length - 1 ; i++){
        if (data[i] == searchTerm ){
            return 0;
        }
    }
    return -1;
}

int main(){
    int data[] = { 7,6,3,8,9,74,2,5,1,58,64,52,48};
    int searchTerm = 58;
    int length = sizeof(data) / sizeof(int);
    cout << malharsearch(data , searchTerm, length) << endl;

return 0;
}

//learning learning learning learning learning learning learning