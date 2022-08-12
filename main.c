#include <stdio.h>
#include <stdlib.h>
#include "str_vec.h"
//goal is to read from a file, and seperate words by spaces 

FILE* ptr;
char temp_c;


int main(){

    str_vector* my_vector;

    
	char arr[] = {"hell"};
	//test shti
	my_vector = construct(0, "fdas");
    pushback(my_vector, 'd');
	printf("%s", my_vector->heap_array);
    
    deconstruct(my_vector);

    scanf("%i");//pauses program




    ptr = fopen("file.txt", "r");//second is mode, r is reead 
    if (ptr == NULL){
        printf("error!");
        exit(0);//close program because error
    }
    
    while (!feof(ptr)) {
        if(temp_c == -1
        ){
            printf("temp c is null");
        }    
        else{
            temp_c = fgetc(ptr);
            printf("char is %c \n", temp_c); 
        }
        
        

        
    }
    fclose(ptr);
    printf("%d",temp_c);
    printf("\n\n");

    return 0;
}