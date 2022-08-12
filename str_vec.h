#pragma once
//heap allocation part 
#include <stdio.h>
#include <stdlib.h>
/// you can't make Classes in c
typedef struct vector {
	char* heap_array;
	size_t size;//number of elements held 
	size_t max_size;//allocated size to string, 
} vector;//constructors

vector* construct1(int size, char* arr) {
	vector* newthing = (vector*)malloc(1*sizeof(vector));//allocate the vector on the heap so that it is not terminated at end of function  
	newthing->heap_array = (char*)malloc((size*2) * sizeof(char));//allocate more than necesary to avoid using resize 
	
	for (int x = 0; x < size; x++) {
		newthing->heap_array[x] = arr[x];
	}
	newthing->heap_array[size] = 0;//setting terminating zero character
	newthing->size = size;
	return newthing;
};
void deconstruct(vector* vec) {
	free(vec->heap_array);
	free(vec);
};


void pushback(vector* vec, char value) {
	vec->heap_array = (char*)realloc(vec->heap_array, (vec->size + 1) * sizeof(char));
	vec->heap_array[vec->size] = value;
	vec->heap_array[vec->size+1] = '\0';//turminating character
	vec->size++;
}

const char* ret_string(vector* vec){
	
	for( size_t x =0; x<vec->size;x++){
		vec->heap_array[x];

	}

return "str";

}
