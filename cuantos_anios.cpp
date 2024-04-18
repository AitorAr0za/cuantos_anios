#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main () {

    int edad;
    int impares = 0;
    int pares = 0;

    printf("ingrese su edad: ");
    scanf("%d", &edad);

    printf("estos son los anios que has vivido:\n");

    for (int i = 1; i <= edad; i++) {

        printf("%d ", i);

        if (i % 2 == 0) {

            pares++;

        }

        else {

            impares++;

        }
    }

    printf("\nla cantidad de anios impares que has vivido fueron %d, y la cantidad de anios pares que has vivido fueron %d\n", impares, pares);

    return 0;
}
