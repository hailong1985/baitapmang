#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tb(int a[5])
 {
 	int i,tong=0,avg=0;
	for(i=0;i<5;i++){
		tong += a[i];
	}
 	avg = tong/5;
 	return avg;
}


int main(int argc, char *argv[]) {
	int a[5]={10,5,7,90,100};
	
printf("Gia Tri Nho Nhat: %d\n",min(a));
printf("Gia Tri Lon Nhat: %d\n",max(a));
printf("Gia tri tong la: %d\n", tong(a));
printf("Gia tri trung binh la: %d", tb(a));
}

int min(int a[5])
  {
	int i,vitri,min;
	min=a[0];
	for(i=0;i<5;i++){
		if(a[i]<min){
		min=a[i];
		vitri=i; 
		}	
	}
	return vitri;
  }
  
  
int max(int a[5])
  {  
	int i,vitri,max;
	max=a[0];
	for(i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
			vitri=i;
		}
	}
	return vitri;
  }
int tong(int a[5])
  {
	int i,vitri,tong;
	tong=0;
	for(i=0;i<5;i++)
	tong += a[i];
	return tong;
  }


