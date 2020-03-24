//Bai 4 conditional statement
//Programming by Su phit Phom ma chan, MSV 17020190
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here   
    if (a==1) cout<<"one";
    if (a==2) cout<<"two";
    if (a==3) cout<<"three";
    if (a==4) cout<<"four";
    if (a==5) cout<<"five";
    if (a==6) cout<<"six";
    if (a==7) cout<<"seven";
    if (a==8) cout<<"eight";
    if (a==9) cout<<"nine";
    if (a>9) cout<<"Greater than 9";

    return 0;
}

