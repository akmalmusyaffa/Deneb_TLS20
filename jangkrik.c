#include<stdio.h>
int main()
{
    printf("apakah jangkrik pertama dan jangkrik kedua akan bertemu?\n\n");
    int x1,v1,x2,v2,s1,s2,i,y;
    i=1; y=1;
    printf("x1 = posisi awal jangkrik pertama\n");
    printf("v1 = jarak lompat jangkrik pertama\n");
    printf("x2 = posisi awal jangkrik kedua\n");
    printf("v2 = jarak lompat jangkrik kedua\n");
    printf("masukkan x1(spasi)v1(spasi)x2(spasi)v2\n");
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
	printf("\n");
    
    if(0<=x1<x2<=1000 &&1<=v1<=1000 &&1<=v2<=1000 &&v1>=v2){
        s1=x1;
        s2=x2;
        
        while(s1<s2){
            s1+=v1;
            printf("jarak jangkrik pertama pada lompatan ke-%d = %d\n",i,s1);
            i=i+1;
            s2+=v2;
            printf("jarak jangkrik kedua pada lompatan ke-%d   = %d\n\n",y,s2);
            y=y+1;

        }
        if(s1==s2){
            printf("\n=====================\n");
            printf("|                   |\n");
            printf("|       Y E S       |\n");
            printf("|                   |\n");
            printf("=====================\n\n");
			printf("kedua jangkrik akan bertemu");
    
        }
        else{
            printf("\n=====================\n");
            printf("|                   |\n");
            printf("|\t N O        |\n");
            printf("|                   |\n");
            printf("=====================\n\n"); 
            printf("kedua jangkrik tidak akan bertemu\n");
            
        }
    }
    else{
        printf("maaf, input yang anda masukkan tidak valid\n");
        printf("batasan input yang valid adalah\n");
        printf("0 <= x1 < x2 <= 1000\n");
        printf("1 <= v1 <= 1000\n");
        printf("v2 <= v1\n");
    }
    
return (0);
}
    