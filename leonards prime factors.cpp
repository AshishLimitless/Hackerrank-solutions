#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
		long long p=1;		
		cin>>n;
		vector<int>v;
		for(int i=0;i<n-1;i++){
			int k;
			cin>>k;
			v.push_back(k);
			p=(p*v[i])%1234567;
		}
		cout<<p%1234567<<endl;		
	}
	return 0;
}