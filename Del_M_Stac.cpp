#include  <iostream>
#include  <stack>

using namespace std;

void del_middle_element(stack<int>&s, int k){
    if(s.size()==((k/2)+1)){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    del_middle_element(s, k);
    s.push(temp);
}


void printStack(stack<int>&s){
    if(s.size() == 0){
        return ;
    }
    int temp = s.top();
    s.pop();
    printStack(s);
    cout<<temp<<" ";
}

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    
    stack<int>s;
    for(int i=0;i<v.size();i++){
        s.push(v[i]);
    }
    int k = s.size();
    del_middle_element(s, k);

    printStack(s);
    return 0;
}