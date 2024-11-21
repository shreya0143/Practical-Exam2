#include <stdio.h>

int main() {
	int n, i, sum = 0;
	
	printf("Enter the number of elements in the array :");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter %d elements : \n",n);
	for (i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	
	for (i=0; i<n; i++) {
		if(arr[i] > 0) {
			sum +=arr[i];
		}
	}
	
	printf("sum of positive numbers : %d\n",sum);
	
	return 0;
}
	


