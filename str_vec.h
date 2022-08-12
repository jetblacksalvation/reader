#pragma once
//heap allocation part 
#include <stdio.h>
#include <stdlib.h>
/// you can't make Classes in c
typedef struct vector {
	char* heap_array;
	int size;//number of elements held 
	size_t max_size;//allocated size to string, 
} str_vector;//constructorsffdafdafdada
//fdafda
str_vector* construct(int size, char arr[]) {
	str_vector* newthing = (str_vector*)malloc(1*sizeof(str_vector));//allocate the vector on the heap so that it is not terminated at end of function  
	if(size !=0){
		newthing->heap_array = (char*)malloc((size*2) * sizeof(char));//allocate more than necesary to avoid using resize 
	
		for (int x = 0; x < size; x++) {
			newthing->heap_array[x] = arr[x];
		}
		newthing->heap_array[size] = 0;//setting terminating zero character
		newthing->size = size;
		newthing->max_size = sizeof(newthing->heap_array);
		return newthing;
	}
	newthing->heap_array = (char*)malloc((10)*2*sizeof(char));
	newthing->heap_array[0] = '\0';//terminating thing 
	newthing->max_size = (10)*2 * sizeof(char);

	newthing->size = -1;
	return newthing;
};
void deconstruct(str_vector* vec) {
	//free(vec->heap_array);freeing the struct also free all of it's memebers?
	free(vec);
};

size_t index_size(str_vector* vec){//returns the size of the string array 
	return vec->size;
}

void str_pushbackk(str_vector* vec1 , str_vector* vec2){
	if(vec1->max_size-10 < vec2->size){
		//get the size of vec2 and multiply by 2 
		//than do resize of the current size plus this 
		vec1->heap_array = (char*)realloc(vec1->heap_array, (vec1->size +=vec2->size)*2*sizeof(char));
		//start iterating from vec 1 size until counter reahces sum of vec1 and vec2 -1 store sum than manually goto index at num size than change to turminating character 
	}
		for(int x =0; x< vec1->size + vec2->size; x++){
			vec1->heap_array[vec1->size+x] = vec2->heap_array[x];
		}
		vec1->size += vec2->size;
		vec1->heap_array[vec1->size+vec2->size] = '\0';//string turmination character
		vec1->max_size = sizeof(vec1->heap_array);
		return;


}


void pushback(str_vector* vec, char value) {//pushes single elements to end of vector, and increases size if condition reahces 
	if(vec->max_size -10<vec->size){
		vec->max_size*=2;
		vec->heap_array = (char*)realloc(vec->heap_array, (vec->max_size )*2 * sizeof(char));//reallocating even more space 
		vec->heap_array[vec->size] = value;
		vec->heap_array[vec->size+1] = '\0';//turminating character
		vec->max_size = (vec->max_size )*2 * sizeof(char);
		vec->size++;
		return;
	}
	vec->heap_array[vec->size] = value;
	vec->heap_array[vec->size+1] = '\0';//turminating character
	vec->size++;

	return;
}


