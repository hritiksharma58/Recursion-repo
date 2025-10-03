#include <iostream>
#include  <stack>
using namespace std;
void insert(stack<int> &s, int temp)
{
    // base condition
    if (s.size() == 0)
    {
        s.push(temp);
        return;
    }
    // hypothesis
    int x = s.top();
    s.pop();
    insert(s, temp);
    // induction
    s.push(x);
}
void reverse_Stack(stack<int> &s)
{
    // base condition
    if (s.size() == 1)
    {
        return;
    }
    // hypothesis
    int temp;
    temp = s.top();
    s.pop();
    reverse_Stack(s);
    // induction
    insert(s, temp);
}
int main()
{
    stack<int> s;
    int n;
    cout << "Enter size of Stack: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }
    reverse_Stack(s);
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << " ";
        s.pop();
    }
    return (0);
}