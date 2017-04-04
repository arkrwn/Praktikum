#include <stdio.h>

int array[10], i, x;

int main(){

// batas banyak perulangan dan jumlah data dalam array
  printf("Masukkan banyak bilangan : ");
  scanf("%d",&x);

// perulangan untuk melakukan input data kedalam array
  for (i = 0; i <= x; i++) {
    printf("Masukkan nilai array indeks ke-%d : ", i);
    scanf("%d",&array[i]);
  }

// perulangan untuk mencetak isi array yagn telah diinput sebelumnya
  for (i = 0; i <= x; i++) {
    printf("Nilai array indeks ke-%d : ", array[i]);
  }
  
}
