// 1. Create an application that prompts the user for a sequence of 10 numbers. 
// Create a function that will sort the array from largest-to-smallest value (do not use any built-in sort). 
// Display each value in the ordered array.


#include <stdio.h>
int LargeToSmall (int num[10]);

int main(){
    //declaration and initialization
    int valid =0;
    int ch;
    int num[10];
    //accepting Inputs
    for ( int i=0; i <10; i++)
    {
        printf("Enter Number %d\n", i+1);
        scanf("%d", &num[i]);
        while ((ch = getchar()) != '\n' && ch != EOF);
        if(num[i] != 0 && num[i] >= 1 )
            valid =1;
        valid=0;
    }
     LargeToSmall (num);
    
   
    return 0;
}
//Functions
int LargeToSmall (int num[10]){
    for ( int i = 0; i <10; i++)
    {
        int temp;
        for ( int j= i+1; j <10; j++)
        {
            if (num[j] > num[i])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
                
            }
        }
                   
    }
    //output
    for ( int i = 0; i <10; i++)
    {
        printf("largest no %d: %d\n", i+1, num[i]);
    } 

}