#include <iostream>
#include <string.h>
using namespace std;

struct Book{
    string code;
    string title;
};

struct Node{
    Book book;
    Node *next;
};

int pile(Node *&next, Book book);
int unpile(Node *&stack, Book &book);

int main() {

    Node *stackOfBooks=NULL;
    Book book;
    int i=0;

    while(i<3){
        cout<<"Ingrese el codigo del libro:"<<endl;
        cin >> book.code;
        cout<<"Ingrese el nombre del libro:"<<endl;
        cin >> book.title;
        pile(stackOfBooks,book);
        i++;
    }

    while(stackOfBooks!=NULL){
        unpile(stackOfBooks,book);
        cout<<"Libro deshapilado: "<<endl;
        cout<<book.code<<endl;
    }

    return 0;
}

int pile(Node *&stack, Book book){
    Node *newNode;
    newNode=new Node;
    newNode->book=book;
    newNode->next=stack;
    stack=newNode;

    return 0;
}

int unpile(Node *&stack, Book &book){
    Node *auxNode;
    auxNode=stack;

    book=stack->book;
    stack=auxNode->next;

    delete auxNode;

    return 0;
}

