#include <stdio.h>
#include <stdlib.h>
#include "dynamicarr.h"

int main()
{
	DynamicArray darr;
	printf("darr successfully declared\n");

	init_array(&darr);
	printf("darr successfully initialized\n");

	reserve(&darr, 3);
	printf("darr successfully reserved\n");
	
	push_back(&darr, 1);
	printf("pushback 1\n");
	push_back(&darr, 2);
	printf("pushback 2\n");
	push_back(&darr, 3);
	printf("pushback 3\n");
	push_back(&darr, 4);
	printf("pushback 4, array resized\n");

	insert(&darr, 1, 5);
	printf("insert\n");

	int c = capacity(&darr);
	printf("Capacity = %d\n", c);

	int s = size(&darr);
	printf("Size = %d\n", s);

	traverse(&darr);

	deallocate(&darr);
}



