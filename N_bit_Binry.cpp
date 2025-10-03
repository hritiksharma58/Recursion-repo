//Print N-bit binary numbers having more 1’s than 0’s for any prefix
#include <iostream>
using namespace std;
void solve(string output,int one ,int zero,int n){
    if(n==0){
        cout<<output<<"  ";
        return;
    }
    //one to ho hi sakta hai..
    string output1 = output+'1';
    solve(output1,one+1,zero,n-1);

    //for zero hoga ke nahi
    if(one>zero){
        string output0 = output+'0';
        solve(output0,one,zero+1,n-1);
    }
    return;

}
int main(){
    int n;
    cout<<"Enter length: ";
    cin>>n;
    int one=0,zero = 0;
    string output = "";
    solve(output,one,zero,n);
    return 0;
}
 
