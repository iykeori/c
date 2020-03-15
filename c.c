#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
4. Create a program where the user is continuously prompted for text until a -1 is entered. Each
entered line of text is to be written to a file (except the -1). When the user finishes their data
entry, retrieve each line of text from the file and display..
*/


int main( void ) {
	
	int ch;
	int c;
	char enter[10];
	char enter2[10];
	//char *entry;
	//entry = &enter;

	strcpy(enter, "Hello");

	
	FILE * fp = NULL;
	fp = fopen ("file.txt","w");

	fputs("\n FILE OPENED",stdout);

	if(fp != NULL){
		
		while ( strcmp(enter, "-1\n") != 0 ){
			fputs("\n Please enter some text:\n",stdout);
			fgets(enter,10,stdin);
			//while((ch = getchar()) != '\n' && ch != EOF);
			//fputc(*entry,fp);
			//fprintf(fp,"%s", *entry);
			//fputs(entry,fp);
			//puts(enter);
			
			if ( strcmp(enter, "-1\n") == 0 ) break;
		fwrite(enter,sizeof(enter),1,fp);		
			fputs("\nData written",stdout);

		}


		/*while(*entry != NULL){
			fgets(entry,10,stdin);
			while((ch = getchar()) != '\n' && ch != EOF);
			//fputc(*entry,fp);
			//fprintf(fp,"%s", *entry);
			fputs(entry,fp);
			fputs("\nData wrritten",stdout);

		}*/
		

	}
	fclose(fp);
	puts("done writing");
	
	fp =fopen("file.txt","r");
	if (fp == NULL){
		perror("Error in opening file");
		return(-1);
	}
	//reading a single char
	while(fread(&enter2,sizeof(enter2),1,fp)>0) {
		printf("%s", enter2);
	}

	//printf("%s", enter2);

	fclose(fp);
	fp =NULL;
	system("pause");
	
	return(0);	


	
	


}