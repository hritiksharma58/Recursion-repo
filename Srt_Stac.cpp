#include <iostream>
#include <stack>
using namespace std;
void insert(stack<int> &st, int k)
{
    int n = st.size();
    if (n == 0 || st.top() <= k)
    {
        st.push(k);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st, k);
    st.push(val);
}
void sort(stack<int> &st)
{
    int n = st.size();
    if (n == 0 || n == 1)
        return;
    int temp = st.top();
    st.pop();
    sort(st);
    insert(st, temp);
}
int main()
{
    stack<int> st;
    int n;
    cout << "enter the size of stack :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        st.push(k);
    }
    sort(st);
    cout << "\nsorted stack in descending order:\n";

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}