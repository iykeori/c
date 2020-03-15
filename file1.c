#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    char filename[100];
    char writestr[150];
    char readstr[150];

    //get a file name
    puts("Please enter a filename");
    fgets(filename, 100, stdin);


    //get a string to write
    puts("Please enter a string to write to a file");
    fgets(writestr, 150, stdin);


    //open the file in write mode
    fp = fopen(filename, "w");


    //write the string to the file
    if(fp) {
        fputs(writestr, fp);

    }else
    {
        puts("cannot open the file. exiting");
        exit(1);
    }
    

    //close the file
    fclose(fp);

    //open the file for reading
    if (fopen(filename, "r") == NULL)
    {
        puts("Error opening file for reading. Exiting");
        exit(2);
    }
    
    //read a line from the file
    fscanf(fp, "%[^\n]", readstr);
    printf("Data from the file: %s\n", readstr);

    //close the file
    fclose(fp);


    return 0;
}