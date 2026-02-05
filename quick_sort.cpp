#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int find_pivot(int* arr, int s, int e){
    int i = s - 1;
    int pivot = arr[e];

    for(int j = s; j < e; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quick_sort(int* arr, int n, int s, int e){
    if(s >= e){
        return;
    }

    int pivot = find_pivot(arr, s, e);
    quick_sort(arr, n, s, pivot - 1);
    quick_sort(arr, n, pivot + 1, e);
}

int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quick_sort(arr, n, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << '\n';
}