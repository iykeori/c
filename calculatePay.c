
#include <stdio.h>

int main(){
    double hourlyRate = 0.00, grossPay, tax, netPay;
    int hours, ch; 

    //accept input
    puts("Input Hourly Rate");
    scanf("%lf", &hourlyRate);    
    while ((ch = getchar()) != '\n' && ch != EOF);

    puts("Input no of Hours");
    scanf("%d", &hours);    
    while ((ch = getchar()) != '\n' && ch != EOF);

    grossPay = hourlyRate * hours;
    if (grossPay >= 0 && grossPay <= 300.00){
        tax = 0.15 * grossPay;
    }else if (grossPay >= 300.01 && grossPay <= 400.00){
        tax = 0.12 * grossPay;
    }else if (grossPay >= 400.01 && grossPay <= 500.00){
        tax = 0.15 * grossPay;
    }else if (grossPay >= 500.01 ){
        tax = 0.15 * grossPay;
    }
        
    netPay = grossPay - tax;

    printf("Net Pay: %lf\n", netPay);

    return 0;
}
