include<bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int rem;
    int arm=0;
    int original_num;
    
    cout<<"enter the number ";
    cin>>original_num;
    
    original_num ==num;
   
    while(num!=0){
        rem = original_num%10;
        arm = arm+rem*rem*rem;
        num = num/10;
        
        
      } if(arm==num){
            cout<<"armstrong"<<endl;
          }
        else {
         cout<<"not armstrong"<<endl;
         }
     return 0;
}
