#include<stdio.h>

int i, j, indexs, k, bantu, h[100], A[100];
main()
{
printf ("input jumlah indeks array A = "); scanf ("%d", &indexs);
printf ("\n\n");
printf ("input element array A yang tidak terurut\n\n");
for (i=1; i <= indexs; i++)
{

printf ("A[%d] = ", i); scanf ("%d", &h[i]);}
printf ("\n\n");
printf("algoritma pengurutan angka dg metode gelembung");
printf("\n\n");
printf("A= { "); 
for (i=1; i <= indexs; i++)
{
	printf ("%d,", h[i]);
}
printf (" } ");
for(i=1; i<= indexs; i++)
{
	for (j = indexs; j >= (i+1); j--)
	{
		if (h[j]>h[j-1])
		{ 
		bantu=h[j-1];
		h[j-1]=h[j];
		h[j]=bantu;
		printf("\n\n");
		
		printf("A={ ");
		for(k=1; k <= indexs; k++)
		{
			printf("%d,",h[k]);
		}
		printf(" }\a ");
		}
	}
}
printf("\n\n");
printf("elemet array A yg sudah terurut descending dg metode gelembung :");
printf("\n\n");
printf("A={ ");
for (i=1; i <= indexs ;i++)
{
printf("%d,",h[i]);
}
printf ("}");
return 0;
}
