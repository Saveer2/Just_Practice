#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = NULL;
        }
};

class Circular_list{
    Node* Head;
    Node* Tail;

    public:
        Circular_list(){
            Head = Tail = NULL;
        }

        void insert_head(int val){
            Node* newnode = new Node(val);

            if(Tail == NULL){
                Head = Tail = newnode;
                Tail->next = Head;
            }else{
                newnode->next = Head;
                Head = newnode;
                Tail->next = Head;
            }
        }

        void insert_tail(int val){
            Node* newnode = new Node(val);

            if(Tail == NULL){
                Head = Tail = newnode;
                Tail->next = Head;
            }else{
                newnode->next = Head;
                Tail->next = newnode;
                Tail = newnode;
            }
        }

        void delete_tail(){
            if(Head == NULL){
                return ;
            }else if(Head == Tail){
                delete Head;
                Head = Tail = NULL;
            }else{
                Node* temp = Tail;

                Node* prev = Head;
                while(prev->next != Tail){
                    prev = prev->next;
                }

                Tail = prev;
                Tail->next = Head;

                temp->next = NULL;
                delete temp;
            }
        }

        void display(){
            if(Head == NULL){
                return;
            }
            cout<<Head->data << "-> ";
            Node* temp = Head->next;

            while(temp != Head){
                cout<<temp->data<<"->";
                temp = temp->next;
            }

            cout<<temp->data<<endl;

        }
};

int main(){
    Circular_list CLL;

    CLL.insert_head(1);
    CLL.insert_head(2);
    CLL.insert_head(3);

    CLL.insert_tail(4);
    CLL.insert_tail(5);
    CLL.insert_tail(6);

    CLL.delete_tail();

    CLL.display();




    return 0;
}