#include <bits/stdc++.h>
using namespace std;

float timmax(float a, float b, float c, float d)
{
	float max = -10000;
	if(a > max) max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	if(d > max) max = d;
	return max;
}

int main(){
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	cout<<timmax(a, b, c,d);
	
	return 0;
}
