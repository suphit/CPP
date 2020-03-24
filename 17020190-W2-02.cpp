//Bai 2 Kangaroo
//Programming by Su phit Phom ma chan 17020190

#include<iostream>
using namespace std;
int main(){
    int k1,v1;    //k1 la vị trí xuất phát và  v1 tốc độ nhảy cua kangaroo thu nhat
    int k2,v2;       //k2 la vị trí xuất phát và  v2 tốc độ nhảy cua kangaroo thu hai
    cin>>k1>>v1;
    cin>>k2>>v2;
    if (k1>k2){ // neu con 1 nhay nhieu hon con 2
    while (k1>k2){
        k1+=v1;
        k2+=v2;
    }
    }else{
        while (k1<k2){  // neu con 1 nhay it hon con 2
        k1+=v1;
        k2+=v2;
    }
    }
    if (k1==k2) cout<<"YES";   // khi cai hoi con cung 1 diem nhay
    else cout<<"NO";  // khi 2 con khac diem nhay



    return 0;
}

