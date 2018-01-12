#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
   string str="hgfder";
   map<char,bool> m;
   int found=0;
   
   for(int i=0;i<str.length();i++)
   {
       if(m[str[i]]==true)
       {
           found=1;
           break;
       }
       else
       {
           m[str[i]]=true;
       }
   }
   
   if(found==0){
       cout<<"All characters are unique";
   }
   else{
       cout<<"No unique";
   }
   
   return 0;
}