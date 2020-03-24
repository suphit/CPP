//Bai 3 Visible sum pair
//Programming by Su phit Phom ma chan 17020190

#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100];

int main() {
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];

	int doi = 0;
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			if((a[i] + a[j]) % k == 0) doi++;
	cout << doi << endl;
	return 0;
}
