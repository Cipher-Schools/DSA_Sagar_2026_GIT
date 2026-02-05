#include<iostream>
using namespace std;
class Demo{
    public:
    static int x;
    Demo(){
        x++;
        cout << "ctor \n";
    }

    ~Demo(){
        x--;
        cout << "dctor \n";
    }

    void printObj(){
        cout << x << '\n';
    }
};

int Demo::x = 0;

int main(){
    // Demo obj; // obj on stack
    // Demo* obj1 = new Demo(); // obj on heap
    // delete obj1;
    int n = 5;
    // Demo arr1[n]; // array of demo on stack

    // Demo* arr[n]; // array of demo on stack but memory in heap
    // for(int i = 0; i < n; i++){
    //     arr[i] = new Demo();
    // }

    // for(int i = 0; i < n; i++){
    //     delete arr[i];
    // }

    Demo** arr = new Demo*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new Demo[5];
    }

    for(int i = 0; i < n; i++){
        delete[] arr[i];
    }



}