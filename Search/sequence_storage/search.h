#include "stdio.h"    
#include "stdlib.h"   
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */

int Sequential_Search(int *a,int n,int key);
int Sentry_Sequential_Search(int *a,int n,int key);
int Binary_Search(int *a,int n,int key);