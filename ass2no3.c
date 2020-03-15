// 3. Create a program where you define a ‘Student’ structure to represent a 
// student’s name, id and grades for C, SAAD, OOP, COMM, APPD, JS. Declare an array of 5 ‘Students’ 
// and initialize them within your program. 
// Loop through the array and display the student’s information as well as their average for the 6 courses.

#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    char id[50];
    int c;
    int saad;
    int oop;
    int appd;
    int js;  
};


int main(){
   //Declaring and intializing
    struct Student stud[5];

    strcpy(stud[0].name, "Brandon");
    strcpy(stud[0].id, "w0425678");
    stud[0].c = 88;
    stud[0].saad = 92;
    stud[0].oop = 85;
    stud[0].appd = 95;
    stud[0].js = 95;

    strcpy(stud[1].name, "Drew");
    strcpy(stud[1].id, "w0455558");
    stud[1].c = 88;
    stud[1].saad = 92;
    stud[1].oop = 85;
    stud[1].appd = 95;
    stud[1].js = 95;

    strcpy(stud[2].name, "Daylce");
    strcpy(stud[2].id, "w0411118");
    stud[2].c = 88;
    stud[2].saad = 92;
    stud[2].oop = 85;
    stud[2].appd = 95;
    stud[2].js = 95;

    strcpy(stud[3].name, "David");
    strcpy(stud[3].id, "w0425999");
    stud[3].c = 88;
    stud[3].saad = 92;
    stud[3].oop = 85;
    stud[3].appd = 95;
    stud[3].js = 95;

    strcpy(stud[4].name, "Kirkland");
    strcpy(stud[4].id, "w0422063");
    stud[4].c = 88;
    stud[4].saad = 92;
    stud[4].oop = 85;
    stud[4].appd = 95;
    stud[4].js = 95;

    //Display Loop
    for(int i=0; i <5; i++){
        puts("\n--------------------------\n");
        printf("Student Name: %s\n", stud[i].name);
        printf("Student ID: %s\n", stud[i].id);
        printf("C Grade: %d\n", stud[i].c);
        printf("SAAD Grade: %d\n", stud[i].saad);
        printf("OOP Grade: %d\n", stud[i].oop);
        printf("APPD Grade: %d\n", stud[i].appd);
        printf("JS Grade: %d\n", stud[i].js);

    }

    return 0;
}