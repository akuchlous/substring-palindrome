#include <stdio.h>
#include <string.h>

int main()
{
    // const char *S = "abcde";
    const char *S = "rofgeeksskeegfor";
    int len = strlen(S);
    printf("%s\n", S);
    printf("%d\n\n", len);
    for (int pivot = 0; pivot < len; pivot++) {
	/* case 1  as pivot  " a b a " */
	// printf("\n%d\n", pivot);
	for (int size = 1; (pivot - size >= 0 && pivot + size < len);
	     size++) {
	    //     printf("%d\n", size);
	    //     printf("[%d:%d] [%d] [%d:%d]\n", pivot - size, pivot - 1, size,
	    //         pivot + 1, pivot + size);
	    int palin = 1;
	    for (int m = 0; m <= size; m++) {
		if (S[pivot + m] != S[pivot - m]) {
		    palin = 0;
		}
	    }
	    if (palin)
		printf("1: %d %d\n", pivot, size);
	}
    }

    for (int pivot = 0; pivot < len; pivot++) {
	/* case 1  as inclusion  a b b a  */
	// printf("\n%d\n", pivot);
	for (int size = 1; (pivot - size >= 0 && pivot + size < len);
	     size++) {
	    //     printf("%d\n", size);
	    //     printf("[%d:%d] [%d] [%d:%d]\n", pivot - size, pivot - 1, size,
	    //         pivot + 1, pivot + size);
	    int palin = 1;
	    for (int m = 0; m <= size; m++) {
		if (S[pivot - m + 1] != S[pivot + m]) {
		    palin = 0;
		}
	    }
	    if (palin)
		printf("2: %d %d\n", pivot, size);
	}
    }
}
