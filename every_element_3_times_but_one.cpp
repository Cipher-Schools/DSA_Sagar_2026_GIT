#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //  5, 2, 3, 1, 2, 2, 5, 3, 3, 5, 1, 1, 5
    // 5, 5, 5, 5
    /*
        0 0 0 0  ...  0 1 1
        0 0 0 0 0 ....... 1
        0 0 0 0 0 0 0 0 0 1
        count = 10
    */
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = 0;
    int temp[32] = {0};

    for(int bit = 0; bit < 32; bit++){
        int count = 0;

        for(int i = 0; i < n; i++){
            // 2 & (1 << 0)
            if((arr[i] & (1 << bit)) != 0){
                count++;
            }
        }

        if(count % 3  != 0){
            result |= (1 << bit);
        }

        // result = 1
        // 0 0 0 0 0 0 0 0 0 0 0 ... 0 0 0 1 result
        // 0 0 0 0 0 0 0 0 0 0 0 .. .0 1 0 0 (1 << 2)
        //  0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 1
        // 
    }

    cout << result;
    delete[] arr;
}