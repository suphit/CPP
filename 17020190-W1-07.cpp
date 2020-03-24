#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	float demsd = 0, demsa = 0, demsk = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > 0)
			demsd++;
		if(a[i] < 0)
			demsa++;
		if(a[i] == 0)
			demsk++;
	}
	cout<<"Ty le ra so duong la: " <<setprecision(2)<<fixed<<demsd/n<<endl;
	cout<<"Ty le ra so am la: " <<setprecision(2)<<fixed<<demsa/n<<endl;
	cout<<"Ty le ra so khong la: " <<setprecision(2)<<fixed<<demsk/n;

	return 0;
}
