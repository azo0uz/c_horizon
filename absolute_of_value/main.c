//
// Created by aziz on 18/12/2023.
//

#include "stdio.h"

int main() {
    int x;
    printf("Give a number X: ");
    scanf("%d", &x);
    if (x >= 0) {
        printf("The absolute value of %d is %d.", x, x);
    } else {
        printf("The absolute value of %d is %d.", x, -x);
    }
    return 0;
}