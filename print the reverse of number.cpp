#include<bits/stdc++.h>

using namespace std;
int main(){
    int num;
    int rev,rem;
    
    cout<<"Enter the number which you want to reverse:";
    cin>>num;
    
    while(num!=0){
        rem = num%10;
        rev = 10*rev+rem;
        num = num/10;
    } cout<<rev<<endl;
    
    return 0;
}
