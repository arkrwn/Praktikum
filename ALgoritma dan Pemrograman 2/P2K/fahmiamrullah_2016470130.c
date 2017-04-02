
#include<stdio.h>
#include<conio.h>

main ()
{

int NIM, Nama, Pilihan, tanggal_lahir, Usia, Nilai,SKS;
char FAKULTAS[100]=" TEKHNIK INFORMATIKA UMJ ";
float IPK;
 
 printf("TUGAS FAHMI AMRULLAH\n");
 printf("ALGORITMA DAN PEMROGRAMAN 2\n"); 
 printf (" \nProfile ");
 
 	putchar('M');
 	putchar('A');
 	putchar('H');
 	putchar('A');
 	putchar('S');
 	putchar('I');
 	putchar('S');
 	putchar('W');
 	putchar('A');
 
 puts(FAKULTAS);
 
 getchar ();
 
 	printf ("INPUT nama mahasiswa : "); scanf ("%s", &Nama);
 	printf ("INPUT NIM mahasiswa  : "); scanf ("%s", &NIM );
 	printf ("tanggal_lahir mahasiswa : "); scanf ("%d", &tanggal_lahir );
 	printf ("jumlah sks     : "); scanf ("%d", &SKS );
 	printf ("jumlah nilai             : "); scanf ("%d", &Nilai);
 
  Usia = (float) 2017 - tanggal_lahir ;
  IPK = (float) Nilai/SKS;
 
	printf ("usia ahasiswa = %d\n",Usia);
	printf ("IPK mahasiswa  = %.2f", IPK);


 return 0;
}
