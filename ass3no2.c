// Create an application to allocate enough memory to store 10 integer values. Using a while loop, an counter, and an incrementing pointer,  set the initial values to:
// 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 (counter variable added to running sum)
// Prompt the user for a value and the position where the number is to be inserted. Rather than simply overwriting the value at this position, your program will shift the current values starting at the insertion point.

// Example:
// Stored values are 1, 3, 99, 6, 10, 15, 21, 28, 36, 45
// User is to enter 99 at position 3
// Stored values become 11 12 99 13 14 15 16 17 18 19

// Display each value in the ordered memory space.
#include <stdio.h>
#include <stdlib.h>

void insertAndMove(int *myInt, int position, int value);


int main(){
    int ch;
    int valid;
    int *myInt = (int*)malloc(10 * sizeof(int));
    int *ptr;
    ptr = myInt;
    int position;
    int value;
    int sum;
    int temp=0;

    for (int i = 0; i <10; i++)
    {
        sum = i + temp;
        *ptr = sum;
        temp = sum;
        ptr++;
    }
    //Accepting inputs
    
    valid = 0;
    while (valid == 0)
    {
        valid = 1;
        puts("Input Array Position\n");
        scanf("%d", &position);
        while ((ch = getchar()) != '\n' && ch != EOF){
            valid = 0;
        }
        if (valid == 0){
            puts("invalid input");
        }
    }
    valid = 0;
    while (valid == 0)
    {
        valid = 1;
        puts("Input Array Value\n");
        scanf("%d", &value);
        puts("-----------------\n");
        while ((ch = getchar()) != '\n' && ch != EOF){
            valid = 0;
        }
        if (valid == 0){
            puts("invalid input");
        }
    }
    
    insertAndMove( myInt,  position, value);

    return 0;
}

void insertAndMove(int *myInt, int position, int value){
    int *m1,*m2,*m4;
    int temp, t2;
    m1 = myInt;
    for (int i = 0; i < 10; i++)
    {
        m2=m1;
        m4 =m2;

        if (position == i)
        {
            temp = *m2;
            *m2 = value;
            m2++;

            for (int j = position +1; j < 10; j++)
            {
                t2 = *m2;
                *m2 = temp;
                temp = t2;
                m2++;

            }
            
        }
        m1++;       

    }
    int *m3;
    m3 = myInt;
    //Display
    for (int a = 0; a < 10; a++)
    {
        printf("%d\n", *m3);
        m3++;
    }
    
}