#include <stdio.h>
#include <float.h>
void add(float a, float b);
void sub(float a, float b);
void mult(float a, float b);
void div(float a, float b);
int main() {
    char op;
    float num1 = 0.0, num2 = 0.0;
     // Prompt the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op); // Read the operator character
    //Prompt the user to enter two numbers
    printf("Enter two numbers: \n");
    scanf("%lf %lf", &num1, &num2);
    if (op == '+'){
        add(num1, num2);
    }
    else if (op == '-'){
        sub(num1, num2);
    }
    else if (op == '*'){
        mult(num1, num2);
    }
    else if (op == '/'){
        div(num1, num2);
    }
    else {
        printf("Invalid Operator Entered! \n");
        return 1;
    }
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