#ifndef DYNAMIC_H
#define DYNAMIC_H


// Structure definition

typedef struct {
	int* arr;
	int size;
	int capacity;
} DynamicArray;

// Function declarations

void init_array(DynamicArray* self);
void push_back(DynamicArray* self, int elem);
void reserve(DynamicArray* self, int num);
void insert(DynamicArray* self, int pos, int elem);
int at(DynamicArray* self, int pos);
int size(DynamicArray* self);
int empty(DynamicArray* self);
int capacity(DynamicArray* self);

void traverse(DynamicArray* self);
void deallocate(DynamicArray* self);



#endif
