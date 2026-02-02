#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        next = prev = nullptr;
    }
};

class dequeue
{
private:
    int size;
    Node* head;
    Node* tail;

public:
    dequeue(){
        head = tail = nullptr;
        size = 0;
    }

    void push(int x){
        Node* newNode = new Node(x);
        if(size == 0){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void pop_front(){
        if(size == 0){
            cout << "Queue is Empty !";
            return;
        }

        Node* tbd = head;
        if(size == 1){
            head = tail = nullptr;
            delete tbd;
            return;
        }
        
        head = head->next;
        head->prev = nullptr;
        delete tbd;
    }

    void pop_back(){
        if(size == 0){
            cout << "Queue is Empty !";
            return;
        }

        Node* tbd = tail;
        if(size == 1){
            head = tail = nullptr;
            delete tbd;
            return;
        }
        
        tail = tail->prev;
        tail->next = nullptr;
        delete tbd;
    }

    int get_size(){
        return size;
    }

    bool empty(){
        return size == 0;
    }

    void print_dequeue(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << '\n';
    }
};

int main(){
    dequeue *obj = new dequeue();
    obj->push(4);
    obj->push(5);
    obj->push(9);
    obj->push(1);

    obj->print_dequeue();
}