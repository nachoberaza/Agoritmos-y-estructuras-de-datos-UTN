/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ben
 *
 * Created on 11 de septiembre de 2020, 15:52
 */
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Book {
    string code;
    string title;
};

struct Node {
    Book book;
    Node *next;
};

int pile(Node *&first);

int unpile(Node *&first);

int list(Node *&first);

int unlist(Node *first);

int main() {
    system("clear");

    /* Inicializamos la pila y lista de libros */
    Book book;
    Node *stackOfBooks = NULL;
    Node *listOfBooks = NULL;

    bool exit = false;
    int option = 0;

    while (!exit) {

        cout << "Este es un ejemplo introductorio:" << '\n' << "Seleccione:" << '\n';

        cout << '\t' << " ======== Pilas ========" << '\n'
             << '\t' << "1) Apilar libro" << '\n'
             << '\t' << "2) Mostrar libros apilados" << '\n' << '\n'

             << '\t' << " ======== Listas ======== " << '\n'
             << '\t' << "3) Listar libro al final" << '\n'
             << '\t' << "4) Mostrar libros listados" << '\n' << '\n'

             << '\t' << "0) Salir" << '\n';

        cout << " Su Opcion: " << '\n';
        cin >> option;
        switch (option) {
            case 0: {
                cout << '\n' << "Saliendo..." << '\n';
                exit = true;
                break;
            }

            case 1: {
                system("clear");
                pile(stackOfBooks);
                system("read");
                break;
            }

            case 2: {
                system("clear");
                unpile(stackOfBooks);
                system("read");
                break;
            }
            case 3: {
                system("clear");
                list(listOfBooks);
                system("read");
                break;
            }
            case 4: {
                system("clear");
                unlist(listOfBooks);
                break;
            }
            default: {
                system("clear");
                cout << "Ingrese una opcion valida" << '\n';
                break;
            }
        }
        system("clear");
    }

    return 0;
}

int pile(Node *&first) {
    Node *newNode;
    newNode = new Node;

    /* Ingreso los datos del libro */
    cout << "Ingrese el codigo del libro" << '\n';
    cin >> newNode->book.code;

    cout << "Ingrese el titulo del libro" << '\n';
    cin >> newNode->book.title;
    /* *************************** */

    /* Asigno al siguiente del nodo creado el ahora anteultimo de la pila */
    newNode->next = first;

    /* Asigno como ultimo nodo de la pila el nuevo nodo creado */
    first = newNode;

    cout << '\n' << "Libro apilado correctamente" << '\n';
    return 0;
}

int unpile(Node *&first) {
    Node *auxNode;
    Book book;
    auxNode = first;
    int cont = 1;

    cout << "Desapilando..." << '\n';
    while (auxNode != NULL) {
        cout << '\n' << "Libro n° " << cont << '\n';
        cout << "Titulo: " << auxNode->book.title << " Codigo: " << auxNode->book.code << '\n';
        auxNode = auxNode->next;
        cont++;
    }

    delete auxNode;

    return 0;
}

/* Agregar un libro al final */
int list(Node *&first) {
    Node *newNode = new Node;
    Node *aux = new Node;
    aux = first;

    /* Ingreso el nuevo libro */
    cout << "Ingrese el codigo del libro: ";
    cin >> newNode->book.code;

    cout << "Ingrese el titulo del libro: ";
    cin >> newNode->book.title;
    /* ********************** */

    /* La lista esta vacia por lo que su primer nodo esta vacio */
    if (first == NULL) {
        first = newNode;
    } else {
        /* Recorro la lista hasta llegar al final de la lista */
        while (aux->next != NULL) {
            aux = aux->next;
        }
        /* Inserto el nuevo nodo al final de la lista */
        aux->next = newNode;
    }
    cout << '\n' << "Libro enlistado correctamente" << '\n';
    return 0;
}

int unlist(Node *first) {
    Node *nodeToShow;
    nodeToShow = first;

    cout << "Deslistando..." << '\n';
    while (nodeToShow != NULL) {
        cout << '\t' << "Codigo: " << nodeToShow->book.code << " Titulo: " << nodeToShow->book.title << '\n';
        nodeToShow = nodeToShow->next;
    }

    return 0;
}
