#include<stdio.h> 
int binomialCoeff(int n, int k) 
{ 
if (k==0 || k==n) 
    return 1; 
  
  return  binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k); 
} 
  
int main() 
{ 
  	int n,k; 
    printf("Enter The (n,k) In Value n : ");
    scanf("%d" ,&n );
    printf("Enter The (n,k) In Value k : ");
    scanf("%d" ,&k );
	printf("Value Of C(%d, %d) Is %d ", n, k, binomialCoeff(n, k)); 
    return 0; 
}

