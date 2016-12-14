#include <stdio.h>
#include <stdlib.h>
struct mahasiswa

{
	char nim[20];
	char namamhs[20];
	struct mahasiswa *next;
};
									\\ Zaid Abdillah \\ 
									\\ 2015470061 \\
int main()
{
	int pilih;
	printf("Single Linked List LIFO \n");
	printf("\n========================\n");
	do{
		printf("\nPilihan : \n");
		printf("1. Insert \n");
		printf("2. Display \n");
	
	printf("\n========================\n");
		printf("Masukkan Pilihan Anda : "); scanf("%d", &pilih);
		switch (pilih){
			case 1:	insert();
					break;
			case 2: display();
					break;
		}
	}while(pilih != 3);
	return 0;
}
struct mahasiswa *ujung;
int j;

void insert()
{
	struct mahasiswa *tampung;
	int j=0;
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
			ujung->next = tampung;
			tampung = ujung;
		}
	j++; 
}

void display()
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



