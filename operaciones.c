//
// Created by Administrador on 20/12/2023.
//

#include "operaciones.h"
#include <stdlib.h>
#include <stdio.h>

int * restaOperation(const int *array, List **hashTable){
    int SIZE_A1 = sizeof(array);
    int * resta = malloc(SIZE_A1 * sizeof(int));
    inicializarVector(resta);
    int k = 0;

    for(int i = 0; i < SIZE_A1; i++){
        int aux1 = array[i], pos = hash(aux1);
        if(hashTable[pos]){
            Node * aux2 = hashTable[pos]->head;
            while(aux2 && aux1 != aux2->data){
                aux2 = aux2->next;
            }
            if(!aux2){
                resta[k] = aux1;
                k++;
            }
        }
    }
    return resta;
}
void printVector(int *array) {
    for(int i = 0; i < sizeof(array); i++){
        if(array[i] == NULL){
            printf("NULL\t");
        }else{
            printf("%d\t", array[i]);
        }
    }
}

void insertarTable(int *array, List **hashTable) {
    int SIZE_ARRAY = (sizeof(array));
    for(int i = 0; i < SIZE_ARRAY; i++){
        insert(newNode(array[i]), hashTable[hash(array[i])]);
    }
}

Node *newNode(int data) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error en la asignacion dinamica de memoria\n");
        exit (-1);
    }
    aux->data = data;
    aux->next = NULL;
    return aux;
}

List *newList() {
    List * aux = NULL;
    aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error\n");
        exit (-1);
    }
    aux->head = NULL;
    return aux;
}

void insert(Node *node, List *list) {
    if(list->head == NULL){
        list->head = node;
        return;
    }
    node->next = list->head;
    list->head = node;
}


void inicializarTable(List **hashTable) {
    for(int i = 0; i < SIZE_HASH; i++){
        hashTable[i] = newList();
        hashTable[i]->head = NULL;
    }
}

int hash(int dato) {
    return dato%SIZE_HASH;
}

void inicializarVector(int *array) {
    for(int i = 0; i < sizeof(array); i++){
        array[i] = 000;
    }
}
