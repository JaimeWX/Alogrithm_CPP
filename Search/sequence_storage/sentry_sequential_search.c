/* 有哨兵顺序查找 */
int Sentry_Sequential_Search(int *a,int n,int key)
{
	a[n] = key;
    int i = 0;
	while(a[i]!=key)
	{
		i++;
	}
	return i;
}