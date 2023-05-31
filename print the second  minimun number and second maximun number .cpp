#include <bits/stdc++.h>

using namespace std;

int main()
{    int n;
     cout<<"Enter the size:";
     cin>>n;
     
     int a[n];
     cout<<"Enter the element of array: ";
     for(int i =0;i<n;i++){
        cin>>a[i];
        }
     
      sort(a,a+n);
      for(int i:a){
      cout<<i<<" ";
     } cout<<endl;

     cout<<a[1]<<" "<<a[n-2];
     
     return 0;
}
