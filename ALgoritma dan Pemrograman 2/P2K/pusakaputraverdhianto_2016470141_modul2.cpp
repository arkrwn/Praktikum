#include<stdio.h>

int b, c, help, k, urutan, h[100], A[100];
main()
{
printf ("Masukan jumlah urutannya="); scanf ("%d", &urutan);
printf ("\n\n");
for (b=1; b <= urutan; b++)
{
printf ("A[%d] =", b); scanf ("%d", &h[b]);}
printf ("\n\n");
printf("data tidak urut:");
printf("\n\n");
printf("A= { "); 
for (b=1; b <= urutan; b++)
{
	printf ("%d,", h[b]);
}
printf (" } ");
for(b=1; b<= urutan; b++)
{
	for (c = urutan; c >= (b+1); c--)
	{
		if (h[c]>h[c-1])
		{ 
		help=h[c-1];
		h[c-1]=h[c];
		h[c]=help;
		printf("\n\n");
		printf("A={ ");
		for(k=1; k <= urutan; k++)
		{
			printf("%d,",h[k]);
		}
		printf(" }\a ");
		}
	}
}
printf("\n\n");
printf("data urut:");
printf("A={ ");
for (b=1; b <= urutan ;b++)
{
printf("%d,",h[b]);
}
printf ("}");
return 0;
}
