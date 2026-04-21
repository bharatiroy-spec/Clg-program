#include<stdio.h>

int main(){
	         	int size,i,pos=999;
				printf("Enter the size of the array:");
				scanf("%d",&size);
				int myarr[size];
				size-=1;
				
				for(int i=0;i<=size;i++){
							printf("	Enter %d array elements:",i);
							scanf("%d",&myarr[i]);
							}
							int search;
							printf("Enter the element you want to search:");
							scanf("%d",&search);
					for(int i=0;i<=size;i++){			
		   					if(search==myarr[i]){
									    pos=i;
										//printf("The desired %d element found at %d position",search,i);
										//break;
				}
			}
					if(pos==999){
										printf(" Type a valid number to search");
				
			
					}else{
								printf("The desired %d element found at %d position",search,pos);
					}
	return 0;
	}
