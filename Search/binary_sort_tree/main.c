#include "bst.h"

/* 构造空二叉树T */
Status InitBiTree(BiTree *T)
{ 
	*T=NULL;
	return OK;
}

int idx_s = 0;
int arr[] = {62,58,47,35,0,37,0,0,51,0,0,0,88,73,0,0,99,93,0,0,0};

void CreateBiTree(BiTree *T)
{ 
	int ch;

	ch = arr[idx_s++];
	if(ch == 0) 
		*T=NULL;
	else
	{
		*T=(BiTree)malloc(sizeof(BiTNode));
		if(!*T)
			exit(OVERFLOW);
		(*T)->data=ch; /* 生成根结点 */
		CreateBiTree(&(*T)->lchild); /* 构造左子树 */
		CreateBiTree(&(*T)->rchild); /* 构造右子树 */
	}
}

void PreOrderTraverse(BiTree T)
{ 
	if(T==NULL)
		return;
	printf("%d\t",T->data);/* 显示结点数据，可以更改为其它对结点操作 */
	PreOrderTraverse(T->lchild); /* 再先序遍历左子树 */
	PreOrderTraverse(T->rchild); /* 最后先序遍历右子树 */
}

void InOrderTraverse(BiTree T)
{ 
	if(T==NULL)
		return;
	InOrderTraverse(T->lchild); /* 中序遍历左子树 */
	printf("%d\t",T->data);/* 显示结点数据，可以更改为其它对结点操作 */
	InOrderTraverse(T->rchild); /* 最后中序遍历右子树 */
}

main()
{
	/*
    BiTree T;
    printf("初始化结果：%d\n",InitBiTree(&T));

	CreateBiTree(&T);
    
    PreOrderTraverse(T);
    printf("\n");
    InOrderTraverse(T);
    printf("\n");
    
    BiTNode *p;
    int search_result = SearchBST(T,99,NULL,&p);
    printf("search_result: %d\n",search_result);

	int insert_result = InsertBST(&T,95);
	printf("insert_result: %d\n",insert_result);

	PreOrderTraverse(T);
    printf("\n");
    InOrderTraverse(T);
    printf("\n");
	*/

	// 构造二叉排序树的另一种方法
	int i;
	int a[]={62,58,47,35,29,37,36,51,49,48,50,56,88,73,99,93};
	BiTree T = NULL;
	for(i=0;i < sizeof(a)/sizeof(a[0]);i++)
	{
		InsertBST(&T, a[i]);
	}

	PreOrderTraverse(T);
    printf("\n");
    InOrderTraverse(T);
    printf("\n");

	DeleteBST(&T,47);
	PreOrderTraverse(T);
    printf("\n");
    InOrderTraverse(T);
    printf("\n");

}