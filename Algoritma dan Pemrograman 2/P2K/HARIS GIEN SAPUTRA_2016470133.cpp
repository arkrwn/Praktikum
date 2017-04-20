#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main (){
	char siswa[20], nim[10], nama[20];
	int nharian, nuts, nuas, pilihan;
	float hasil;
	ulang :
	system("cls");
	
	// Header  	  	
	puts("\t\t\t=============================");
	puts("\t\t\t::::: PROGRAM SEDERHANA :::::");
	puts("\t\t\t=============================");
	puts("\t\t Pilihlah Salah Satu Operasi Yang Diinginkan");
	puts("...............................................................................\n");
	puts(" (1) Menghitung Nilai Mahasiswa");
	puts(" (2) Numpang Lewat");
	puts(" ");
	
	// Pengulangan Dimulai Dari Sini
	cout<<"Masukkan Pilihan Yang Anda Inginkan : ";
	cin>>pilihan;
	cout<<"..............................................................................."<<endl;
	
	if (pilihan == 1){		
		// Input Data Mahasiswa
		printf("Input NIM Mahasiswa  : "); scanf ("%s", &nim);
		printf("Input Nama Mahasiswa : "); scanf ("%s", &siswa);		
		getchar();
		
		// Input Nilai Mahasiswa
		printf("Input Nilai Harian   : "); scanf ("%d", &nharian);
		printf("Input Nilai UTS      : "); scanf ("%d", &nuts);
		printf("Input Nilai UAS      : "); scanf ("%d", &nuas);
		
		// Proses Penghitungan
		puts (" ");
		hasil = ( ((float) nharian * 0.2) + ((float) nuts * 0.3) + ((float) nuas * 0.5) );
		
		// Kondisi
		if ( hasil > 55 ){
			printf("Selamat %s (%s) Anda Lulus\n", siswa, nim);
		} else {
			printf("Maaf %s (%s) Anda Tidak Lulus\n", siswa, nim);
		}
	
		printf("Nilai Akhir = %.2f\n", hasil);
		printf("Grade       = ");
		
		if ( hasil >= 79 ){
			putchar('A');
		} else if ( hasil >= 68 && hasil < 79 ){
			putchar('B');
		} else if ( hasil >= 56 && hasil < 68 ){
			putchar('C');
		} else if ( hasil >= 45 && hasil < 56 ){
			putchar('D');
		} else {
			putchar('E');
		}
	} else if (pilihan == 2){
		puts ("\nSiapa Nama Kamu ? "); scanf ("%s", &nama);
  		printf("\nHallo %s, Semoga Harimu Menyenangkan.", nama);
	}
		
	// Pengulangan
	cout<<"\n\nTekan 0 untuk Mengulang, Tekan 9 Untuk Keluar : " ;
	cin>>pilihan;
   
	if ( pilihan == 0){
	goto ulang;
	}	
	
	return 0;
}
