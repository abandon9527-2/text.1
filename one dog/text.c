#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
// 		assert(b < 13 && b >= 0);
//        if ((a % 4 == 0 && a != 100 || a % 400 == 0) && b == 2)
//        {
//            printf("%d\n", 29);
//        }
//        else
//        {
//            switch (b)
//            {
//            case 1:
//            case 3:
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//            case 12:
//                printf("31\n");
//                break;
//            case 2:
//                printf("28\n");
//                break;
//            default:
//                printf("30\n");
//                break;
//            }
//        }
//    }
//    return 0;
//}
//
//
//#include<stdio.h>
//#include<assert.h>
//int main()
//{
//	int a, b;
//	int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (~scanf("%d%d", &a, &b))
//	{
//		assert(b < 13 && b >= 0);
//		int day = arr[b - 1];
//		if (a % 4 == 0 && a != 100 || a == 400)
//		{
//			if(b==2)
//			day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int scmp_int(void*e1,void*e2)
{
	return *(int*)e1 > *(int*)e2;
}
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), scmp_int);
	for (int i = 0; i < sz; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			i++;
			
		}
		else
		{
			printf("%d", arr[i]);
		}
	}
}