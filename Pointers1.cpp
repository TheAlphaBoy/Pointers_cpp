// address of  variable
/*
#include<iostream>
using namespace std;
int main() {
    int x = 34;
    // for value of x
    cout << x <<endl;
    // for address of x
    cout<< &x <<endl;
    return 0;
}
*/
/*
// about pointers each word meaning
#include<iostream>
using namespace std;
int main() {
    int a =5;
    //pointer create
    int* ptr = &a;
    // access the value ptr is pointing to 
    cout<<"value of a is : " << &a <<endl;
    cout << " value stored at ptr is : "<< ptr <<endl;
    cout<<"value ptr is pointing to is : "<< *ptr <<endl;
    cout<<" address of ptr : " << &ptr <<endl;
    return 0;
}
*/
// Pointer stores in same storage of diff data type
/*
#include<iostream>
using namespace std;
int main() {
    int a =5;
    int *p = &a;

    cout << sizeof(p) <<endl;

    char ch ='b';
    char *c = &ch;

    cout<< sizeof(c) <<endl;

    double dtr = 5.03;
    double* d = &dtr;

    cout<< sizeof(d) <<endl;

    return 0;
}
*/
// Declaring a pointer and its address
/*
#include<iostream>
using namespace std;
int main() {
    // Error comes (Bad practice) isi ko segmentaion error bolte hai, joki aap dusre ki memory location ko access karna chah rhe ho 
    // int* ptr ;
    // cout << *ptr <endl;

    //Correct way
    //Create Null Pointer
    int *ptr = 0;
    cout<< *ptr <<endl;

    return 0;
}
*/
// copy to a pointer
/*
#include<iostream>
using namespace std;
int main() {
    int a =5;
    int* ptr = &a;

    //copy pointer
    int* dusraPtr = ptr;

    cout << *ptr <<endl;
    cout << *dusraPtr <<endl;

    return 0;
}
*/