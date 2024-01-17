// Fast Exponential of a given exponential number

#include<iostream>
using namespace std;
int FastExponential(int a, int b) {
    int ans =1;
    while(b > 0) {
        if(b & 1) {//odd
        ans = ans*a;
        }
        a=a*a;
        b>>=1; // right shift which means b=b/2
    }
    return ans;
}
int main() {
    int a,b;
    cout << "input a : " <<endl;
    cin >> a;
    cout << "input b : " <<endl;
    cin >> b;
    FastExponential(a,b);
    cout << FastExponential(a,b) <<endl;
    return 0;
}

