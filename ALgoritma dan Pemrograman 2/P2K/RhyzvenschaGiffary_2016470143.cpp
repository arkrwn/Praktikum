#include <stdio.h>
#include <conio.h>

int main ()
{
	int NIM, NAMA, PILIHAN, TL, UMUR;
	char FAKULTAS[30]= " TEKNIK INFORMATIKA UMJ ";
	float IPK;
	
	printf (" Profile \n ");
		
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
	
	printf ("isikan nama mahasiswa : "); scanf ("%s", &NAMA);
	printf ("isikan NIM mahasiswa : "); scanf ("%s", &NIM);
	printf ("tahun lahir mahasiswa : "); scanf ("%d", &TL);
	
	
	UMUR = (float) 2017 - TL ;
	
	printf (" usia mahaisiswa = %d \n",UMUR);
	
	
	return 0;		
}



