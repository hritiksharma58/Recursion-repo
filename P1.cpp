#include <iostream>
using namespace std;


void print(int n){
    if(n == 1){           // base case
        cout << n << " ";
        return;
    }
    print(n-1);           // recursive call
    cout << n << " ";     // print after recursion
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;             // take input from user
    print(n);

    return 0;
}
