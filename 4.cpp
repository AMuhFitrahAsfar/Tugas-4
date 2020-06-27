#include <iostream>  
#define MAX 5 
using namespace std;

int main() { 
	int a[MAX]; 
	int *b; b = a;

	for (int i=0; i<MAX; i++) { 
	cout<<"Masukkan Nilai"<<i+1<< " : "; 
	cin >> a[i]; 
	}	 

	cout<<endl; 

	for (int i=0; i<MAX; i++) { 
	cout<<"Nilai a["<<i<<"] = "<<*b<<endl;
	b++; 
	} 

}
