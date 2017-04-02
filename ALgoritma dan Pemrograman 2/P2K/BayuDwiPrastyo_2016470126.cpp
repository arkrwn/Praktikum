#include<stdio.h>
#include<conio.h>
main ()
{

int NIM, NAMA, pilihan, TL, USIA, nilai,SKS;
char FAKULTAS[30]=" TEKHNIK INFORMATIKA UMJ ";
float IPK;
 
 printf (" \nPROFILE ");
 
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
 
 printf ("NAMA MAHASISWA              = "); scanf ("%s", &NAMA);
 printf ("NIM MAHASISWA               = "); scanf ("%s", &NIM );
 printf ("TAHUN LAHIR MAHASISWA       = "); scanf ("%d", &TL );
 printf ("JUMLAH SKS YG DIAMBIL       = "); scanf ("%d", &SKS );
 printf ("JUMLAH NILAI                = "); scanf ("%d", &nilai);
 
  USIA = (float) 2017 - TL ;
  IPK = (float) nilai/SKS;
 
printf ("USIA MAHASISWA = %d\n",USIA);
printf ("IPK MAHASISWA  = %.2f", IPK);


 return 0;
}
