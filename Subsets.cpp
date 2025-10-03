#include <iostream>

using namespace std;

void subsets(string input,string output){
    if(input.size()==0){
        cout<<output<<" ";
        return;
    }
    
    string output1=output;
    string output2=output;
    
    output2.push_back(input[0]);
    input.erase(input.begin()+0);
    // input=input.substr(1);
    
    subsets(input,output1);
    subsets(input,output2);
}

int main()
{
    string input;
    cin>>input;
    string output="";
    subsets(input,output);
}