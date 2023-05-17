#include<bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int even_sum=0;
    int odd_sum=0;
    
    cout<<"enter the range of number:";
    cin>>num;
    
    for(int i=0;i<num;i++){
      
      if (i%2==0){
         
         even_sum = even_sum+i;
         
      }
      
        else {
          odd_sum = odd_sum+i;
           }
}
      cout<<even_sum<<endl;
      cout<<odd_sum<<endl;
      
     return 0 ;
}
      
