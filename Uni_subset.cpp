#include <iostream>
#include <set>
#include <string>
using namespace std;

void solve(string str, string op, set<string>& st) {
    if (str.length() == 0) {
        st.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(str[0]);
    str.erase(str.begin());
    solve(str, op1, st);
    solve(str, op2, st);
}

int main() {
    string str;
    cin >> str;
    string op = "";
    set<string> st;
    solve(str, op, st);

    for (auto it = st.begin(); it != st.end(); ++it)
        cout << "\"" << *it << "\" ";
    
    return 0;
}
