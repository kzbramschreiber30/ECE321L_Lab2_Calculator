#include <stdio.h>
#include <float.h>
void add(int a, int b);
void sub(int a, int b);
int main() {
    char op;
    int num1, num2;
    num1 = 6;
    num2 = 7;
    add(num1, num2);
    dif(num1, num2);
}
void add (int a, int b){
    int sum;
    sum = a + b;
    printf("The sum is %i",sum);
}
void sub (int a, int b){
    int dif;
    dif = a - b;
    printf("The difference is %i", dif);
}