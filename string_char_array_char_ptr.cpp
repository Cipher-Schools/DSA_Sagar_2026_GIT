#include<iostream>
using namespace std;

int main(){
    const char *arr = "hello";
    char arr1[] = {'1', '2', '4'};

    const char* ptr = arr1;
    while(*ptr != '\0'){
        cout << *ptr << " ";
        ptr++;
    }

}