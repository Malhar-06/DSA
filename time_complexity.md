## What is Time Complexity?
Time complexity is the computational complexity that describes the amount of CPU time it takes to run an algorithm. Time complexity is commonly estimated by counting the number of elementary operations performed by the algorithm.
or
Fuction that gives us the relationship about how the time will grow as the input grows.

## What is Big O?
Big O, also known as Big O notation, represents an algorithm's worst-case complexity. It uses algebraic terms to describe the complexity of an algorithm. Big O defines the runtime required to execute an algorithm by identifying how the performance of your algorithm will change as the input size grows.
let me explain it by giving some examples:

```c++
#include <iostream>
using namespace std;
int algebric(int n){
// algo 1 - O(n)
	int temp = 0;
	for(int i=1; i<=n; i++) {
	temp = temp + i;
	}
}
	
// algo 2 : O(1)
int arithmetic(int n) {
	return n * (n+1) / 2;
	}
	
	
int main(){
    cout << algebric(100) << endl;
    cout << arithmetic(100) << endl;
}
```
Here, There are two algorithms both perform the same task the only difference between them is the efficiency with repect to time. you can check it by executing algorithms individually.
Ultimate goal of every developer is to gain the efficiency of code and save the time. Time Complexity plays the vital role to acheive the same.


statement == operation == 1CPU unit time\
Best case scenario :- O(1), O(5), etc. //constant.\
Worst case scenario :- O(n). //linear\
In the below code we will see both case scenario:\
for loop means O(n) & other  5 line means O(5)\
This is the combination O(5 + n)

```c++
#include "iostream"
using namespace std;

int mixed(int n) {
	int x = 5;
	int y = 10;
	int z;
	for(int i=0; i<= 10; i++)
	{
		cout << i << endl;
	}
	z = x + y + n;
	return z;
}

int main() {
	cout << mixed(5000) << endl;
}
```

