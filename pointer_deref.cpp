#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

int main(){
   int x = 10;

   int *ptr = &x;
   cout << *ptr << '\n';

   Node obj1(4);
   cout << obj1.data << '\n';

   Node* obj = new Node(4);
   cout << (*obj).data << '\n';
   cout << obj->data << '\n';

}