# Pointers & Memory
It is that time. Pointers are arguably the hardest thing about C so take your time with this manual and make sure that students properly understand how they work and how we use them in things like arrays and strings. 
Understanding pointers will be essential to give us direct acces to memory. This wil be crucial when we hop over to hardware programming as the computer gets tinier and we must be efficient with how we manage its memory. 

We will continue in VSCode this week as pointers are best visualized in a full IDE with a debugger

**Final Mini-Project Goals:**
By the end of the manual students should be able to:
- Understand memory addresses and how data is stored in memory
- Use pointers to access and modify variables
- Understand difference between stack and heap memory
- Write simple C programs using pointers
- Dynamically allocate and free memory

## 3.1 Memory and Addresses
In any program, each variable must be stored somewhere in your computer. The variable's home, just like yours has an address so that the computer knows where to look when it is time to use said variable. In Java the address is hidden from us and we are unable to access it. C allows us to see this address using the "&" operator.

```c
#include <stdio.h>

int main() {
    int x = 42;
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x); // %p prints a memory address
    return 0;
}
```
Make sure students understand the difference between the name of the variable, the value of the variable and the address of the variable. 

## 3.2 Pointers
A pointer is a new type of variable, specifically it is one that stores a memory address. It is not quite a new type, however, as you must specify what the address will store (more on why later)

**Syntax**
```c
int *ptr; //ptr is a pointer to an int
int* ptr;//works just fine too (i like this better as sometimes ppl might think the asterisk is a part of the variable name)
```
|Important: The symbol * is used in **two different ways** in C depending on the context

Above it is used to declare a pointer. It can also be used to dereferece: access the value stored at the address the pointer points to.

```c
int x = 42;
int* ptr = &x; // store the address of x in ptr

printf("Value at ptr: %d\n", *ptr); // dereference ptr to get the value of x
*ptr = 100; // change x through the pointer
printf("x after change: %d\n", x);
```
Note how the dereference pointer is just the variable in the previous code *ptr could have been replace by x. 

## 3.3 Arrays and Pointers
Up to know students might be wondering what the point of pointers are if we just use them like a normal variable. In C, pointers are extremely useful when using arrays as the name of an array is a pointer to its first element. 

Think of an array as a succesive set of houses. In memory an array is consecutive, meaning that all the memory addresses are next to each other, meaning if we point to i numbers after the start of the array in memory, we will get the third element of the array. 

![](/ArduinoUnoCourse/images/array.gif)

Walk the student as to how we can iterate through an array using pointers:
```c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr; // pointer to first element

    for(int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, *(ptr + %d) = %d\n", i, arr[i], i, *(ptr + i));
    }

    return 0;
}
```
## 3.4 Dynamic Memory Allocation

C allows for us to decide when we need a certain amount of memory and when we do not. In java or other languages this is strictly not allowed as it does not trust us to make sure the memory is used efficiently. 
---
[⬅️ Previous Week](../Week02_C_Basics/manual.md) | [Next Week ➡️](../Week04_Wokwi_ArduinoAPI/manual.md)
