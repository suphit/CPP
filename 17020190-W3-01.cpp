//Bai 1 String
//Programming by Su phit Phom ma chan - 17020190
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string chuoi1,chuoi2;
    cout<<"Nhap chuoi thu nhat : ";
    getline(cin,chuoi1);                    //nhap vao chuoi 1
    cout<<"Nhap chuoi thu hai : ";
    getline(cin,chuoi2);                    //nhap vao chuoi 2
    int len1=chuoi1.size();   //kich thuoc chuoi 1
    int len2=chuoi2.size();  //kich thuoc chuoi 2
    cout<<len1<<" "<<len2;    //hien thi kich thuoc chuoi
     cout<<"\n"<<chuoi1+chuoi2;   //noi hai chuoi voi nhau
    char c1=chuoi1[0];
    char c2=chuoi2[0];
    chuoi1[0]='e';          //thay chu 'e' vao dau chuoi 1
    chuoi2[0]='a';           //thay chu 'a' vao dau chuoi 1

    cout<<"\n"<<chuoi1<<" "<<chuoi2;

    return 0;
}
