#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int x = 0;
    /*
    n = 4
    A
    BC
    DEF
    GHIJ
    */
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << (char)(x + 'A');
            x++;
        }
        cout << '\n';
    }
}