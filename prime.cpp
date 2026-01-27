#include<iostream>

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    if(n % 2 == 0){
        return false;
    }
    
    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            return false;
        }
    }
    // 15
    // 5, 11
    // 7, 13
    // n * log(log(n))

    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    // F F T T F T F T F F  F  T  F  T  F  F
    // 


    // O(sqrt(n))

    // p -> n / p -> sqrt(n)
    // 

    // O(sqrt(n))

    return true;
}

void sieve(int n){
    std::vector<bool> prime(n + 1,true);
    // 
    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= n; i++){ // sqrt(n)
        if(prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = false;
            }
        }
    }
    // n/2 + n/3 + n/5 ...... -> n log(log(n)) -> (1/2 + 1/3 + 1/5 + 1/7 ......)

    // nlog(log(n)) = O(n)
    // n * sqrt(n) 

    for(int i = 0; i <= n - 6; i++){
        if(prime[i] && prime[i + 6])
        std::cout << i << " " << i + 6 << '\n';
    }
}


void printPairs(int n){

    for(int i = 2; i <= n - 6; i++){
        if(isPrime(i) && isPrime(i + 6)){
            std::cout << i << " " << i + 6 << '\n';

        }
    }
}

// 1 1 0 0 2 2  -> DNF
// 0 1 2 3 4 5
// 0 1 0 2 2 

// 0 1 0 0 0 0 0 1 0 1 0 1 1 1 
int main(){
    int n;
    std::cin >> n;

    sieve(n);
}