#include<stdio.h>

int t, o, help,  p, urutan, a[100], l[100];
main()
{
printf ("Masukin urutan="); scanf ("%d", &urutan);
printf ("\n\n");
for (t=1; t <= urutan; t++)
{
printf ("l[%d] =", t); scanf ("%d", &a[t]);}
printf ("\n\n");
printf("data gak urut:");
printf("\n\n");
printf("l= { "); 
for (t=1; t <= urutan; t++)
{
	printf ("%d,", a[t]);
}
printf (" } ");
for(t=1; t<= urutan; t++)
{
	for (o = urutan; o >= (t+1); o--)
	{
		if (a[o]>a[o-1])
		{ 
		help=a[o-1];
		a[o-1]=a[o];
		a[o]=help;
		printf("\n\n");
		printf("l={ ");
		for(p=1; p <= urutan; p++)
		{
			printf("%d,",a[p]);
		}
		printf(" }\a ");
		}
	}
}
printf("\n\n");
printf("data urut:");
printf("l={ ");
for (t=1; t <= urutan ;t++)
{
printf("%d,",a[t]);
}
printf ("}");
return 0;
}
