#include<stdio.h>
#include<conio.h>
main ()
{
int nim, nama, pil, tgl, umur, nilai, SKS;
char Fakultas[30]=" INFORMATIKA FT-UMJ ";
float IPK;
  printf (" \nBIODATA ");
 putchar('M');
 putchar('A');
 putchar('H');
 putchar('A');
 putchar('S');
 putchar('I');
 putchar('S');
 putchar('W');
 putchar('A');
 puts(Fakultas);
 getchar ();
 printf ("Input nama mahasiswa: "); 
 scanf ("%s", &nama);
 printf ("Input NIM mahasiswa: "); 
 scanf ("%s", &nim );
 printf ("jumlah sks yang diambil: "); 
 scanf ("%d", &SKS );
 printf ("jumlah nilai: "); 
 scanf ("%d", &nilai); 
  IPK = (float) nilai/SKS; 
printf ("Jadi Indeks Prestasi Kumulatif Mahasiswa Adalah %.2f", IPK);
 return 0;
}
