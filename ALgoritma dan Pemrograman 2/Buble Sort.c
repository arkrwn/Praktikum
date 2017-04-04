#include<stdio.h>
int i, j, data, k, bantu, A[10], h[100];
int main(int argc, char **argv){
  
  // set batas banyaknya data dalam array dan batas perulangan
	printf("Batas data = "); scanf("%d", &data);
	printf("\n\n");

  // Perulangan untuk input data ke array A[]
	for (i = 1; i <= data; i++){
		printf(" A[%d]  = ", i); scanf("%d", &h[i]);
	}

	// Perulangan untuk menampilkan isi dari array A[]
	printf(" A = { ");
	for (i = 1; i <= data; i++){
		printf("%d,", h[i]);
	} printf(" } ");

  // Perulangan untuk menyusun data secara Descending
	for (i = 1; i <= (data - 1); i++){
		for (j = data; j >= (i + 1); j--){
			if (h[j]  >= h[j - 1]){
				bantu = h[j - 1];
				h[j - 1] = h[j];
				h[j] = bantu;
				printf("\n\n");
				printf(" A = { ");
				for (k = 1; k <= data; k++){
					printf("%d,", h[k]);
				}	printf(" }\a ");
			}
		}
	}

  // Perulangan untuk menampilkan data yang telah tersusun
	printf(" A = { ");
	for (i = 1; i <= data; i++){
		printf("%d,", h[i]);
	} printf(" } ");
	
  return 0;
}
