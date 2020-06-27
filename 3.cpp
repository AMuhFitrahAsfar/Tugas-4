#include <iostream>
using namespace std;
void jumlahRef(int *a,int *b,int *jml){
    *jml= *a+*b;
}

int main(){
	int x,y,jum=0;

	cout<<"Masukkan angka 1 : "; 
	cin>>x;
	cout<<"masukkan angka 2 : ";
	cin>>y;
	jumlahRef(&x,&y,&jum);
	cout<<"Hasil Penjumlahannya adalah "<<jum;
	return 0;
}
