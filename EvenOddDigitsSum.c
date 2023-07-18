#include <stdio.h>
#include <string.h>
int EvenOddDigitsSum(int input1, char* input2) {
    if (strcmp(input2, "odd") == 0) {
        int sum = 0;
        while (input1 > 0) {
            int r = input1 % 10;
            if (r % 2 != 0) {
                sum += r;
            }
            input1 /= 10;
        }
        return sum;
    } else {
        int sum = 0;
        while (input1 > 0) {
            int r = input1 % 10;
            if (r % 2 == 0) {
                sum += r;
            }
            input1 /= 10;
        }
        return sum;
    }
}
//Main Function
int main() {
    int inputNum = 123456789;
    char inputStr[] = "odd";
    int result = EvenOddDigitsSum(inputNum, inputStr);
    printf("Sum of even or odd digits: %d\n", result);
    return 0;
}