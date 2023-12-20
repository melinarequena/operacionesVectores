//
// Created by Administrador on 20/12/2023.
//

#ifndef OPERACIONESVECTORES_OPERACIONES_H
#define OPERACIONESVECTORES_OPERACIONES_H
#define SIZE_HASH 10

typedef struct node{
    int data;
    struct node * next;
}Node;

typedef struct list{
    Node * head;
}List;

Node * newNode(int data);
List * newList();
void insert(Node * node, List * list);


int * restaOperation(const int * array, List ** hashTable);
void printVector(int * array);
void inicializarVector(int * array);

void insertarTable(int * array, List ** hashTable);
void inicializarTable(List ** hashTable);
int hash(int dato);

#endif //OPERACIONESVECTORES_OPERACIONES_H
