#include<stdio.h>
int main(){
    int grid[20][20];
    for (int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            scanf("%d",&grid[i][j]);
        }
    }
    
    long int product=1,max_product=1;
    int i,j;
    //UP
    for(i=3;i<20;++i){
	for(j=0;j<20;++j){
	    product=grid[i][j]*grid[i-1][j]*grid[i-2][j]*grid[i-3][j];
	    if(max_product<product){
		max_product=product;
	    }
	}
    }
    //LEFT
    for(j=3;j<20;++j){
	for(i=0;i<20;++i){
	    product=grid[i][j]*grid[i][j-1]*grid[i][j-2]*grid[i][j-3];
	    if(max_product<product){
		max_product=product;
	    }
	}
    }
    //DIAGONAL DOWN RIGHT
    for(i=0;i<17;++i){
	for(j=0;j<17;++j){
	    product=grid[i][j]*grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3];
	    if(max_product<product){
		max_product=product;
	    }
	}
    }
    //DIAGONAL UP RIGHT
    for(i=3;i<20;++i){
	for(j=0;j<17;++j){
	    product=grid[i][j]*grid[i-1][j+1]*grid[i-2][j+2]*grid[i-3][j+3];
	    if(max_product<product){
		max_product=product;
	    }
	}
    }
printf("%ld",max_product);
    return 0;
}
