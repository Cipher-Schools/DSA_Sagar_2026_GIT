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
            size--;
            delete tbd;
            return;
        }
        size--;
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
            size--;
            head = tail = nullptr;
            delete tbd;
            return;
        }
        size--;
        tail = tail->prev;
        tail->next = nullptr;
        delete tbd;
    }

    int back(){
        if(size == 0){
            return -1;
        }
        return tail->data;
    }

    int front(){
        if(size == 0){
            return -1;
        }
        return head->data;
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
};// 3 2 1 0
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        dequeue dq;
        vector<int> ans;
        int n = nums.size();
        int i = 0;
        while(i<n)
        {
            while(dq.get_size() > 0 && nums[dq.back()] <= nums[i])
            {
                dq.pop_back();
            }
            while(dq.get_size() > 0 && (i - dq.front() >= k) )
            {
                dq.pop_front();
            }

            dq.push(i);
            cout << i << " ";
            if(i-k+1>=0)
                ans.push_back(nums[dq.front()]);
            i++;
        }
        return ans;
    }
};