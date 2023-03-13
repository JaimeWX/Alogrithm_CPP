#include <stdio.h>    
#include <string.h>
#include <ctype.h>      
#include <stdlib.h>   
#include <math.h>  
#include <time.h>

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 10000  /* 用于要排序数组个数最大值，可根据需要修改 */

typedef int Status; 

typedef struct
{
	int r[MAXSIZE+1];	/* 用于存储要排序数组，r[0]用作哨兵或临时变量 */
	int length;			/* 用于记录顺序表的长度 */
}SqList;

void swap(SqList *L,int i,int j);
void print(SqList L);

void BubbleSort0(SqList *L);
void BubbleSort(SqList *L);
void BubbleSort2(SqList *L);

void SimpleSelectSort(SqList *L);
void StraightInsertSort(SqList *L);