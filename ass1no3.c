// Create an application that prompts a user to enter two numbers. 
// Create 4 functions (addThem, subtractThem, multiplyThem, and divideThem) that accepts both entered values, 
// does the appropriate mathematic operation, and sends the result back to the program. After the numbers are entered (and verified), 
// call each function in your program and display the result of the function calls using the following format: x plus y is result, x minus y is result2, etc...
#include <stdio.h>
int addThem(int a, int b);
int subtractThem(int a, int b);
int multiplyThem(int a, int b);
int divideThem(int a, int b);

int main(){
    //declaration and initialization
    int num1=0, num2=0,valid =0;
    int ch;
    //accepting Inputs
   while (valid == 0){
        puts("Enter Number 1");
        scanf("%d", &num1);
        while ((ch = getchar()) != '\n' && ch != EOF);
        if(num1 != 0 && num1 >= 1 )
            valid =1;
   }
   valid = 0;
   while (valid == 0){
        puts("Enter Number 2");
        scanf("%d", &num2);
        while ((ch = getchar()) != '\n' && ch != EOF);
        if(num2 != 0 && num2 >= 1 )
            valid =1;
   }
   addThem(num1, num2);
   subtractThem(num1, num2);
   multiplyThem(num1, num2);
   divideThem(num1, num2);

    return 0;
}
//Functions
int addThem(int a, int b){
    return printf("\nx plus y is %d\n", a+b);
}

int subtractThem(int a, int b){
    return printf("x minus y is %d\n", a-b);
}

int multiplyThem(int a, int b){
    return printf("x multiplied y is %d\n", a*b);
}

int divideThem(int a, int b){
    return printf("x divided y is %d\n", a/b);
}