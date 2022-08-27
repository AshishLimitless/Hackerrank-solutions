#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=n%(1000000007);
		cout<<(k*k)%(1000000007)<<endl;
	}
}
