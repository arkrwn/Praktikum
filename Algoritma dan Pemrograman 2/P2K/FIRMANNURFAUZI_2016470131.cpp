#include<stdio.h>
#include<conio.h>
main ()
{

int nim, nama, pil, tgl, umur, nilai, SKS;
char Fakultas[30]=" TEKHNIK INFORMATIKA FT-UMJ ";
float IPK;
 
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
 puts(Fakultas);
 getchar ();
 printf ("Input nama mahasiswa : "); scanf ("%s", &nama);
 printf ("Input NIM mahasiswa  : "); scanf ("%s", &nim );
 printf ("tahun lahir mahasiswa : "); scanf ("%d", &tgl );
 printf ("jumlah sks yang diambil    : "); scanf ("%d", &SKS );
 printf ("jumlah nilai             : "); scanf ("%d", &nilai); 
  umur = (float) 2017 - tgl ;
  IPK = (float) nilai/SKS; 
printf ("umur mahasiswa = %d\n",umur);
printf ("IPK mahasiswa  = %.2f", IPK);
 return 0;
}
