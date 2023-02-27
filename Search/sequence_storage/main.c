#include "search.h"

main()
{
    int i,result;
	int arr[]={0,1,16,24,35,47,59,62,73,88,99};
	
    int len_arr = sizeof(arr) / sizeof(arr[0]);

    /*
    result=Sentry_Sequential_Search(arr,len_arr,23);
    if (result == len_arr)
    {
        printf("Sentry_Sequential_Search failed\n");
    }
	else
    {
	    printf("Sentry_Sequential_Search:%d \n",result);
    }
    */

	result=Binary_Search(arr,10,62);
	printf("Binary_Search:%d \n",result);

    
}