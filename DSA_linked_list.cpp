#include <iostream>
using namespace std;

class SinglyLinkedList {
private:
    int data;
    SinglyLinkedList* next;
    SinglyLinkedList* head;

public:
    SinglyLinkedList() {
        head = nullptr;
        next = nullptr;
    }

    SinglyLinkedList(int value) {
        data = value;
        next = nullptr;
        head = nullptr;
    }

    // Create list
    int create(int value) {
        deleteAll();
        head = new SinglyLinkedList(value);
        cout << "List created with first node value: " << value <<"\n"<< endl;
        return 0;
    }

    // Append 
    int append(int value) {
        SinglyLinkedList* newNode = new SinglyLinkedList(value);
        if (!head) {
            head = newNode;
            cout << "Node appended as head: " << value <<"\n"<< endl;
            return 0;
        }
        SinglyLinkedList* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        cout << "Node appended: " << value <<"\n"<< endl;
        return 0;
    }

    // Insert 
    int insert(int pos, int value) {
        SinglyLinkedList* newNode = new SinglyLinkedList(value);

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            cout << "Node inserted at position 1: " << value <<"\n"<< endl;
            return 0;
        }

        SinglyLinkedList* temp = head;
        for (int i = 1; temp && i < pos - 1; i++)
            temp = temp->next;

        if (!temp) {
            cout << "Position out of range!" << endl;
            delete newNode;
            return -1;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        cout << "Node inserted at position " << pos << ": " << value <<"\n"<< endl;
        return 0;
    }

    // Delete node 
    int deleteNode(int pos) {
        if (!head) {
            cout << "List is empty!" << endl;
            return -1;
        }
        if (pos == 1) {
            SinglyLinkedList* temp = head;
            head = head->next;
            cout << "Deleted node with value: " << temp->data <<"\n"<< endl;
            delete temp;
            return 0;
        }

        SinglyLinkedList* temp = head;
        for (int i = 1; temp && i < pos - 1; i++)
            temp = temp->next;

        if (!temp || !temp->next) {
            cout << "Position out of range!" << endl;
            return -1;
        }

        SinglyLinkedList* toDelete = temp->next;
        temp->next = toDelete->next;
        cout << "Deleted node with value: " << toDelete->data <<"\n"<< endl;
        delete toDelete;
        return 0;
    }

    // Display 
    int display() {
        if (!head) {
            cout << "List is empty!" << endl;
            return -1;
        }

        cout << "Linked List: ";
        SinglyLinkedList* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" <<"\n"<< endl;
        return 0;
    }

    // Get value 
    int get(int pos) {
        if (pos <= 0) {
            cout << "Invalid position!" << endl;
            return -1;
        }

        SinglyLinkedList* temp = head;
        for (int i = 1; temp && i < pos; i++)
            temp = temp->next;

        if (!temp) {
            cout << "Position out of range!" << endl;
            return -1;
        }

        cout << "Value at position " << pos << " is: " << temp->data <<"\n"<< endl;
        return temp->data;
    }

    // Set value 
    int set(int pos, int value) {
        if (pos <= 0) {
            cout << "Invalid position!" << endl;
            return -1;
        }

        SinglyLinkedList* temp = head;
        for (int i = 1; temp && i < pos; i++)
            temp = temp->next;

        if (!temp) {
            cout << "Position out of range!" << endl;
            return -1;
        }

        temp->data = value;
        cout << "Value at position " << pos << " updated to: " << value <<"\n"<< endl;
        return 0;
    }

    // Delete 
    int deleteAll() {
        SinglyLinkedList* temp;
        while (head) {
            temp = head;
            head = head->next;
            delete temp;
        }
        return 0;
    }

    ~SinglyLinkedList() {
        deleteAll();
    }
};

// ---------- MAIN FUNCTION ----------
int main() {
    SinglyLinkedList list;

    list.create(10);   
    list.append(30);      
    list.insert(2, 15);     
    list.display();     
    list.set(3, 25);      
    list.get(3);       
    list.deleteNode(2);       
    list.display();           

    return 0;
}
