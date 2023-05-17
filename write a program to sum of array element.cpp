#include<bits/stdc++.h>

using namespace std;
int main(){
    
    int num;
    
    int sum =0;
    cout<<"Enter the size of array:";
    cin>>num;
    int ar[num];
    cout<<"Enter the value of array:";
    
   for(int i = 0;i<num;i++){
    cin>>ar[i];
    sum = sum+ar[i];
}
      cout<<"sum of array values "<<sum;
 
      cout<<endl;
      
    return 0;
}



    
    
    
