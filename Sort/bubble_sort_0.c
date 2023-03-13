#include "sorts.h"

/* 对顺序表L作交换排序（冒泡排序初级版） */
void BubbleSort0(SqList *L)
{ 
	int i,j;
	for(i=1;i<L->length;i++)
	{
        // printf("i=%d\n",L->r[i]);
		for(j=i+1;j<=L->length;j++)
		{
            // printf("\tj=%d\n",L->r[j]);
			if(L->r[i]>L->r[j])
			{
				 swap(L,i,j);/* 交换L->r[i]与L->r[j]的值 */
			}
		}
	}
}