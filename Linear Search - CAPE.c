// Miss D Buchanan
// February 22, 2026
//Linear Search - C
#include <stdio.h>

int linearSearch(int array[], int n, int key) {
	for(int i = 0; i < n; i++) {
		if(array[i] == key) {
			printf("The key has been found at position %d", i);
			return i;
		}
	}

	printf("Key has not been found");
	return 1;
}

int main()
{
	printf("Hello World");

	return 0;
}