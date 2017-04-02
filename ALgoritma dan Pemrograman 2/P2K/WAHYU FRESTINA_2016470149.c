#include<stdio.h>
#include<conio.h>
main ()
{
int nim, nama, pil, tgl, umur, nil, SKS;
char Fakultas[30]=" INFORMATIKA FT-UMJ ";
float IPK;
  printf (" \nBIODATA ");
 putchar('M');
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
 printf ("masukkan nama mahasiswa = "); 
 scanf ("%s", &nama);
 printf ("masukkan NIM mahasiswa = "); 
 scanf ("%s", &nim );
 printf ("masukkan jumlah sks yang diambil = "); 
 scanf ("%d", &SKS );
 printf ("masukkan jumlah nilai = "); 
 scanf ("%d", &nil); 
  IPK = (float) nil/SKS; 
printf ("Jadi IPK Mahasiswa Adalah %.5f", IPK);
 return 0;
}
