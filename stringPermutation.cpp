#include <iostream>
#include <string>
#include <map>
using namespace std;

bool checkPer(string str, string str1){
    map<char,int> m;
    map<char,int> m1;
    
    if(str.length()==str1.length()){
        
        for(int i=0;i<str.length();i++){
            
            if(m[str[i]]){
                m[str[i]]++;
            }else{
                m[str[i]]=1;
            }
        }
        
        for(int i=0;i<str1.length();i++){
            
            if(m1[str[i]]){
                m1[str[i]]++;
            }else{
                m1[str[i]]=1;
            }
        }
        
        if(equal(m.begin(),m.end(),m1.begin())){
            return true;
        }else{
            return false;
        }
        
    }else{
        return false;
    }
}

int main()
{
    string str="rajan";
    string str1="ajanr";
    bool temp=checkPer(str,str1);
    
    if(temp){
        cout<<"strings are permutation";
    }else{
        cout<<"strings are not permutation";
    }
    return 0;
}