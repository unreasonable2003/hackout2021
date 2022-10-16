#include <bits/stdc++.h>
   using namespace std;
 
int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--){

  string A_tshirt,B_tshirt;
  cin>>A_tshirt>>B_tshirt;
  
  int count1=0,count2=0;
  for(int i=0,j=0;i<A_tshirt.length(),j<B_tshirt.length();i++,j++){
   if(A_tshirt[i]=='X')
    count1++;
   if(B_tshirt[j]=='X')
    count2++;
  }
 if(A_tshirt[A_tshirt.length()-1]=='S' && B_tshirt[B_tshirt.length()-1]=='L')
   cout<<"<\n";
   else if(A_tshirt[A_tshirt.length()-1]=='S' && B_tshirt[B_tshirt.length()-1]=='M')
   cout<<"<\n";
  else if(A_tshirt[A_tshirt.length()-1]=='M' && B_tshirt[B_tshirt.length()-1]=='L')
   cout<<"<\n";
  else if(A_tshirt[A_tshirt.length()-1]=='L' && B_tshirt[B_tshirt.length()-1]=='M')
   cout<<">\n";
    else if(A_tshirt[A_tshirt.length()-1]=='L' && B_tshirt[B_tshirt.length()-1]=='S')
   cout<<">\n";
  else if(A_tshirt[A_tshirt.length()-1]=='M' && B_tshirt[B_tshirt.length()-1]=='S')
   cout<<">\n";
  else{
   if(A_tshirt[A_tshirt.length()-1]=='S'){
   if(count1==count2)
    cout<<"="<<endl;
   else if(count1>count2)
    cout<<"<"<<endl;
   else
    cout<<">"<<endl;
   }
   else{
    if(count1==count2)
     cout<<"="<<endl;
    else if(count1>count2)
    cout<<">"<<endl;
    else
    cout<<"<"<<endl;
   }
  }
 }
 return 0;
}