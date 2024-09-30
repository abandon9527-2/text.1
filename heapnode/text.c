#include"heap.h"

//void text01()
//{
//	HP hp;
//	HPInit(&hp);
//	int arr[10] = { 15,2,34,4,55,6,7,8,90,10 };
//	for (int i = 0; i < 10; i++)
//	{
//		HPPush(&hp, arr[i]);
//	}
//	while (HPempty(&hp))
//	{
//		printf("%d ",HPTop(&hp ));
//		HPPop(&hp);
//	}
//	HPDesTory(&hp);
//}


void HeapSort(int *arr, int n)
{
	//向上建堆增长
	//int i = 0;
	//for (; i < n; i++)
	//{
	//	AdjustUp(arr, i);
	//}
	//i = n - 1;
	//while(i)
	//{
	//	swap(&arr[0], &arr[i]);
	//	AdJustDown(arr, 0, i);
	//	i--;
	//}

	//向下建堆成长
	for (int i = (n - 1-1) / 2; i >= 0; i--)
	{
		AdJustDown(arr, i, n);
	}
	int i = n - 1;
    while(i)
    {
	   swap(&arr[0], &arr[i]);
	   AdJustDown(arr, 0, i);
	   i--;
      }
}

void CreateNDate()
{
	int n = 10000;
	srand(time(0));
	const char* file = "text.txt";
	FILE* fin = fopen(file, "w");
	//if (fin == NULL)
	//{
	//	perror("fopen fail");
	//	return;
	//}
	for (int i = 0; i < n; i++)
	{
		int x = (rand() + i) % 1000000;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

void TOPK()
{
	int k = 0;
	printf("请输入k");
	scanf("%d", &k);
	 char* file = "text.txt";
	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		exit(1);
	}
	int* minHeap = (int*)malloc(k * sizeof(int));
	if (minHeap == NULL)
	{
		exit(1);
	}
	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &minHeap[i]);
	}
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdJustDown(minHeap, i, k);
	}
	int x = 0;
	while (fscanf(fout, "%d", &x) != EOF)
	{
		if (x > minHeap[0])
		{
			minHeap[0] = x;
			AdJustDown(minHeap, 0, k);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d", minHeap[i]);
	}
	fclose(fout);
}
int main()
{
	//text01();
	//int arr[10] = { 15,2,34,4,55,6,7,8,90,10 };
	//HeapSort(arr, 10);
	//CreateNDate();
	TOPK();
	return 0;
}