/*For printing in C, printf() function is used. And this function comes from the stdio.h library. In function we have to pass a total of 2 parameters. One is the format specifier which tells which type of data we have to print and the other is variable name.*/
#include <stdio.h>

int main(){
    // int x = 5;
    // printf("%d", x);
    // printf("\n");



/*For reading data from the console in C, scanf()function is used. For this we have to pass a total of 2 parameters. One is the format specifier which tell which type of data we have to pass and other is address of variable where we store the data.*/
    int z;
    printf("Enter an integer: ");
    scanf("%d", &z);//read data from user
    printf("You entered the integer %d.\n",  z);//print the data


// /*Using the index value, we can access the array elements in constant time. So the timecomplexity is O(1).
// ie.constant for accessing an element in the array.*/
// int a[] = {1,2,3,4,5,6};
//     printf("%d", a[2]);
//     printf("\n");
//     printf("%d", *(a+2));//using pointer

return 0;

}