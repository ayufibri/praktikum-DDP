#include <iostream>
using namespace std;
int main () {
	
	string angkatan ;
	string jurusan ;
	cout << "angkatan saya adalah : " ;
	getline (cin,angkatan) ;
	cout << "jurusan saya adalah : " ;
	getline (cin,jurusan) ;
	
	
	
	int a,b ;
	cin >>a>>b ;
	cout <<"keliling persegi panjang:" <<(2*a)+ (2*b)<<endl;
	cout <<"luas persegi panjang:" <<a*b;
	cin >> a ;
	cout <<"keliling persegi:" <<(4*a)<<endl;
	cout <<"luas persegi:" <<a*a;
	return 0;
}

