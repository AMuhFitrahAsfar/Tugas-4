#include <iostream>
using namespace std;
int main () {

   int  x = 20;
   int  *px;
   px = &x; 

   cout<<"Alamat memori variabel x: "<< &x<<endl;
   cout<<"Alamat memori di pointer px: "<<px<<endl;
   cout<<"Nilai pada *px: "<< *px<<endl;
   cout<<"Nilai x sebelum : "<< x<<endl;

   *px = 48;
   cout<<"Nilai x sesudah : "<< x;

}
