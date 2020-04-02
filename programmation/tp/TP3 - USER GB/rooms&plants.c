//                                                    ACTIVITY1 : PLANTS

#include<stdio.h>

main () {
	int T[100]; int A[100]; int B[100]; 
	int c,i,j,m,n,k,l;
	//prompting user for plants count N
	do{
		printf("Give plants count N: ");
		scanf("%d",&n);
	}while((n<0) && (n>=100));
	
	//Prompting user for rooms count M
	do{
		printf("Give rooms count m: ");
		scanf("%d",&m);
	}while((m<0) || (m>100));
	
	//filling the TEMPERATURE TABLE
	for(i=0;i<m;i++){
		do{
			printf("Enter item T[%d]: ",i);
			scanf("%d",&T[i]);
		}while((T[i]<0) || (T[i]>100));
	}
	
	//FILLING THE A & B Tables
	for(j=0;j<n;j++){
		do{
			printf("Enter items A[%d] et B[%d]: ",j,j);
			//write the two nubers seperated with one space
			scanf("%d %d",&A[j],&B[j]);
		}while((A[j]<0) || (A[j]>100) || (A[j] > B[j]) || (B[j] > 100));
	}
	printf("\n Output: ! \n");
	
	//LOGIC
	for(k=0;k<n;k++){ //looping through plants
		c=0;
		for(l=0;l<m;l++){ // looping through rooms temperatures T[l]  
			if((T[l]>=A[k]) && (T[l]<=B[k])){ 
				c += 1; // incrementing the number of the rooms by 1
			}
		}
		printf("Le nombre des chambre est %d\n",c); //printing out the final number of rooms that can contain plants
	}
	
	
}
