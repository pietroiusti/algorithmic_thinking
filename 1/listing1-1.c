#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void identify_identical(int values[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
	for (j = i+1; j < n; j++) {
	    if (values[i] == values[j]) {
		printf("Twin integers found.\n");
		return;
	    }
	}
    }
    printf("No two integers are alike.\n");
}

int main(void) {
    int a[5] = {1, 2, 3, 1, 5};

    identify_identical(a, 5);

    return 0;
}
