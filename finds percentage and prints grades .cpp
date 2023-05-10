#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int M, E, C, PPS, DSA;
    float percentage;
    float sum;
    cout<<"Enter the marks of five subject:";
    cin>>M>>E>>C>>PPS>>DSA;
    
    sum = M+E+C+PPS+DSA;
    percentage = sum/500*100; //here we let every subject have 100 scroe.
    
    if(percentage>90 && percentage<=100){
        cout<<"Grade: A";
    }
    else if(percentage>80 && percentage<=90){
        cout<<"Grade: B";
    }
    else if(percentage>60 && percentage<=80){
        cout<<"Grade: C";
    }
     
    else if(percentage<60){
        cout<<"Grade: D";
    }   
    
}
