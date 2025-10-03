#include <iostream>
#include <vector>
using namespace std;

vector<string> result;

void recursive(int open, int close, string temp) {
    if (open == 0 && close == 0) {
        result.push_back(temp);
        return;
    }
    if (open > 0) 
        recursive(open - 1, close + 1, temp + '('); // add '(' and increase close count
    if (close > 0) 
        recursive(open, close - 1, temp + ')');     // add ')' if any ')' are available
}

vector<string> generateParenthesis(int n) {
    result.clear(); // clear previous results
    recursive(n, 0, "");
    return result;
}

int main() {
    int n;
    cout << "Enter number of pairs of parentheses: ";
    cin >> n;

    vector<string> parentheses = generateParenthesis(n);

    cout << "All combinations of well-formed parentheses:\n";
    for (const string& s : parentheses) {
        cout << s << endl;
    }

    return 0;
}
