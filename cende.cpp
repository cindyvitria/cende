#include <iostream>
#include <string>
using namespace std;

class remote{
	public:
		void fungsi(string fungsi);
		int harga;
};

int main(){
	remote TV,AC,kipas;
	
	TV.harga = 50000;
	AC.harga = 65000;
	kipas.harga = 35000;
	
	cout <<"Harga Remote TV adalah     Rp. "<<(TV.harga)<<endl;
	cout <<"Harga Remote AC adalah     Rp. "<<(AC.harga)<<endl;
	cout <<"Harga Remote Kipas adalah  Rp. "<<(kipas.harga)<<endl;
	
	TV.fungsi("gasan meatur TV");
}

void remote::fungsi(string fungsi){
	cout << "Fungsi Remote TV "<<fungsi<< " !!"<<endl;
}
