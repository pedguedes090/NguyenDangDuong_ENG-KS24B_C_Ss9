#include<stdio.h>
int main(){
	int max=100,b;
int value,index;
	int a[max];
	printf("Nhap phan tu trong mang\n");
	scanf("%d",&b);
	if(b<0||b>max+1){
		printf("loi ko hop le");
		
	}
	for(int i =0;i<b;i++){
		printf("nhap so thu %d\n",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("Nhap gia tri can them\n");
	scanf("%d",&value);
	printf("nhap vao vi tri \n");
	scanf("%d",&index);
	for(int i = b; i>index;i-- ){
		a[i] = a[i-1];
	}
	
	 a[index]=value;
	 	b++;
	for(int i =0;i<b;i++){
		printf("%d ",a[i]);
	}
	

	
}
