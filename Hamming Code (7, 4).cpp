// Rizki Juliansyah
// 14116151
// UTS PSD

#include <iostream>
using namespace std;

// fungsi perhitungan parity (logika untuk rumus xor)
int perhitungan_parity (int nilai1, int nilai2, int nilai3){
	int hasil;
	
	if(nilai1 == nilai2){
		hasil = 0;
	} else {
		hasil = 1;
	}
	
	if(hasil == nilai3){
		hasil = 0;
	} else {
		hasil = 1;
	}
	
	return hasil;
}


// fungsi banding untuk membandingkan nilai parity dan perhitungan (x,y,z)
int banding (int nilai1, int nilai2){
	int salah = 0;
	
	if(nilai1 == nilai2){	
		return 1;
	} else {
		return 0;
	}
}


// fungsi ubah untuk mengubah nilai yang salah
int ubah(int nilai){
	if (nilai == 1){
		nilai = 0;
	} else {
		nilai = 1;
	}
	return nilai;
}


// fungsi utama, baris code kurang efisien dalam waktu compile demi tercapainya kerapian program
int main (){
	int bit[7], i, x, y, z;
	
	cout<<"Masukkan 7 bit boolean (input per satuan bit kemudian tekan enter dan inputan diluar 1/0 akan bernilai 0)\n";

// Input
	for(i=0; i<7; i++){
		cin>>bit[i];
		
		if (bit[i]==0 || bit[i]==1){
		} else {
			bit[i]=0;
		}
	}
	
	cout<<"\nHasil :\nData boolean yang dimasukkan adalah ";
	for(i=0; i<7; i++){
		cout<<bit[i]<<" ";
	}
	
	cout<<"\ndidapat nilai :\na = "<<bit[0]<<"\nb = "<<bit[1]<<"\nc = "<<bit[2]<<"\nd = "<<bit[3];
	cout<<"\n\ndengan nilai parity : ""\nx = "<<bit[4]<<"\ny = "<<bit[5]<<"\nz = "<<bit[6];
	
// pemanggilan fungsi
	x = perhitungan_parity(bit[0], bit[1], bit[3]);
	y = perhitungan_parity(bit[0], bit[2], bit[3]);
	z = perhitungan_parity(bit[1], bit[2], bit[3]);
	
	cout<<"\n\nnilai perhitungan :\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z;

//pemanggilan fungsi di dalam kondisi
	cout<<"\n\nHasil perbandingan parity dan perhitungan :";
	
//untuk membandingkan nilai x
	if(banding(x, bit[4])==1){
		cout<<"\nx benar";
	} else {
		cout<<"\nx salah";
	}

//untuk membandingkan nilai y	
	if(banding(y, bit[5])==1){
		cout<<"\ny benar";
	} else {
		cout<<"\ny salah";
	}
	
//untuk membandingkan nilai z	
	if(banding(z, bit[6])==1){
		cout<<"\nz benar";
	} else {
		cout<<"\nz salah";
	}
	
	

// Untuk permisalan jumlah agar mudah menentukan kesalahan (logika bisa-bisa)
	int cek[3] = {banding(x, bit[4]), banding(y, bit[5]), banding(z, bit[6])};
	int misal = 0;
	misal = (cek[0]*100) + (cek[1]*10) + (cek[2]*1);
	

//Output dan logika akhir
	cout<<"\n\n";
	if(misal==111){
		cout<<"Tidak ada yang salah \nhasil akhir = ";
		for(i=0; i<7; i++){
			cout<<bit[i]<<" ";
		} 
	} else if(misal==11){
		cout<<"nilai x salah, ubah nilai x \nhasil akhir = "<<bit[0]<<" "<<bit[1]<<" "<<bit[2]<<" "<<bit[3]<<" "<<ubah(bit[4])<<" "<<bit[5]<<" "<<bit[6];
		
	} else if(misal==101){
		cout<<"nilai y salah, ubah nilai y \nhasil akhir = "<<bit[0]<<" "<<bit[1]<<" "<<bit[2]<<" "<<bit[3]<<" "<<bit[4]<<" "<<ubah(bit[5])<<" "<<bit[6];

	} else if(misal==110){
		cout<<"nilai z salah, ubah nilai z \nhasil akhir = "<<bit[0]<<" "<<bit[1]<<" "<<bit[2]<<" "<<bit[3]<<" "<<bit[4]<<" "<<bit[5]<<" "<<ubah(bit[6]);

	} else if(misal==1){
		cout<<"hanya z yang benar, ubah nilai a \nhasil akhir = "<<ubah(bit[0])<<" "<<bit[1]<<" "<<bit[2]<<" "<<bit[3]<<" "<<bit[4]<<" "<<bit[5]<<" "<<bit[6];
	
	} else if(misal==10){
		cout<<"hanya y yang benar, ubah nilai b \nhasil akhir = "<<bit[0]<<" "<<ubah(bit[1])<<" "<<bit[2]<<" "<<bit[3]<<" "<<bit[4]<<" "<<bit[5]<<" "<<bit[6];

	} else if(misal==100){
		cout<<"hanya x yang benar, ubah nilai c \nhasil akhir = "<<bit[0]<<" "<<bit[1]<<" "<<ubah(bit[2])<<" "<<bit[3]<<" "<<bit[4]<<" "<<bit[5]<<" "<<bit[6];

	} else {
		cout<<"Salah semua, ubah nilai d \nhasil akhir = "<<bit[0]<<" "<<bit[1]<<" "<<bit[2]<<" "<<ubah(bit[3])<<" "<<bit[4]<<" "<<bit[5]<<" "<<bit[6];

	}
	

////Output dan logika akhir
//	cout<<"\n\n";
//	if(misal==111){
//		cout<<"Tidak ada yang salah";
//		
//	} else if(misal==11){
//		cout<<"nilai x salah, ubah nilai x";
//		ubah(bit[4]);
//		
//	} else if(misal==101){
//		cout<<"nilai y salah, ubah nilai y";
//		ubah(bit[5]);
//
//	} else if(misal==110){
//		cout<<"nilai z salah, ubah nilai z";
//		ubah(bit[6]);
//
//	} else if(misal==1){
//		cout<<"hanya z yang benar, ubah nilai a";
//		ubah(bit[0]);
//	
//	} else if(misal==10){
//		cout<<"hanya y yang benar, ubah nilai b";
//		ubah(bit[1]);
//
//	} else if(misal==100){
//		cout<<"hanya x yang benar, ubah nilai c";
//		ubah(bit[2]);
//
//	} else {
//		cout<<"Salah semua, ubah nilai d";
//		ubah(bit[3]);
//	}
//	
//	cout<<"\nHasil Akhir = ";
//	for(i=0; i<7; i++){
//			cout<<bit[i]<<" ";
//		} 
//	
	
	return 0;
}
