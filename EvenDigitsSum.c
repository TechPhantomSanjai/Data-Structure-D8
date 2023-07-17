#include <stdio.h>
int EvenDigitsSum(int input1) {
    int r, sum = 0;
    while (input1 > 0) {
        r = input1 % 10;
        if (r % 2 == 0) {
            sum = sum + r;
        }
        input1 = input1 / 10;
    }
    return sum;
}
//Main Function
int main() {
    int input1;
    printf("Enter an integer: ");
    scanf("%d", &input1);
    int result = EvenDigitsSum(input1);
    printf("Sum of even digits: %d\n", result);
    return 0;
}