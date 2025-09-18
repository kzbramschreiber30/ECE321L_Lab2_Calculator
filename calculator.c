#include <stdio.h>
#include <float.h>
void add(int a, int b);
int main() {
    char op;
    int num1, num2;
    num1 = 2;
    num2 = 4;
    add(num1, num2);
}
void add (int a, int b){
    int sum;
    sum = a + b;
    printf("The sum is %i",sum);
}