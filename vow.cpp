#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[1000];
    int n,i;
    cin>>s;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
           cout<<s[i]<<" is vowel"<<"\n";
        else
            cout<<s[i]<<" is consonant"<<"\n";
    }
    return 0;
}
