// Optimized solution for sieve eratosthenes theorem
/*
#include<iostream>
#include<vector>
using namespace std;
vector<bool>Sieve(int n) {
    //creating a sieve array of N size telling isPrime
    vector<bool>sieve(n,true);
        sieve[0]=sieve[1]=false;

        for(int i=2;i<=n;i++) {// Optimization - 2
            if(sieve[i] == true) {
                // int j = i*2;
                int j = i*i;//optimization-1: 
                while(j <= n) {
                    sieve[j] = false;
                    j+=i;
                }
            }
        }
        return sieve;
}
int main() {
    vector<bool>sieve=Sieve(25);
    for(int i=0;i<=25;i++) {
        if(sieve[i]) {
            cout<< i << " " ;
        }
    }
    return 0;
}
*/