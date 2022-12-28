/*In memory, we can store data in 2 ways.
1)Continuous: Single contiguous section/part of memory is allocated to a process Eg. Array.
2)Noncontinuous: Allocates the memory space in different locations to the process as per its requirements Eg. Linked List*/


/*Stack Memory:
    ➔Whenever a function is called, its variables get memory allocated on the stack. And whenever the function call is over, the memory for the variables is de-allocated.
    ➔It means allocation & de-allocation will happen automatically. We as adeveloper don’t have control over that part.
    ➔As soon as the method finishes its execution all the data belonging to that method flushes out from the stack automatically.

Heap Memory:
    ➔If we want to control then we have to used Heap memory.
    ➔It allows dynamic memory allocation, which is allocated at the time of execution of instructions.
    ➔Memory is allocated in the random order, and the pointers are used inorder to access the data.
    ➔As a developer we have to manually deallocate the memory.*/

/*If we want 4 bytes of space in memory then we have to use malloc() function in C.
Eg.int *p = malloc(4);
Where, p contains the address.
And if we want to de-allocate then we have to use the free()function.
*/

#include <stdio.h>

//heap memory example
main(){
    int *p = malloc(4); //allocation - 4 bytes
    *p = 50; //de-referencing
    printf("%d, *p");
    free(p); //de-allocation
    /*Even though the function will stop , the heap memory data is still there if we don’t deallocate memory using the free() function.*/

}
//In this code, There are some errors but still, we get output so please, consider that.