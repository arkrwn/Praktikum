#include<stdio.h>
#include<conio.h>
main ()
{

int NIM, NAMA, pilihan, TL, USIA, nilai,SKS;
char FAKULTAS[30]=" TEKHNIK INFORMATIKA UMJ ";
float IPS;
 
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
 
 printf ("Isikan nama mahasiswa : "); scanf ("%s", &NAMA);
 printf ("Isikan NIM mahasiswa  : "); scanf ("%s", &NIM );
 printf ("tahun lahir mahasiswa : "); scanf ("%d", &TL );
 printf ("jml sks yg diambil    : "); scanf ("%d", &SKS );
 printf ("jml nilai             : "); scanf ("%d", &nilai);
 
  USIA = (float) 2017 - TL ;
  IPS = (float) nilai/SKS;
  
  printf ("\n");
 
printf ("usia mahasiswa = %d\n",USIA);
printf ("Indeks Prestasi Semester Mahasiswa  = %.2f", IPS);


 return 0;
}
