#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n==1 && m==1){
		cout<<"1"<<endl;
	}
	else if(n==1 && m!=1){
		cout<<m-1<<endl;
	}
	else if(n!=1 && m==1){
		cout<<n-1<<endl;
	}
	else{
		cout<<(n-1)*(m-1)<<endl;
	}
	return 0;
}