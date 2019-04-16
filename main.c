#include <stdio.h>

/*
 * A C program to check if an array has a center and
 * if that center value is the greatest in the array.
*/

int static mid;
int hasCenter(int);
int IsMiddleNumberGreatest(int [], int);


int main() {
    int userArray[] = {1,2,2,5,3};
    int arrLength = sizeof(userArray)/sizeof(int);

    // Check if array has center
    if(hasCenter(arrLength)) {
        if(IsMiddleNumberGreatest(userArray, arrLength))
            printf("Middle number = %d and its the greatest. \n", mid);
        else
            printf("Middle number = %d but not the greatest. \n", mid);
    } else
        printf("Array has no center\n");

    return 0;
}


int hasCenter(int len) {
    /* A function to check if the length of an array is divisible by 2*/

    return len % 2 ? 1 : 0;
}


int IsMiddleNumberGreatest(int arr[], int len) {
    /* Function to check if middle number is greatest in array.*/

    int midIndx = arr[len/2];
    mid = arr[midIndx];

    for (int i = 0; i < len; i++) {
        if (i != midIndx) {
            if (mid < arr[i])
                return 0;
        }
    }
    return 1;
}
