#include <stdio.h>
#include "operaciones.h"

int main() {
    int array1[] = {1,18,74,55,99,25,61,47};
    int array2[] = {3,18,74,7,9,25,47};

    List * hashTable[SIZE_HASH];
    inicializarTable(hashTable);
    insertarTable(array2, hashTable);

    int * restaResultado = restaOperation(array1, hashTable);

    printVector(restaResultado);


    return 0;
}
