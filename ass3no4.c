// Create a program where the user is continuously prompted for text until a -1 is entered. Each entered line of text is to be written to a file (except the -1). 
// When the user finishes their data entry, retrieve each line of text from the file and display
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fp;
    char filename[100];
    char writestr[150];
    char readstr[150];
    int progress = 1;


    //get a file name
    puts("Please enter a filename");
    fgets(filename, 100, stdin);

    //open the file in write mode
    fp = fopen(filename, "w");
    int count = 0;
    while (progress == 1)
    {
        //get a string to write
        puts("Please enter a string to write to a file");
        fgets(writestr, 150, stdin);

        if (strcmp(writestr, "-1\n") == 0){
            puts("file is being read");
            progress = 0;
            break;
            
        }else if(strcmp(writestr, "-1\n") != 0) {
            
           //write the string to the file
            fputs(writestr, fp);

        }else
        {
            puts("cannot open the file. exiting");
            exit(1);
        }
    
    }

    //close the file
    fclose(fp);



    //open the file for reading
    if (fopen(filename, "r") == NULL)
    {
        puts("Error opening file for reading. Exiting");
        exit(2);
    }
    
    // //read a line from the file
    // fscanf(fp, "%[^\n]", readstr);
    // printf("Data from the file: %s\n", readstr);

    // //close the file
    // fclose(fp);

    // //open the file for reading
    // if (fopen(filename, "r") == NULL)
    // {
    //     puts("Error opening file for reading. Exiting");
    //     exit(2);
    // }
    
    //reading each line in the file
   while (fgets(readstr,1000,fp)!=NULL) {
       printf("%s",readstr);
       }


    //close the file
    fclose(fp);


    return 0;
}