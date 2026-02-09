#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

Node* convertToLinkedList(int arr[], int n){
    if(n <= 0){
        return NULL;
    }

    Node* head = new Node(arr[0]);
    Node* tail = head;

    int i = 1;
    while(i < n){
        Node* nn = new Node(arr[i]);
        tail->next = nn;
        tail = tail->next;
        i++;
    }
    return head;
}

int main(){
    int arr[] = {1, 3, 6, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = convertToLinkedList(arr, n);
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

