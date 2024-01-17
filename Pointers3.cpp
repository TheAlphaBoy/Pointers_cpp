// pointers pass by value
/*
#include<iostream>
using namespace std;
void PassByValue(int* p) {
    // value don't changes because pass by value is giving copy of that integer data
    // p = p + 1;
    //value changes as pointer having changes
    *p = *p + 1;
}
int main() {
    int a = 5;
    int* p = &a;

    cout <<" Before pass by value : " <<endl;

    cout << a << endl;
    cout << &a <<endl;
    cout << p << endl;
    cout << *p <<endl;

    PassByValue(p);

    cout <<" After pass by value : " <<endl;

    cout << a << endl;
    cout << &a <<endl;
    cout << p << endl;
    cout << *p <<endl;

    return 0;

}
*/
// Reference by variables
/*
#include<iostream>
using namespace std;
int main() {

    int a =5;
    // creating a reference variable
    int  &b = a;

    cout << a << endl;
    cout << b << endl;

    a++;
    
    cout << a << endl;
    cout << b << endl;

    b++;

    cout << a << endl;
    cout << b << endl;
    
    return 0;
}
*/
// imp. question for interview purpose
/*
#include<iostream>
using namespace std;
int* solve(int value) {
    int a = 25;
    int *ans = &a;
    return ans;
}
int main() {
    int value;
    solve(value);
    cout << solve(value) <<endl;
}
*/
