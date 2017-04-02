#include<stdio.h>
int main()
{
    char nama[10], nim[10];
    int ap1, ap2 ;
    float ap;
    
    putchar ('T');
    putchar ('.');
    putchar ('I');
    putchar ('n');
    putchar ('f');
    putchar ('o');
    putchar ('r');
    putchar ('m');
    putchar ('a');
    putchar ('t');
    putchar ('i');
    putchar ('k');
    putchar ('a');
    getchar();
    
    printf ("masukkan nama anda: "); scanf("%s", &nama);
    printf ("masukkan NIM anda : "); scanf("%s", &nim);
    printf ("masukkan nilai AP1 : "); scanf("%d", ap1);
    printf ("masukkan nilai AP2 : "); scanf("%d", ap2);
    ap = (float) ap1 + ap2/2;
    getchar();
  
    printf ("Nama : %s\n", nama);
    printf ("NIM : %s\n", nim);
    printf ("Rata-rata nilai AP : %.2f\n", ap);
    puts ("Tetap semangat belajar AP :)");
    getchar();
    return 0;
}
