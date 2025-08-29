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
