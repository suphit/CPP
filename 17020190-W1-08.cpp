#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	int tongtrai = 0, tongphai = 0, dem = 0;
	
	for(int i = 1; i < n-1; i++){
			tongphai = tongphai + a[i+1];
		}
		
		tongtrai = tongtrai + a[0];
		
	
	for(int i = 1; i < n; i++){
		if(tongtrai == tongphai){
			dem++;
			break;
		}
		else{
			tongphai = tongphai - a[i+1];
			tongtrai = tongtrai + a[i];
		}
	}
	
	if(dem == 0) cout<<"NO";
	else cout<<"YES";
	
	return 0;
}
