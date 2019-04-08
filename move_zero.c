#include <stdio.h>
#include <sring.h>

void move_zero(int *array, int length)
{
	int i=0,j;
	int count=0;

	while(array[i++]==0){
		count++;
		for(j=i; i<length; i++){
			array[i-1] = array[i];
		}
	}
	
	memset(array[length-count], 0, count);
	
	return ;
}

void main()
{
	int i;
	
	for(i=0; i<10; i++){
		scanf("%d", &array[i]);
	}
	move_zero(array, 10);
	
	return ;
}
