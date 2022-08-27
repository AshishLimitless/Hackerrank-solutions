#include <bits/stdc++.h>
using namespace std;
int minh(int a,int b){
	if(a%b==0){
		return 2*a/b;
	}
	else{
		return 2*((a/b)+1);
	}
}
int main(){
	int a,b;
	cin>>b>>a;
	cout<<minh(a,b)<<endl;
	return 0;
}