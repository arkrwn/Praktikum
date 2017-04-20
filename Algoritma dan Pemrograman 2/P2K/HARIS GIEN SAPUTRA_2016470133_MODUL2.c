#include "stdio.h"

int main()
{
    int L[20], temp, i, j, n, data;
    printf ("Pengurutan Berdasarkan Bubble Sort\n\n");
    printf ("Masukkan Jumlah Data : "); scanf ("%d", &n);
    printf ("\n");
    
    for( i = 0; i < n; i++ ){
        printf ("Data ke - %d : ", i); scanf ("%d",&L[i]);
	}

    printf("\nSebelum Sorting : ");

    for ( i = 0; i < n; i++ ){
		printf("%d ",L[i]);
	}

    for( i = n - 2; i >= 0; i-- ){
    /*5 3 1 2 ===> 3 5 1 2, 3 1 5 2, 3 1 2 5 // 1 3 2 5, 1 2 3 5 // 1 2 3 5*/
        for( j = 0; j <= i; j++ ){
            if( L[j] < L[j+1]){
                temp = L[j];
                L[j] = L[j+1];
                L[j+1] = temp;
            }
        }
    }
    printf("\nSetelah Sorting : ");
    for( i = 0; i < n; i++ ){
		printf("%d ",L[i]);
	}
    printf("\n");
    return 0;
}
