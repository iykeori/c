// Create an application with a functions named newInt, newDouble, newFloat, and newCharArray. 
// Each function is to dynamically allocate memory to store a value of the indicated data type (need to send a size parameter to the character array function). 
// The function will return a memory address to the main program where it initializes a pointer. 
// Store an appropriate value in each memory address and then display the value stored.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <ctype.h>

int* newInt();
double* newDouble();
float* newFloat();
char* newChar(int size);

int main( void ) {
	int ch;
	int *iPointer;
	double *dPointer;
	float *fPointer;
	char *cPointer; 
	int val;
	//val = &value;
	

	 
	printf("SIZE PARAMETER NEEDED FOR MEMORY SIZE... must be an INTEGER VALUE!!");
	scanf("%d", &val);
	while((ch = getchar()) != '\n' && ch != EOF);
	iPointer = newInt();
	dPointer = newDouble();
	fPointer = newFloat();
	cPointer = newChar(val);
	
	printf("Outputing appropriate value in each memory address ");
	printf("\n");
	
	
	//displaying values 
	printf("Values of Int in each memory\n");
	*iPointer = 5;
	printf("int value %d\n:",*iPointer);
	
	printf("Values of double in each memory\n");
	*dPointer = 55.8;
	printf("double value %lf\n:",*dPointer);

	printf("Values of float in each memory\n");
	*fPointer = 58.2;
	printf("Float value %f\n:",*fPointer);

    printf("Values of Char in each memory\n");
	*cPointer = 'c';
	printf("char value %c\n:",*cPointer);

	
		   
	return 0;

}

// Functions 

int* newInt(){
	puts("new int");
	int *myInt = (int*)malloc(sizeof(int));
	return myInt;
}

double* newDouble(){
	puts("new d");
	double *myDouble = (double *)malloc(sizeof(double));
	return myDouble;
}
float* newFloat(){
	puts("new float");
	float *myFloat = (float*)malloc(sizeof(float));

	return myFloat;
}	
char* newChar(int size){
	printf("Size= %d", size);
	char *myChar = (char*)malloc(size * sizeof(char));

	return myChar;
}