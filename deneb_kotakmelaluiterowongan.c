#include <stdio.h>

int main ()
{
	int i,j,n,vol;
	printf("Masukkan jumlah kotak : ");
	scanf("%d",&n);
	int l[n-1], w[n-1], h[n-1];
	for(i=0;i<n;i++){
		printf("Masukkan panjang, lebar, tinggi (pisahkan dengan spasi) : ");
		scanf("%d %d %d", &l[i], &w[i] , &h[i]);
	}
	for(j=0;j<n;j++){
		vol=l[j]*w[j]*h[j];
		if(h[j]<41){
			printf("Volume kotak yang muat di terowongan\n");
			printf("volume : %d \n",vol);
		}
	}
	
	return 0;
}
	    