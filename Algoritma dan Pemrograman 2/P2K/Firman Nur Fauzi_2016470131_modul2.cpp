#include<stdio.h>
#include<conio.h>

int  i, j, k, data, bantu, A[10], h[100];
main()

{
	printf("Masukan Jumlah Data = "); scanf("%d", &data);
	printf("\n\n");
	for(i=1; i<=data; i++)
	{
		printf(" A[%d] = " , i); scanf("%d", &h[i]);
	}
	printf("\n\n");
	printf("------Data Belum Terurut------");
	printf("\n\n");
	printf(" A = {");
	for(i=1; i<=data; i++)
	{
		printf("%d," , h[i]);
	}
	printf("}");
	for(i=1; i<=(data-1); i++)
	{
		for(j=data; j>=(i+1); j--)
		{
			if (h[j]>h[j-1])
			{
				bantu = h[j];
				h[j] = h[j-1];
				h[j-1] = bantu;
				printf("\n\n");
				printf(" A = {");
				for(k=1; k<=data; k++)
				{
					printf("%d," , h[k]);
				}
				printf("}\a");
			}
		}
	}
	printf("\n\n");
	printf("------Data Sudah Terurut (Descending)------");
	printf("\n\n");
	printf(" A = {");
	for(i=1; i<=data; i++)
	{
		printf("%d," , h[i]);
	}
	printf("} ");
	getch();
	return 0;
}
