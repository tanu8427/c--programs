#include<bits/stdc++.h>
using namespace std;

int isArmstrong(int n){
	int temp1,temp2,digc=0,sum_of_dig=0;
	temp1=n;
	temp2=n;
	while(temp1!=0){
		++digc;
		temp1/=10;
	}
	while(temp2!=0){
		int rem=temp2%10;
		sum_of_dig=sum_of_dig+pow(rem,digc);
		temp2/=10;
	}
	if(sum_of_dig==n){
		return 1;
	}
	return 0;
}

int main(){
	for(int i=1;i<=100;i++){
		if(isArmstrong(i)) cout<<i<<" ";
	}

}
