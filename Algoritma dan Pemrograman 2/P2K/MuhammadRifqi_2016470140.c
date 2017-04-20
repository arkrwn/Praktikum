#include<stdio.h>
int main()
{
    char nama[20], kota[20], jk[2], jurusan[2];
    int i, nim[11];
    
    puts("Nama Mahasiswa: "); scanf("%s", &nama);
    puts("NIM: "); scanf("%s", &nim);
    puts("Jenis Kelamin: "); scanf("%s", &jk);
    puts("Jurusan: "); scanf("%s", &jurusan);
    puts("Kota Asal: "); scanf("%s", &kota);
    printf("Masukan Tahun Angkatan: "); scanf("%d",&i);
  
    getchar();
	
	printf("DATA ");
    putchar('M');
    putchar('A');
    putchar('H');
    putchar('A');
    putchar('S');
    putchar('I');
    putchar('S');
    putchar('W');
    putchar('A');
     
    puts("\n\nNama Mahasiswa : ");puts(nama);
    puts("\n\nNIM : ");puts(nim);
    puts("\n\nJenis Kelamin : ");puts(jk);
    puts("\n\nJurusan : "); puts(jurusan);
    puts("\n\nKota Asal : ");puts(kota);
    i=(float)i-2000;
    printf("Angakatan: %d",i);
 
    return 0;
}


