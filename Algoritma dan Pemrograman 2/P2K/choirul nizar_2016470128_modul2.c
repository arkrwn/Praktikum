#include<stdio.h>
#include<conio.h>

int x, y, help, z, urutan, A[100], B[100];
main()
{
printf ("Silahkan Masukan Jumlah Urutannya ="); scanf ("%d", &urutan);
printf ("\n\n");
for (x=1; x <= urutan; x++)
{
printf ("B[%d] =", x); scanf ("%d", &A[x]);}
printf ("\n\n");
printf("Data Tidak Urut:");
printf("\n\n");
printf("B= { "); 
for (x=1; x <= urutan; x++)
{
	printf ("%d,", A[x]);
}
printf (" } ");
for(x=1; x<= urutan; x++)
{
	for (y = urutan; y >= (x+1); y--)
	{
		if (A[y]>A[y-1])
		{ 
		help=A[y-1];
		A[y-1]=A[y];
		A[y]=help;
		printf("\n\n");
		printf("B={ ");
		for(z=1; z <= urutan; z++)
		{
			printf("%d,",A[z]);
		}
		printf(" }\a ");
		}
	}
}
printf("\n\n");
printf("Data Urut:");
printf("\n\n");
printf("B={ ");
for (x=1; x <= urutan ;x++)
{
printf("%d,",A[x]);
}
printf ("}");
getch();
return 0;
}
