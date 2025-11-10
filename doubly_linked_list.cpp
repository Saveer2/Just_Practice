#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = prev = NULL;
        }
};

class Doubly_list{
    Node* Head;
    Node* Tail;

    public:

    Doubly_list(){
        Head=Tail=NULL;
    }

    void push_front(int val){  //PUSH FRONT
        
        Node* newnode = new Node(val);

        if(Head == NULL){
            Head = Tail = newnode;
        }else{
            newnode->next = Head;
            Head->prev = newnode;
            Head = newnode;
        }
    }

    void push_back(int val){  //PUSH BACK
        Node* newnode = new Node(val);

        if(Head == NULL){
            Head = Tail = newnode;
        }else{
            newnode->prev = Tail;
            Tail->next = newnode;
            Tail = newnode;
        }
    }

    void pop_front(){  //POP_FRONT
        if(Head == NULL){
            cout<<"EMPTY\n";
            return;
        }

        Node* temp = Head;
        Head = Head->next;
        
        if(Head != NULL){
            Head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    void pop_back(){  //POP BACK
        if(Tail == NULL){
            cout<<"EMPLY\n";
            return;
        }

        Node* temp = Tail;
        Tail = Tail->prev;
        if(Tail != NULL){
            Tail->next = NULL;
        }

        temp->prev = NULL;
        delete temp;
    }

    void display(){  //DISPLAY
        Node* temp = Head;

        while(temp != NULL){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    Doubly_list DLL;
    DLL.push_front(10);
    DLL.push_front(20);
    DLL.push_front(30);

    DLL.push_back(40);
    DLL.push_back(50);
    DLL.push_back(60);

    DLL.pop_front();

    DLL.pop_back();

    DLL.display();
    


    return 0;
}