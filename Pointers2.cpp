// Array of Pointers
/*
#include<iostream>
using namespace std;
int main() {
    int arr[4] = {2,5,3,7};
    cout << arr <<endl;
    cout << &arr <<endl;
    cout << arr[0] <<endl;
    cout << &arr[0] <<endl;
    return 0;
}
*/
// Address of Array and Array of Pointers
/*
#include<iostream>
using namespace std;
int main() {
    
    int arr[4] = {35,61,34,85};

    cout << *arr <<endl;
    cout << arr[0] <<endl;
    cout << *arr + 1 <<endl;
    cout << *(arr) + 1 <<endl;
    cout << *(arr + 1) <<endl;
    cout << arr[1] <<endl;
    cout << *(arr + 2) <<endl;
    cout << arr[2] <<endl;
    cout << *(arr + 3) <<endl;
    cout << arr[3] <<endl;

    return 0;
}
*/
// Points to be noted on Array of pointers
/*
#include<iostream>
using namespace std;
int main() {
    
    int arr[4] = {35,61,34,85};
    int i =0;
    cout << arr[i] <<endl;
    cout << i[arr] <<endl;
    cout << *(arr + i) <<endl;
    cout << *(i + arr) <<endl;

    return 0;
}
*/
// isze of int a and int* a
/*
#include<iostream>
using namespace std;
int main() {
    
    int arr[10] ={3,8,3,5,6,8,1,24,95,5};
    int *p = arr;

    cout << sizeof(arr) <<endl;
    cout << sizeof(p) <<endl;
    cout<< sizeof(*p) <<endl;

    return 0;
}
*/
// string Array (using Pointers) 
// string --> ""  and char --> ''
/*
#include<iostream>
using namespace std;
int main() {
    char ch[10] = "Nimit";
    char* c = ch;

    cout << ch << endl;
    cout << ch[0] << endl;
    cout << &ch << endl;

    cout << c << endl;
    cout << *c << endl; // explain in notes
    cout << &c << endl;

    return 0;
}
*/
//some more conceptual question in string pointers
/*
#include<iostream>
using namespace std;
int main() {

    char name[10] = "nimit";
    char* ptr = &name[0];

    cout << name <<endl;
    cout << &name <<endl;
    cout << *(name + 2) <<endl;
    cout << ptr <<endl;
    cout << *(ptr + 3) <<endl;
    cout << &ptr <<endl;
    cout << ptr+3 <<endl;
    cout << *ptr <<endl;
    cout << ptr+8 <<endl;

    return 0;

}
*/
// imp.concept question for char pointer (char --> '' )
/*
#include<iostream>
using namespace std;
int main() {

    char ch ='k';
    char* ptr = &ch;

    cout << ptr <<endl; // output will be k  se ekar kuch bhi garbage value until null value na aa jaye reason is the behaviour of cout for char pointer

    return 0;

}
*/
// Pointers with functions
/*
#include<iostream>
using namespace std;
void solve (int arr[],int size) {

    cout << "Size inside solve function: " << sizeof(arr,size) <<endl;
    cout << "arr: " << endl;
    cout << "&arr: " << endl;

    arr[0] = 50;

}
int main() {
    int arr[10] = {2,5,2,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Size inside the main function : " << sizeof(arr) << endl;
    cout << "arr: "<< arr << endl;
    cout << "&arr: " << &arr << endl;

    // printing array inside main
    for(int i=0;i<10;i++) {
        cout << arr[i] <<" ";
    }
    cout<<endl;
    cout << endl << endl << "Now calling solve function" << endl;

    solve(arr,size);

    cout << "Wapas main function me aagye hai" << endl;

    for(int i=0;i<10;i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;

}
*/

