#include <stdio.h>
#include <stdlib.h>
#include "dynamicarr.h"

void init_array(DynamicArray* self)
{
	self->arr = NULL;
	self->size = 0;
	self->capacity = 0;
}

void push_back(DynamicArray* self, int elem)
{
	if (self->size == self->capacity){
		size_t new_capacity = self->capacity * 2;
		int* new_arr = realloc(self->arr, new_capacity);
		if (new_arr == NULL){
			printf("Failed to reallocate memory\n");
			return;
		}
		self->arr = new_arr;
		self->capacity *= 2;
	}

	self->arr[self->size] = elem;
	self->size += 1;
}

void reserve(DynamicArray* self, int num)
{
	self->arr = (int*)malloc(num * sizeof(int));
	if (self->arr == NULL){
		printf("Failed to allocate memory in reserve function");
		return;	
	}
	self->capacity = num;
}


void insert(DynamicArray* self, int pos, int elem)
{
	if (pos >= self->size)
	{ printf("Error: array index out of range");
	  return;
	}

	else {
		self->arr[pos] = elem;
	}

}


int at(DynamicArray* self, int pos)
{
	if (pos >= self->size)
	{ printf("Error: array index out of range");
	  return -1;
	}
	else {
		return self->arr[pos];
	}
}

int size(DynamicArray* self)
{
	return self->size;
}

int empty(DynamicArray* self)
{
	if (self->size == 0) {return 1;}
	return 0;
}


int capacity(DynamicArray* self)
{
	return self->capacity;
}


void traverse(DynamicArray* self)
{	
	printf("Traversing the array\n");
	for (int i = 0; i < self->size; i++){
		printf("%d  ", self->arr[i]);
	}
	printf("\n");
}

void deallocate(DynamicArray* self)
{
	free(self->arr);
	printf("Object deleted successfully\n");
}
