//
// Created by aziz on 18/12/2023.
//

#include <stdio.h>;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    // lire a
    printf("Give a: ");
    scanf("%d", &a);
    while (!a) {
        scanf("%d", &a);
    }
    printf("Give b: ");

    // lire b
    scanf("%d", &b);
    while (!b) {
        scanf("%b", &b);
    }

    // add a to b
    printf("%d + %d = %d", a, b, sum(a, b));
    return 0;
}