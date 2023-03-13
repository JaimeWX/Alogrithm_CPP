#include "sorts.h"

#define N 9

/* 交换L中数组r的下标为i和j的值 */
void swap(SqList *L,int i,int j) 
{ 
	int temp=L->r[i]; 
	L->r[i]=L->r[j]; 
	L->r[j]=temp; 
}

void print(SqList L)
{
	int i;
	for(i=1;i<L.length;i++)
		printf("%d,",L.r[i]);
	printf("%d",L.r[i]);
	printf("\n");
}

int main()
{
    int ini_array[N]={9,1,5,8,3,7,4,6,2};
    SqList l0,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10;  
    for(int i=0;i<N;i++)
        l0.r[i+1]=ini_array[i];
    l0.length=N;
    l1=l2=l3=l4=l5=l6=l7=l8=l9=l10=l0;
    printf("排序前:\n");
    print(l0);

    printf("初级冒泡排序:\n");
    BubbleSort0(&l0);
    print(l0);

    printf("冒泡排序:\n");
    BubbleSort(&l1);
    print(l1);

    printf("改进冒泡排序:\n");
    BubbleSort2(&l2);
    print(l2);

    printf("简单选择排序:\n");
    SimpleSelectSort(&l3);
    print(l3);

    printf("直接插入排序:\n");
    SimpleSelectSort(&l4);
    print(l4);

    return 0;
}