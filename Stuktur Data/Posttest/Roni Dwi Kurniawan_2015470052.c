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
	
	printf(" Linked List LIFO(Last In First Out) ");
	printf("\n");
	printf("_____________________________________");
	
	while (1)
	{
		ujung = (struct mahasiswa*)malloc(sizeof(struct mahasiswa));
		fflush(stdin);
		printf("\n");
		printf(" Nama : "); scanf("%s", &ujung->namamhs);
		printf("\n");
		printf(" NIM : "); scanf("%s", &ujung->nim);
		
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
		printf("Tambah Data Mahasiswa (Y/T): "); scanf("%s", &jawab);
		
		if (strcmp(jawab, "Y") == 0)
		{
			j ++; continue;
		}
		
		else if (strcmp(jawab, "T") == 0)
			
			break;
	}
	return 0;
}

void tampil_data()
{
	struct mahasiswa *tampil;
	printf("\n\n");
	printf(" Data Mahasiswa Yang telah Diinputkan : \n");
	printf("\n");
	printf(" NIM 	|	 Nama\n\n");
	tampil = ujung;
	
	while (tampil != NULL)
	{
		printf(" %s\t|  %s\t", tampil->nim, tampil->namamhs);
		tampil = tampil->next;
	}
}

int main()
{
	tambah_data_mhs();
	tampil_data();
	return 0;
}
