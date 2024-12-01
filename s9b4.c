#include<stdio.h>
int main(){
	int ans,a,max=100;
	int b,value,index;
	int arr[max];
	do{
		printf(" \nMENU \n");
		printf("1. nhap vao mang\n");
		printf("2. hien thi mang\n");
		printf("3. them phan tu\n");
		printf("4. sua phan tu\n");
		printf("5. xoa phan tu\n");
		printf("6. thoat\n");
		scanf("%d",&ans);
	switch(ans){
		case 1:
			
				b =true;
				printf("moi ban nhap vao mang : ");
				scanf("%d",&a);
				
				for(int i=0;i<a;i++){
					printf("Nhap so thu tu thu %d : ",i+1);
						scanf("%d",&arr[i]);
					
				}
			
			break;
		case 2:
			
				if(b==true){
				
				for(int i =0;i<a;i++){
					printf("%d ",arr[i]);
				}
			}
		
			break;
		case 3:
	
			
				if(b==true){
			printf("nhap gia tri can them : ");
			scanf("%d",&value);
			printf("nhap vi tri can them : ");
			scanf("%d",&index);
				for(int i =a;i>=index;i--){
					arr[i]=arr[i-1];
					
				}
				
					arr[index-1]=value;
					a++;
				for(int i =0;i<a;i++){
					printf("%d ",arr[i]);
				}
			}
		
			break;
		case 4:	
			if(b==true){
		printf("nhap vi tri can sua :");
		scanf("%d",&index);
		printf("sua thanh gia tri : ");
		scanf("%d",&value);
		arr[index-1]=value;
		for(int i =0;i<a;i++){
			printf("%d ",arr[i]);}
	}
			break;
		case 5:
				if(b==true){
				printf("nhap vi tri can xoa : ");
				scanf("%d",&index);
				for(int i=index-1;i<a;i++){
					arr[i]=arr[i + 1];
				}
				a--;
				for(int i =0;i<a;i++){
					printf("%d ",arr[i]);
				}
				
			break;
}
	
}
	
}while(ans!=6);


return 0;

}

