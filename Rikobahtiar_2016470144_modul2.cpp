#include<stdio.h>

int b, u, help,  s, urutan, a[100], l[100];
main()
{
printf ("Masukin urutan="); scanf ("%d", &urutan);
printf ("\n\n");
for (b=1; b <= urutan; b++)
{
printf ("l[%d] =", b); scanf ("%d", &a[b]);}
printf ("\n\n");
printf("data gak urut:");
printf("\n\n");
printf("l= { "); 
for (b=1; b <= urutan; b++)
{
	printf ("%d,", a[b]);
}
printf (" } ");
for(b=1; b<= urutan; b++)
{
	for (u = urutan; u >= (b+1); u--)
	{
		if (a[u]>a[u-1])
		{ 
		help=a[u-1];
		a[u-1]=a[u];
		a[u]=help;
		printf("\n\n");
		printf("l={ ");
		for(s=1; s <= urutan; s++)
		{
			printf("%d,",a[s]);
		}
		printf(" }\a ");
		}
	}
}
printf("\n\n");
printf("data urut:");
printf("l={ ");
for (b=1; b <= urutan ;b++)
{
printf("%d,",a[b]);
}
printf ("}");
return 0;
}
