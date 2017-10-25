#include <iostream>
using namespace std;

int main(){
	double luas(42),jumlah_box(22.3885),luas_box(1.87596),biaya_parket(11194.3),biaya_pasang,total_biaya(12034.3);
	
	cout<<"Masukkan Luas Rumah(m2)\t\t:";
	cin >> luas_rumah;
	
	cout<<"Masukkan panjang parket(mm)\t:";
	cin >>panjang_parket;
	cout<<"masukkan lebar parket(mm)\t:";
	cin >>lebar_parket;
	luas_parket=(panjang_parket/1000)*(lebar_parket/1000);
	
	cout<<"jumlah parket dalam 1 box\t:";
	cin>>jumlah_parket_in_box;
	
	cout<<"harga 1 box parket\t\t:";
	cin>>harga_parket;
	
	cout<<"biaya pemasangan (/m2)\t\t:";
	cin>>harga_pasang;
	
	cout<<"\n";
	cout<<"Luas Rumah\t\t\t:"<<luas_rumah<<" m2\n";
	
	uas_in_box=luas_parket*jumlah_parket_in_box;
	jumlah_box=luas_rumah/luas_in_box;
	
	cout<<"Luas 1 box parket\t\t:"<<luas_in_box<<" m2\n";
	cout<<"Jumlah box parket\t\t:"<<jumlah_box<<"\n";
	
	biaya_parket=harga_parket*jumlah_box;
	cout<<"Biaya parket(Rp)\t\t:"<<biaya_parket<<"\n";
}
	
	
}


