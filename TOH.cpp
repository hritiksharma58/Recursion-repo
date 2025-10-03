

#include  <iostream>
#include <cmath> // for pow()
using namespace std;
void toh(char s, char d, char a, int n)
{
    if (n == 0)
        return;
    toh(s, a, d, n - 1);                                               // move the n-1 discs from source to aux using destination rod
    cout << "move disc " << n << " from " << s << " to " << d << endl; // move the nth disc from source to destination directly
    toh(a, d, s, n - 1);                                               // move the n-1 discs from aux to destination using source
}
int main()
{
    int n;
    cout << "enter the no. of discs required:\n";
    cin >> n;
    cout << "No of steps required for n discs to move from source to destination is given by '2^n-1' which is = " << pow(2, n) - 1 << endl;
    cout << "\n";
    toh('S', 'D', 'A', n);
    return 0;
}