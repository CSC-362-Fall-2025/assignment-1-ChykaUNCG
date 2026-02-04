#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

        printf("Enter number of integers: ");
    fflush(stdout); 

    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

       if (n <= 0) {
        printf("No elements to allocate.\n");
        return 0;
    }

      int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

        for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        fflush(stdout);

        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);        
            return 1;
        }
    }

    printf("Integers in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

        free(arr);
    arr = NULL; 
    return 0;
}
