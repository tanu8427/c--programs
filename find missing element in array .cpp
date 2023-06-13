
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }  sort(a,a+n);
    
    int counter =1;
    int flag =0;
    for(int i=0;i<n;i++){
        if(a[i]==counter){
            counter++;
            
        }else{
            flag =1;
            break;
        }
    }  if(flag==1){
        cout<<counter<<endl;
    }
    else {
        cout<<"no missing "<<endl;
    }
}
