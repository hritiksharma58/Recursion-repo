#include <iostream>   // for cout
using namespace std;

void permute(string ip, string op)
{
    // base condition
    if(ip.length() == 0) 
    {
        cout << op << " ";
        return;
    }
    
    // code from choice diagram
    string op1 = op;
    string op2 = op;
    
    if(ip[0] >= 'a' && ip[0] <= 'z'){
        op1.push_back(toupper(ip[0]));
        op2.push_back(ip[0]);
        
        // erase the first element because we've taken decision for it
        ip.erase(ip.begin() + 0);
        permute(ip, op1);
        permute(ip, op2);
        
    }
    else if(ip[0] >= 'A' && ip[0] <= 'Z'){
        op1.push_back(tolower(ip[0]));
        op2.push_back(ip[0]);
        
        // erase the first element because we've taken decision for it
        ip.erase(ip.begin() + 0);
        permute(ip, op1);
        permute(ip, op2);
        
    }
    
    return;
}

int main() {
   
    string ip = "aB";
    string op = "";
    
    permute(ip, op);
 
    return 0;
}
