#include<bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int fact=1;
    
    cout<<"Enter the range upto:";
    cin>>num;
    for(int i=1;i<=num;i++){
       
       fact = fact*i;

    } cout<<fact;
      cout<<endl;
      
   return 0;      
}
