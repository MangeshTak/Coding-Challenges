#include <iostream>
#include <string>

using namespace std;

void strSpace(string str){
    
    int spaceCount=0,j=-1;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            spaceCount++;
        }
    }
    
    int newLength=str.length()+spaceCount*2;
    
    char new_str[newLength];
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            new_str[++j]='%';
            new_str[++j]='2';
            new_str[++j]='0';
        }
        else
        {
            new_str[++j]=str[i];
        }
    }
    
    cout<<new_str;
}

int main(){
    string str="Mr Mangesh  ";
    strSpace(str);
    
    return 0;
}