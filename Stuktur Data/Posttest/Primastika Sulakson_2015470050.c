#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa
{
	char nim[20];
	char namamhs[20];
	struct mahasiswa *next;
};

struct mahasiswa *ujung;

int tambah_datamhs()
{
	struct mahasiswa *tampung;
	int j=0;
	char jawab[2];
	
	printf(" LIFO");
	printf("\n");
	printf("____________________");
	
	while(1)
	{
		ujung = (struct mahasiswa*)malloc(sizeof(struct mahasiswa));
		fflush(stdin);
		printf("\n\n");
		printf("Nama : "); scanf("%s",&ujung->namamhs);
		printf("\n");
		printf("NIM : "); scanf("%s",&ujung -> nim);
		
		if (j == 0)
		{
			ujung -> next = NULL;
			tampung = ujung;
		}
		else
		{
			ujung -> next = tampung;
			tampung = ujung;
		}
		printf("\n");
		printf("Tambah Data Mahasiswa (Y/T): "); scanf("%s",&jawab);
		
		if (strcmp(jawab, "Y") == 0)
		{
			j++; continue;
		}
		
		else if ((strcmp(jawab, "T") == 0))
		break;
		
	}

	return 0;
}

void tampil_data()
{
	struct mahasiswa *tampil;
	printf("\n\n");
	printf("Data Mahasiswa yang telah diinputkan : \n");
	printf("\n");
	printf("NIM	 |	Nama\n\n");
	tampil = ujung;
	
	while (tampil != NULL)
	{
		printf(" %s\t	%s\t \n", tampil -> nim, tampil -> namamhs);
		tampil = tampil -> next;
	}
}

void Coba(){
	struct mahasiswa *tampil;
	int i ;
	tampil = ujung ;
		for ( i = 1 ; i <= 1 ; i++ ){
			printf(" %s\t %s\t \n",tampil->nim,tampil->namamhs);
		}
}


int main()
{
	tambah_datamhs();
	tampil_data();
	Coba();
	return 0;
}
