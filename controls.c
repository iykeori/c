/* control statements => there are 4

    for (count=1; count <=20; count++){
        //loop code goes here
    }

    while (count != 50){
        //loop code here. 
        //count needs to break test at some point
    }

    do{
        //loop code here. 
        //count needs to break test at some point
    } while (count <= 20);

    switch (count){
        case 1: task; break;
        case 2: task; break;
        case 3: task; break;
        default: ;
    }

   

*/ 
#include <stdio.h>

int main(){
    int x = 10, y =50, z = 0;

    if (x>y){
        puts("x is greater than y");

    }else {
        puts("X is not greater than y");
    }

    if(z != 0 && x/z > 10){
        puts("do this if z is 0 - division by 0");

    }else
    {
        puts("x/z is not greater than 10");
    }

    switch (x){
        case 1: puts("x is 1"); break;
        case 2: puts("x is 1"); break;
        case 10: puts("x is 1"); break;
        default: puts("out of range");       
    }
    

}