#include <stdio.h>

int ordo,x,y,i,j,array[5][5];

int main(){

// set jumlah ordo matriks array	ex: 3 artinya 3x3
	printf("Masukkan ordo matriks : ");
	scanf("%d",&ordo);

// perulangan untuk input data kedalam array 
	for (i=0; i<ordo; i++){
		for (j=0; j<ordo; j++){
			printf("Masukkan nilai array : A[%d][%d]",i,j);
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	
 // perulangan untuk menampilkan isi array
	for (x=0; x<ordo; x++){
		for (y=0; y<ordo; y++){
					printf("[%d]",array[x][y]);
				}
		}
		printf("\n");
	}
	
}
