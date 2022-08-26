#include <bits/stdc++.h>
using namespace std;
int main(){
	long long l,s1,s2,q;
	cin>>l>>s1>>s2 ;
	cin>>q;
	long long arr[q];
	for(int i=0;i<q;i++){
		cin>>arr[i];
	}
	for(int i=0;i<q;i++){
		long double a=(pow(2,0.5)*l-pow(2*arr[i],0.5))/(s2-s1);
		printf("%.5Lf\n",abs(a));
	}
	return 0;
}