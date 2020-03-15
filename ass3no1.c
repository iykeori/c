// Create an application to allocate enough memory to store 10 integer values (NOT AN ARRAY). 
// Prompt the user for a sequence of 10 numbers and store them in the memory block you allocated. 
// Create a function that will sort the values from largest-to-smallest value (do not use any built-in sort). 
// Display each value in the ordered memory.
// Note: Use pointers throughout.
#include <stdio.h>
#include <stdlib.h>

void sort(int *m_array);

int main(){

    int  *ptr;
    int ch, temp, valid =0;

    int *myInt = (int*)malloc(10 * sizeof(int));
    ptr = myInt;

    puts(" INPUTTING SEQUENCE OF 10 NUMBERS\n");

        int  i = 0;
         while (i <10 )
        {
            valid =1;
            printf("Enter no %d\n", i+1);
            scanf("%d", &temp);
            while ((ch = getchar()) != '\n' && ch != EOF){
                valid = 0;
            }
                
            if (valid == 0)
            {
                puts("invalid inputs");

            } else
            {
                *ptr = temp;
                ptr++;
                valid = 0;
                i++;
            }

        }
  
    
    sort(myInt);
    return 0;
}
//Sorting Function
void sort(int *m_array){
    int *m1, *m2;
    int temp;
    m1 = m_array;
    for (int i = 0; i < 9; i++)
    {
        m2=m1;
        for (int j = i+1; j < 10; j++)
        {
            m2++;
            if (*m2 > *m1)
            {
                temp = *m1;
                *m1 = *m2;
                *m2 = temp;
            }
            
        }
        m1++;
        
       
    }

    //output
    int *output;
    output = m_array;

    for (int i = 0; i < 10; i++)
    {
        printf("Value: %d, Mem Address: %p\n" ,*output, output);
        output++;
    }
    
    
}