#include<bits/stdc++.h>

using namespace std;
int main(){
    int num;
    
    cout<<"enter the size of array :";
    cin>>num;
    
    int ar_1[num];
    cout<<"Enter the Element of array:";
    for(int i=0;i<num;i++){
    cin>>ar_1[i];
     }   
     int ar_2[num];
     cout<<"Enter the Element of array 2 :";
     for(int j=0;j<num;j++){
        cin>>ar_2[j];
    }
        int ar_3[num];
        
     for(int k=0;k<num;k++){
         ar_3[k]= ar_1[k]+ar_2[k];
         
         
     }  
       for(int k=0;k<num;k++){
           cout<< ar_3[k];
       
           
          cout<<endl;
       }
      return 0;
      
}
    
    
    
    
