#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//int main()
//{
//	//�������C�������һ���½ڣ��ļ�������
//	//stdin��׼������
//	//stdout��׼�����
//	//stderr��׼���������������Ͷ���FILE*����Ϊ�ļ�ָ��
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
//printf scanf(��Ա�׼���������׼������ ��ʽ����������������)
//fprintf fscanf(������������������������ ��ʽ������������)
//sscanf sprintf(sscanf�Ǵ��ַ����ж�ȡ��ʽ��������)
//��sprintf���Ѹ�ʽ�����ݴ��浽�ַ�����
