#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int digitSum(int input1) {
    bool b = true;
    int r, sum = 0;
    int x = input1, res = 0;
    input1 = abs(input1);
    while(b) {
        while(input1 > 0) {
            r = input1 % 10;
            sum = sum + r;
            input1 = input1 / 10;
        }
        if(sum < 10) {
            b = false;
        }
        else {
            input1 = sum;
            sum = 0;
        }
    }
    if(x < 0) {
        res = -sum;
    }
    else {
        res = sum;
    }
    return res;
}
//Main Function
int main() {
    int input1;
    printf("Enter an integer: ");
    scanf("%d", &input1);
    int result = digitSum(input1);
    printf("Sum of digits: %d\n", result);
    return 0;
}