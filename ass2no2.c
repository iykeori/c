// 2. Create an application where you declare and initialize an array of 10 numbers (set in the program, not entered as input). Prompt the user for a value and the array position where the number is to be inserted. Rather than simply overwriting the value at this position, your program will shift the current values starting at the insertion point.

// Example:
// Array is 11 12 13 14 15 16 17 18 19 20
// User is to enter 99 at position 3
// Array becomes 11 12 99 13 14 15 16 17 18 19

// Display each value in the ordered array.


#include <stdio.h>
int insertAndPush (int num[10], int value, int position);

int main(){
    //declaration and initialization
    int value, arryPosition,valid =0;
    int ch;
    int num[10] = {11,12,13,14,15,16,17,18,19,20};
    //accepting Inputs
    puts("Input Array Position");
    scanf("%d", &arryPosition);
    while ((ch = getchar()) != '\n' && ch != EOF);

    puts("Input Value");
    scanf("%d", &value);
    while ((ch = getchar()) != '\n' && ch != EOF);
    
    insertAndPush (num, value,arryPosition);
   
    return 0;
}
//Functions
int insertAndPush (int num[10], int value, int position){
    int temp,prevValue = value;
    for ( int i = position; i <10; i++)
    {
        
        temp=prevValue;
        prevValue = num[i];
        num[i] = temp;      
    }
     //output
    for ( int i = 0; i <10; i++)
    {
        printf("Numbers View= %d\n",  num[i]);
    } 

}