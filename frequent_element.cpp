#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    /*
    7
    4 1 1 2 2 3 3 
    3

    4 -> 1
    1 -> 2
    2 -> 2
    3 -> 2
    */
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int element = arr[0];
    int max_freq = 1;

    unordered_map<int, int> map;

    for(int i = 1; i < n; i++){
        map[arr[i]]++;

        if(map[arr[i]] >= max_freq){
            element = arr[i];
            max_freq = map[arr[i]];
        }
    }

    cout << element << '\n';
    delete[] arr;
}