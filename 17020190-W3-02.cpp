#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            cout << " ";
        }
        for(k=n;k>=i;k--)
        {
            cout << "#";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
