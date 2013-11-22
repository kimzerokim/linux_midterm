#include <stdio.h>
#include <stdlib.h>

int intcomp(const void *num1, const void *num2) {
	int n1, n2;
	n1 = *(int*)num1;
	n2 = *(int*)num2;
	return n1 - n2;
}

void my_int_sort(int *array, int length) {
	qsort(array, 10, sizeof(int), intcomp);
}

void print_array(int *array, int length) {
	int i;
	for (i = 0; i < length; i++) { 
		printf("%d\t", array[i]);
	}
	printf("\n");
}
