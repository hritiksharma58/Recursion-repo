#include <iostream>
using namespace std;

char lowercase(char ch)
{
    if(ch>=97 && ch<=122)
    return ch;
    
    ch=ch+32;
    return ch;
}
char uppercase(char ch)
{
    if(ch>=65 && ch<=91)
    return ch;
    
    ch=ch-32;
    return ch;
}

void solve(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch=s[0];
    string roq=s.substr(1);
    
    if(isalpha(ch))
    {
        solve(roq,ans+lowercase(ch));
        solve(roq,ans+uppercase(ch));
    }
    else
    {
        solve(roq,ans+ch);
    }
}
int main() {
	
	    string s;
	    cin>>s;
	    
	    solve(s,"");
}