# Binary, and Hex
---
This chapter is theory. We will practice arithmetic and understand how the different number systems work and why we use them, no code just yet.
* [1.1 Number Systems](#11-what-are-number-systems)
* [1.2 Binary](#12-the-binary-system)
* [1.3 Hexadecimal](#13-hexadecimal)
---
## 1.1 What Are Number Systems
A **number system** is a way of representing numbers using a consitent set of symbols and rules. Different number systems use different _bases_ which determine how many unique digits are used. 

Up to know, we are all familiar with decimal system (base-10):
* Digits: 0,1,2,3,4,5,6,7,8,9

When we do math we dont usually think about it but each number represents a multiple of a power of ten. 
Example:
345 = 3x100 + 4x10 + 5x1 or 345 = 3x10^2 + 4x10^1 + 5x10^0
It is important for students to understand this in base-10 first as this will be the core building block once we move onto binary. Ask students to represent the following numbers as sums of multiplication by powers of 10:
|Question| Solution|
|--------|---------|
|541|5x10<sup>2</sup> + 4x10<sup>1</sup> + 1x10<sup>0</sup>|
|4390|4x10<sup>3</sup> + 3x10<sup>2</sup> + 9x10<sup>1</sup>|
|0.5|5x10<sup>-1</sup>|

Feel free to do more examples as need be. 
In the number systems we are interested in, each position corresponds to a power of the base, this is the case for all the systems we will be exploring. 

## 1.2 The Binary System
The binary system is the languge of computers. It consits of only two digits 1 and 0. The reason computers think like this is because they are operated by trillions of transistors, which for now we will describe as switches. These switches can either be on (1) or off (0). 
The binary system is used to represent these states. It is _base-2_ meaning every digit corresponds to a multiple of a power of 2. 

Counting in binary
|0 |1|   2| 3  | 4  | 5  | 6  | 7 | 8  | 9  | 10  |
|--|-|----|----|----|----|----|---|----|----|-----|
|0 |1| 10 | 11 |100 | 101 |110|111|1000|1001| 1010|

### 1.2.1 Converting from Binary To Decimal
To convert from binary into decimal we take a simple approach, like what we did before when explaing place value. In binary the base is two so as mentioned every digit corresponds to a power of 2. Therefore:

10101 = 1x2<sup>4</sup> + 0x2<sup>3</sup>+ 1x2<sup>2</sup> 0x2<sup>1</sup> + 1x2<sup>0</sup> 
= 16 + 0 + 4 + 0 + 1 
= 21

Try the following examples:
|Question| Solution|
|--------|---------|
|1111|1x2<sup>3</sup> + 1x2<sup>2</sup> + 1x2<sup>1</sup> + 1x2<sup>0</sup>|
|1011|1x2<sup>3</sup> + 0x2<sup>2</sup> + 1x2<sup>1</sup> + 1x2<sup>0</sup>|
|10001|1x2<sup>4</sup> + 0x2<sup>3</sup> + 0x2<sup>2</sup> + 0x2<sup>1</sup> + 0x2<sup>0</sup>|

Note we are more focused on being quick at converting 4-digit binary numbers into decimal, try more examples until the student is comfortable. This skill will be key for understanding hexadecimal and for register manipulation later in the course. 

### 1.2.2 Converting from Decimal To Binary
The process of converting decimal into binary is not as straight forward as before. Although not used very often, this skill is still important. The method to convert between these two systems is as follows: Divide by 2 and record the remainders
Example: 13 into binary
13 ÷ 2 = 6 remainder 1
6 ÷ 2 = 3  remainder 0
3 ÷ 2 = 1  remainder 1
1 ÷ 2 = 0  remainder 1
__Read remainders from bottom to top → 1101__
|Question|Solution|
|----|----|
|5|101|
|15|1111|
|16|10000|
|35|100011|

Note: if the student is advance try and get see if they can figure out what the maximun decimal number you can make with x binary digits, this will help them as we go through the course. Ex, max number for 4 digits is 15. 
### 1.2.3 Why Binary?
While up to now, all that we have coded, saved, and used in our computers has worked around words. Eventually, everything becomes 1s and 0s as computers are nothing but circuits and a circuit can either be high or low. As we delve into smaller and smaller computers, we stop being able to utilize the tools that have made it so that we can avoid binary. Therefore we must learn how to use it. 
Example:
As we have seen in previous projects, every key in the keyboard has a keyCode attached to it, for example A = 65. Your computer, does not store 'A' but rather it stores 65 in binary which is 0b1000001.

## 1.3 Hexadecimal
Hexadecimal is the last, but probably the most important system we will talk about. It is 16-digits, larger than the decimal system and as such it needs extra symbols to function. We should have noticed that binary runs into a big problem. It gets out of hand pretty fast, our last example a siimple two digit number in decimal became 7 digits in binary and while this is efficient for machines it is clumsy for humans. Base 16, being a power of base-2 allows for easy conversion between binary and itself, but more on that later. 

Counting in Hex
|0 |1|   2| 3  | 4  | 5  | 6  | 7 | 8  | 9  | 10  |11|12|13|14|15|
|--|-|----|----|----|----|----|---|----|----|-----|--|--|--|--|--|
|0 |1| 2 | 3 |4 | 5 |6|7|8|9| A|B|C|D|E|F|

## 1.3.1 Converting from Hex to Decimal
Just like before, converting from hex to decimal consits of taking each number and multiplying by a power of the base:
1A = 1x16<sup>1</sup> + 10x16<sup>0</sup> = 16 + 10 = 26
|Question|Solution|
|--------|---------|
|FA|15x16<sup>1</sup> + 10x16<sup>0</sup>|
|25|2x16<sup>1</sup> + 5x16<sup>0</sup>|
|3E|3x16<sup>1</sup> + 14x16<sup>0</sup>|

Try more examples as need be

## 1.3.2 Converting from Decimal to Hex
This skill is not used very often, if interested feel free to cover it but its not key to anything we will do later. 
To convert from decimal to hex we take the same process as we did with binary, divide by the base and take the remainders
Example:
254 to Hex
254 ÷ 16 = 15 remainder 14(E)
15 ÷ 16 = 0   remainder 15(F)
__Read remainder from bottom to top → FE__

## 1.3.3 Binary to Hex
The main reason we are learning hexadecimal is to have an easier more readable way of expressing binary numbers. To begin, lets start simple:
What is the biggest number we can express with 4 Binary Digits?
Ans. 15 
Notice how 15 corresponds to the last digit in the hexadecimal system. Therefore, a group of 4 binary digits can always be represented by just one hexadecimal digit. This idea is key and will allow us to express binary in an easier more readable way.
To convert from binary to hex then, starting from the right, divide your binary number into groups of 4 and find their equivalent hex digit
Ex: 10111100
1. Separate : 1011 1100
2. Find decimal: 1011 = 11 and 1100 = 12
3. Convert to Hex: 11 = B and 12 = C
4. 10111100 = BC

Do some examples, try your best to get students to eventually skip step 2 altogether
|Question|Solution|
|-|-|
|1001|9|
|1110|E|
|11 1000|38|
|1111 1011|FB|

## 1.3.4 Why Does Hex Matter?
Hex is useful as it allows for programmers to work with individual bits, or things that are stored as bits in a simpler more understandable way, you can make numbers that would be huge in binary very small using hex. 
For example:
- Memory addresses are binary, but we read them in hex
- ASCII characters are usually worked on with hex
- Colors are accesed in Hex




[⬅️ Previous Week](#) | [Next Week ➡️](../Week02_C_Basics/manual.md)
