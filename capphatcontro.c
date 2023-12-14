#include<stdio.h>
#include<math.h>
#include<stdlib.h>


typedef struct {
    int length;
    int *array;
} Array_Typedef;
int main()
{
	int i=0;
	Array_Typedef arr;
	printf("nhap vao kich thuoc mang: ");
    scanf("%d",&arr.length);
    int **p_to_p=&arr.array;
    p_to_p = (int **)malloc(sizeof(int) *arr.length);
    arr.array = (int *) malloc(sizeof(int) *arr.length);
    for( i=0; i<arr.length ;i++){
        printf("nhap gia tri thu %d: ",i+1);
        scanf("%d",&arr.array[i]);
    }
    for( i=0; i<arr.length ;i++){
        printf("gia tri thu %d:%d\n",i+1, **p_to_p[i]);
    }
    printf("\n");
    free(arr.array);
    free(p_to_p);
}