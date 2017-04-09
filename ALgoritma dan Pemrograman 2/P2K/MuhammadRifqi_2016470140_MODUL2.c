#include<stdio.h>

int i, j, data, k, bantu, h[100], A[100];
main()
{
printf ("MASUKAN JUMLAH DATA = "); scanf ("%d", &data);
printf ("\n\n");
for (i=1; i <= data; i++)
{
printf ("A[%d] = ", i); scanf ("%d", &h[i]);}
printf ("\n\n");
printf(":::::::::::::::::::: DATA TIDAK TERURUT ::::::::::::::::::::");
printf("\n\n");
printf("A= { "); 
for (i=1; i <= data; i++)
{
	printf ("%d,", h[i]);
}
printf (" } ");
for(i=1; i<= data; i++)
{
	for (j = data; j >= (i+1); j--)
	{
		if (h[j]>h[j-1])
		{ 
		bantu=h[j-1];
		h[j-1]=h[j];
		h[j]=bantu;
		printf("\n\n");
		
		printf("A={ ");
		for(k=1; k <= data; k++)
		{
			printf("%d,",h[k]);
		}
		printf(" }\a ");
		}
	}
}
printf("\n\n");
printf("DATA SUDAH TERURUT : ");
printf("A={ ");
for (i=1; i <= data ;i++)
{
printf("%d,",h[i]);
}
printf ("}");
return 0;
}
