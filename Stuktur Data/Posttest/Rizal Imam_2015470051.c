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

int tambah_data_mhs()
{
	struct mahasiswa *tampung;
	int j=0;
	char jawab[2];
	
	printf("        Linked LIST        \n");
	printf(" ------------------------- \n");
	printf(" Rizal Imam F (2015470051) \n\n");
	
	while(1)
	{
	ujung = (struct mahasiswa*)malloc(sizeof(struct mahasiswa));
	fflush(stdin);
	printf("\n\n");
	printf("Nama : "); scanf("%s",&ujung->namamhs);
	printf("\n");
	printf("NIM : "); scanf("%s",&ujung->nim);
	if (j == 0)
		{
			ujung->next = NULL;
			tampung = ujung;
		}
		else
		{
			tampung->next = tampung;
			tampung = ujung;
		}
		printf("\n");
		printf("Tambah Data Mahasiswa (y/t) : "); scanf("%s",&jawab);
		if (strcmp(jawab,"y")==0)
		{
			j++; continue;
		}
		if (strcmp(jawab,"t")==0)
		break;
	}
	return 0;
}

void tampil()
{
	struct mahasiswa *tampil;
	printf("\n\n");
	printf("Data Mahasiswa yang telah diinputkan : \n");
	printf("\n");
	printf("\tNIM\t|\tNama\t\n\n");
	tampil = ujung;
	
	while (tampil != NULL)
	{
		printf(" \t%s\t|\t%s\t \n", tampil -> nim, tampil -> namamhs);
		tampil = tampil -> next;
	}
}

int main()
{
	tambah_data_mhs();
	tampil();
	return 0;
}

