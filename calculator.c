#include <stdio.h>
#include <float.h>
void add(float a, float b);
void sub(float a, float b);
void mult(float a, float b);
void div(float a, float b);
int main() {
    char op;
    float num1, num2;
    num1 = 6.0;
    num2 = 7.0;
    add(num1, num2);
    dif(num1, num2);
    mult(num1, num2);
    div(num1, num2);
}
void add (float a, float b){
    float sum;
    sum = a + b;
    printf("The sum is %f",sum);
}
void sub (float a, float b){
    float dif;
    dif = a - b;
    printf("The difference is %f", dif);
}
void mult(float a, float b){
    float product;
    product = a * b;
    printf("The product is %f", product);
}
void div(float a, float b){
    float quotient;
    if (b != 0){
        quotient = a / b;
    } 
    else{
        printf("Divide by Zero Error! \n");
    }  
    printf("The quotient is %f", quotient);
}