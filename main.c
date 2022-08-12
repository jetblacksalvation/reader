#include <stdio.h>
#include <stdlib.h>
#include "str_vec.h"
//goal is to read from a file, and seperate words by spaces 

FILE* ptr;
char temp_c;


int main(){

    str_vector* my_vector;
	//test shti
	my_vector = construct(0, "this value doesnt really matter biiitch ");
    pushback(my_vector, 'd');

    ptr = fopen("file.txt", "r");//second is mode, r is reead 
    if (ptr == NULL){
        printf("error!");
        exit(0);//close program because error
    }
    char arr[7];
    int count = 0;
    while (!feof(ptr)) {
        temp_c = fgetc(ptr);
        pushback(my_vector, temp_c);
        arr[count] = temp_c;
        count++;
        
    }
    //printf("%c", arr[6]);
    my_vector->heap_array[count-1] = '\0';

    printf("%c\n", my_vector->heap_array[my_vector->size]);
    printf("%s\n", my_vector->heap_array);
    printf("%i\n", my_vector->size);
    deconstruct(my_vector);//for some reason th
    printf("\n\n");
    return 0;
}