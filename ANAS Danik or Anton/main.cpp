#include <iostream>

using namespace std;

int main()
{
 int x;
  int b=0,c=0;
 cin>>x;
 for(int i=0 ;i<x;i++)
 {
     char a;
     cin>>a;

     if(a=='A')
     {
         b=b+1;
     }
     else if(a=='D')
     {
         c=c+1;
     }




 }
 if(b>c)
 {
     cout<<"Anton"<<endl;
 }
 else if(c>b)
 {
     cout<<"Danik"<<endl;
 }
 else{cout<<"Friendship"<<endl;}


}
