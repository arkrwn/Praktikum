
#include <stdio.h>

int a,b,c;

int main() {
  printf("Masukkan nilai a = \t");
  scanf("%d",&a); // input nilai a

  printf("\n"); // buat baris baru

  printf("Masukkan nilai b = \t");
  scanf("%d",&b); // input nilai b

  c = a + b; // proses penjumlahan

  printf("Hasil untuk %d + %d = %d\n",a,b,c);
}
