#include<stdio.h>
int main(){
						int type,n;
					
						printf("Enter the number of elements of Array:");
						scanf("%d",&n);
						int myarr[n];
					   printf("\n");		
						for(int i=0;i<n;i++){
										printf("Enter %d th element of array:",i);
										scanf("%d",&myarr[i]);
											}
						printf("Befre Insertion\n");
						int size=sizeof(myarr)/sizeof(myarr[0]);
						for(int i=0;i<size;i++){
											printf("%d\t",myarr[i]);
												}
						printf("\n");																				
						printf("Choose the desired insertion:\n 1. At the begining,\n 2.In the middle,\n 3.At the end:");
						scanf("%d", &type);
						
						if(type==1){
													int num;
													printf("Enter the number you want to insert:");
													scanf("%d",&num);
													for(int i=size;i>=0;i--){
															myarr[i+1]=myarr[i];}
															myarr[0]=num;
															printf("After Insertion\n");
															for(int i=0;i<size;i++){
																				printf("%d\t",myarr[i]);
																		}
																		}
																		
				 else if(type==2){		
													int num,pos;
													printf("Enter the number you want to insert:");
													scanf("%d",&num);
													printf("Enter the positionof insertion:");
													scanf("%d",&pos);
													for(int i=0;i<pos;i++){
															myarr[i]=myarr[i];}
														
									       		for(int i=pos+1;i<=size;i++){
																			myarr[i]=myarr[i-1];}
															myarr[pos]=num;
															printf("After Insertion\n");
															for(int i=0;i<size;i++){
																				printf("%d\t",myarr[i]);
																		}	
							}else{	
													int num;
													printf("Enter the number you want to insert:");
													scanf("%d",&num);
													for(int i=0;i<size;i++){
															myarr[i]=myarr[i];
															myarr[size]=num;}
															printf("After Insertion\n");
															for(int i=0;i<=size;i++){
																				printf("%d\t",myarr[i]);}
																				}
												}								
																		
																		
																		
												
																		
												
