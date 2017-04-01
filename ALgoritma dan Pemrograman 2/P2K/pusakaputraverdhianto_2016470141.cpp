
#include<stdio.h>
#include<conio.h>

main ()
{

int NIM, Nama, Pilihan, TahunLahir, Umur, Nilai,SKS;
char FAKULTAS[100]=" TEKHNIK INFORMATIKA UNIVERSITAS MUHAMMADIYAH JAKARTA ";
float IPK;
 
 printf("TUGAS PUSAKA PUTRA VERDIANTO\n");
 printf("ALGORITMA DAN PEMROGRAMAN 2\n"); 
 printf (" \nProfile ");
 
 	putchar('m');
 	putchar('a');
 	putchar('h');
 	putchar('a');
 	putchar('s');
 	putchar('i');
 	putchar('s');
 	putchar('w');
 	putchar('a');
 
 puts(FAKULTAS);
 
 getchar ();
 
 	printf ("INPUT nama mahasiswa : "); scanf ("%s", &Nama);
 	printf ("INPUT NIM mahasiswa  : "); scanf ("%s", &NIM );
 	printf ("tahun lahir mahasiswa : "); scanf ("%d", &TahunLahir );
 	printf ("jumlah sks     : "); scanf ("%d", &SKS );
 	printf ("jumlah nilai             : "); scanf ("%d", &Nilai);
 
  Umur = (float) 2017 - TahunLahir ;
  IPK = (float) Nilai/SKS;
 
	printf ("umur mahasiswa = %d\n",Umur);
	printf ("IPK mahasiswa  = %.2f", IPK);


 return 0;
}
