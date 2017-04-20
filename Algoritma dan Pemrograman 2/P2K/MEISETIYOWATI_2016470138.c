#include<stdio.h>
#include<conio.h>
main ()
{

int NIM, NAMA, nilai, SKS;
char FAKULTAS[30]=" TEHNIK INFORMATIKA UMJ ";
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
 
 puts(FAKULTAS);
 getchar ();
 
 printf ("Input Nama mahasiswa : "); scanf ("%s", &NAMA);
 printf ("Input NIM mahasiswa  : "); scanf ("%s", &NIM );
 printf ("jml sks yg diambil : "); scanf ("%d", &SKS );
 printf ("jml nilai  : "); scanf ("%d", &nilai);
 IPK = (float) nilai/SKS;
printf ("IPK mahasiswa  = %.2f", IPK);
return 0;
}
