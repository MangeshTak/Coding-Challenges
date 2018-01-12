#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string str="abc";
    string new_str="";
    
    map<char,int> m;
    map<char,int>::iterator it;
    
    for(int i=0;i<str.length();i++)
    {
        if(m[str[i]])
        {
            m[str[i]]++;
        }
        else
        {
            m[str[i]]=1;
        }
    }
    
    for (it=m.begin(); it!=m.end(); ++it)
    {
        new_str=new_str+it->first+to_string(it->second);
    }
    
    if(str.length()<new_str.length())
    {
        cout<<str;
    }
    else
    {
        cout<<new_str;
    }

    return 0;    
}