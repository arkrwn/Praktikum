#include<stdio.h>

int i , j , data, k , bantu, h[100];

int main()

{
	
	
	printf("\nNama : M. Rizki Fadzillah");
	printf("\nNIM  : 2016470137"); 
	printf("\n\n");
	
	
	
	
	
	printf("Masukan Jumlah Nilai Matkul yang ingin di tampilkan = "); scanf("%d",&data);
	printf("\n\n");
	
	for (i=1; i <= data; i++)
	{
		printf("Nilai[%d] = ", i); scanf("%d", &h[i]);
	}
	
	printf("\n\n");
	printf("-----------------data tak terurut-----------------");
	printf("\n\n");
	printf("Hasil Nilai = { ");
	
	for (i = 1; i <=data; i++)
	{
		printf("%d,", h[i]);
	}
	
	printf(" } ");
	for (i=1; i <= (data-1); i++)
	{
		
		for (j=data; j >= (i+1); j--)
		{
			if (h[j] < h[j-1])
			{
				bantu = h[j-1];
				h[j-1] = h[j];
				h[j] = bantu;
			    printf("\n\n");
			    printf("Nilai = { ");
			    for (k=1; k <= data; k++)
			    {
			    	printf("%d,", h[k]);
				}
				printf(" } \a");
			}
			
		}
	}
	
printf("\n\n");
printf("-----------------Ascending Type-----------------");
printf("\n\n");
printf (" Urutan Nilai= { ");
for (i=1; i <= data; i++)
{
	printf("%d,", h[i]);
}
printf(" } ");


return 0;


}

