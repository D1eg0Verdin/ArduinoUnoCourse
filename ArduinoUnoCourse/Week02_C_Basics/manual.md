# C Language Bootcamp

In week 1 we focuesed on binary and hex the real way computers store data. This week will be a shift in gears and we shall learn how we can begin to work to apply this knowledge by using **C**, one of the most widely used low-level language. 

It is assumed that students have some good java skills before going into this course but if not make sure to review all the syntax in detail as, synthatically C is very simalr to java. C, however, also removes some of Java's safety nets. Understanding C will be essential for working with hardware registers later in the course. 

Note the main bulk of the course work will be done in wokwi, however for this part of the course we need to use an IDE. I have chosen VSCode as it is versatile and getting used to it is important in my opinion. If your student is more comfortable somewhere else by all means use that. I have added a setup guide as to how setup VSCode for C.

## Final Mini-Project Goals
By the end of this manual students should be able to :
- Write, compile and run simple C programs
- Use variables, loops, conditionals and functions in C
- Understand how C differs from Java (no classes, manual memory, printf)
- build a simple binary counter program that displays numbers in decimal binary and hex

## 2.1 Hello World
In Procesing creating simple programs was quite easy. To have the classic print hello world one might do the following:

```java
void setup(){
    println("Hello, World");
}
```
The syntax for C is quite similar:
```c
#include <stdio.h> //standard i/o lib
int main(){ //void does not exist in c
    printf("Hello,World \n");
    return 0; //bc main is int we must return 0
}
```
Key differences are that because in C we are not interested in displaying or creating screens, there is no predefined setup or draw functions, instead programs start at main().
In addition libraries must be included manually using #include

## 2.2 Variables and Data Types
In Java we used types but we did not really talk about the reason behind them and how they work in the back end. In C it is important to explore all of them and all their quirks and features 

**Common C Types:**
- int: whole numbers
- float: decimal (less precise than Java's Float)
- char: single characters
- double: high precision decimal
- unsigned __ : only positive, can be float int or double

Unlike java, which formatted everything for us when printing C does not do that. Take a look at the next example to see how we can format our print statements:

```c
#include <stdio.h>

int main() {
    int age = 16;
    float gpa = 3.7;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    return 0;
}
```
**Formatting Codes:**
- %d: integer
- %f: float
- %c: character
- %s: string
- %X: hexadecimal

Try asking students the following:

_if char c = 65; what will printf("%c",c); display_ Make sure to use this chance to introduce them to the ascii table if they dont know about it.

## 2.3 Conditionals
The syntax for conditionals is the same as java, only caveat is that there is no standard boolean type in C, instead 0 means false and nonzero means true
```c
int age = 15;
if (age >= 16) {
    printf("You can drive!\n");
} else {
    printf("Not yet!\n");
}
```
**Excercise:**
Try and get students to write a program that checks wether an integer x is even or odd, use this oppurtinity to review the % operator

**Solution:**
```c
int x = 4;
if(x %2 == 0){
    printf("%d is even", x);
}
else{
    printf("%d is odd", x);
}
```
## 2.4 Loops:
Basically identical to java, depending on the version of C that is being used, the variable for the for loop might have to be declared outside of the loop:
```c
int i;
for(i = 0; i <5; i++){
    printf("%d \n",i);//note how we must put/n as println does not exist
}
```
## 2.5 Functions:
Funtions stand alone in C, there is no such thing as classes and as such they need to be on their own.

**Example:** challenge students to write a function that converts binary to decimal, review the process we learned on CM1
```c
#include <stdio.h>

void decimalToBinary(int n) {
    int bits[32];   // store remainders
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    // divide by 2 until 0
    while (n > 0) {
        bits[i] = n % 2;  // remainder
        n = n / 2;
        i++;
    }

    // print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main() {
    int num = 23;
    printf("Decimal: %d → Binary: ", num);
    decimalToBinary(num);
    return 0;
}
```
## 2.6 Mini Project Binary Counter
If students were unable to create the whole previous function on their own its okay. Now lets see if they can use it. Ask students to use what we have learned so far and the function we developed to build a program that prints numbers 0-15 in decimal, binary and hex.

```c
#include <stdio.h>

void decimalToBinary(int n) {
    int bits[32];   // store remainders
    int i = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    // divide by 2 until 0
    while (n > 0) {
        bits[i] = n % 2;  // remainder
        n = n / 2;
        i++;
    }
    int j;
    // print in reverse order
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main() {
   int i;
   for(i = 0; i < 16; i++){
        printf("Decimal: %d Binary: ",i);
        decimalToBinary(i);
        printf(" Hexadecimal: %X \n",i);
   }
   return 0;
}
```


---
[⬅️ Previous Week](../Week01_Binary_ASCII/manual.md) | [Next Week ➡️](../Week03_Pointers/manual.md)
