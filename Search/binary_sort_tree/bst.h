#include "stdio.h"    
#include "stdlib.h"   
#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100 /* 存储空间初始分配量 */
#define OVERFLOW 3

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码，如OK等 */ 

/* 二叉树的二叉链表结点结构定义 */
typedef struct BiTNode	/* 结点结构 */
{
	int data;	/* 结点数据 */
	struct BiTNode *lchild, *rchild;	/* 左右孩子指针 */
} BiTNode, *BiTree;

Status SearchBST(BiTree T, int key, BiTree f, BiTree *p);
Status InsertBST(BiTree *T, int key);
Status DeleteBST(BiTree *T,int key);
Status Delete(BiTree *p);