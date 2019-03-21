#include<bits/c++.h>
using namespace std;
string isValid(string s) {
    int arr[26];
    memset(arr,0,26);
    for(int i=0;i<s.length();i++)
    {
        arr[(int)s[i]-97]++;
        
    }
    if(s.length() == 1) return "YES";
    map<int,int> m;
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            if(m.find(arr[i])== m.end())
                m[arr[i]] = 1;
            else
                m[arr[i]]++;
            
            
        }
    }
        if(m.size()==2 && (m.begin()->second<=1 || m.end()->second<=1))
        {
            return "YES";
        }
    return "NO";
        
    }

int main()
{
    string str;
    cin>>str;
    cout<<isValid(str)<<endl;
}