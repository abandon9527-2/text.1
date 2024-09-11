#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//int main()
//{
//	//八月完成C语言最后一个章节（文件操作）
//	//stdin标准输入流
//	//stdout标准输出流
//	//stderr标准错误流（三个类型都是FILE*）称为文件指针
//	//FILE* pfile;
//	//pfile = fopen("myfile.txt", "r");
//	//if (pfile != NULL)
//	//{
//	//	printf("%c", fgetc(pfile));
//	//	printf("%c", fgetc(pfile));
//	//	printf("%c", fgetc(pfile));
//	//	printf("%c", fgetc(pfile));
//	//	fclose(pfile);
//	//	pfile = NULL;
//
//	//}
//	//else
//	//{
//	//	printf("%s", strerror(errno));
//	//}
//	//FILE* ps;
//	//char arr[20];
//	//ps = fopen("text.txt", "r");
//	//if (ps != NULL)
//	//{
//	//	fgets(arr, 20, ps);
//	//	printf("%s", arr);
//
//	//	fgets(arr, 20, ps);
//	//	printf("%s", arr);
//	//	//printf("1");
//	//	fclose(ps);
//	//	ps = NULL;
//	//}
//	//fputc(fgetc(stdin), stdout);
//	//char arr[20] = { 0 };
//	//fgets(arr,20, stdin);
//	//fputs(arr, stdout);
//}
//struct stu
//{
//	int a;
//	float b;
//	char arr[5];
//};
//int main()
//{
//	struct stu s = { 1,1.0,"wang"};
//	FILE* ps = fopen("yuan.txt", "w");
//	if (ps != NULL)
//	{
//		fprintf(ps,"%d %f %s", s.a, s.b, s.arr);
//		fclose(ps);
//		ps = NULL;
//	}
//	return 0;
//}
//struct stu
//{
//	int a;
//	float b;
//	char arr[5];
//};
//int main()
//{
//	struct stu s = {0};
//	FILE* ps = fopen("yuan.txt", "r");
//	if (ps != NULL)
//	{
//		fscanf(ps, "%d %f %s", &s.a, &s.b, s.arr);
//		printf("%d %f %s", s.a, s.b, s.arr);
//		fclose(ps);
//		ps = NULL;
//	}
//	return 0;
//}
//printf scanf(针对标准输出流，标准输入流 格式化的输出，输入语句)
//fprintf fscanf(针对所有输出流，所有输入流 格式化输入输出语句)
//sscanf sprintf(sscanf是从字符串中读取格式化的数据)
//（sprintf）把格式化数据储存到字符串中
