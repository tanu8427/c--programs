#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,sum_of_elem=0;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	int min=arr[0];
	int max=arr[0];
	for(int x: arr){
		if(min>x){
			min=x;
		}
		if(max<x){
			max=x;
		}
	}
	cout<<"min element is : "<<min<<endl;
	cout<<"max element is : "<<max<<endl;
}
