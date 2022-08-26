#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			v.push_back(i);
		}
	}
	v.push_back(n);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	vector<int>sumarr(v.size());
	vector<int>cv=v;
	for(int i=0;i<v.size();i++){
		int sum=0;
		while(cv[i]>0){
			int m=cv[i]%10;
			sum=sum+m;
			cv[i]/=10;
		}
		sumarr[i]=sum;		
	}
	//cout<<v[3]<<endl;
	int maxsumindex=max_element(sumarr.begin(),sumarr.end())-sumarr.begin();
	cout<<maxsumindex<<endl;
	cout<<v[maxsumindex]<<endl;
	return 0;
}