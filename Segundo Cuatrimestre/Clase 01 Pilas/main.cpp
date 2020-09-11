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

int pile(Node *&next, Book book);
int unpile(Node *&stack, Book &book);

int main() {
    system("clear");
    Node *stackOfBooks = NULL;
    Book book;

    int quantity = 2;
    int i = 0;

    while (i < quantity) {
        cout << '\n';
        cout << "Ingrese el codigo del libro: ";
        cin >> book.code;
        cout << "Ingrese el nombre del libro: ";
        cin >> book.title;
        pile(stackOfBooks, book);
        system("clear");
        i++;
    }

    while (stackOfBooks != NULL) {
        unpile(stackOfBooks, book);
        cout << '\n';
        cout << "Libro desapilado: " << endl;
        cout << "Codigo: " << book.code << endl;
        cout << "Nombre: " << book.title << '\n' << endl;
    }


    return 0;
}

int pile(Node *&stack, Book book) {
    Node *newNode;
    newNode = new Node;
    newNode->book = book;
    newNode->next = stack;
    stack = newNode;

    return 0;
}

int unpile(Node *&stack, Book &book) {
    Node *auxNode;
    auxNode = stack;

    book = stack->book;
    stack = auxNode->next;

    delete auxNode;

    return 0;
}

