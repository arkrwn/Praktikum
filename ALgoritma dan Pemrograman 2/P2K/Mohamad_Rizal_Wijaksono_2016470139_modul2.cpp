#include<stdio.h>

int r, i, help, z, urutan, a[100], l[100];
main()
{
printf ("Masukin urutannya="); scanf ("%d", &urutan);
printf ("\n\n");
for (r=1; r <= urutan; r++)
{
printf ("l[%d] =", r); scanf ("%d", &a[r]);}
printf ("\n\n");
printf("data gak urut:");
printf("\n\n");
printf("l= { "); 
for (r=1; r <= urutan; r++)
{
	printf ("%d,", a[r]);
}
printf (" } ");
for(r=1; r<= urutan; r++)
{
	for (i = urutan; i >= (r+1); i--)
	{
		if (a[i]>a[i-1])
		{ 
		help=a[i-1];
		a[i-1]=a[i];
		a[i]=help;
		printf("\n\n");
		printf("l={ ");
		for(z=1; z <= urutan; z++)
		{
			printf("%d,",a[z]);
		}
		printf(" }\a ");
		}
	}
}
printf("\n\n");
printf("data urut:");
printf("l={ ");
for (r=1; r <= urutan ;r++)
{
printf("%d,",a[r]);
}
printf ("}");
return 0;
}
