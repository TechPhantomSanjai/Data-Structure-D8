#include <stdio.h>
int OddDigitsSum(int input1) {
    int r, sum = 0;
    while(input1 > 0) {
        r = input1 % 10;
        if(r % 2 == 1) {
            sum = sum + r;
        }
        input1 = input1 / 10;
    }
    return sum;
}
//Main Function
int main() {
    int input = 123456789;
    int result = OddDigitsSum(input);
    printf("Sum of odd digits: %d\n", result);
    return 0;
}