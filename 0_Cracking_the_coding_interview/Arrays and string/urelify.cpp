//complexity O(nlogn)
#include <bits/stdc++.h>

using namespace std;
string solve()
{
 string str;
 getline(cin,str);

	int n=str.size();
    int count=0;
    for(int i=0;str.length();i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    n+=count;
    
    char rstr[n];
    int j=0;
    for(int i=0;str.length();i++)
    {
        
        if(str[i]==' ')
        {
            rstr[j]='%'; j++;
            rstr[j]='2';j++;
            rstr[j]='0';j++;
        }
        else
        {
            rstr[j]=str[i];
            j++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<rstr[i];
    }
    cout<<endl;
    
    
    
}

int main()
{

    cout<<solve()<<endl;	
}
