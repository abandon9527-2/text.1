


//#include<stdio.h>
//int text()
//{
//	int a = 1;
//	return (char*)&a;
//}
//int main()
//{
//	int a=text();
//	if (a==0)
//	{
//		printf("��˴洢\n");
//	}
//	else
//		printf("С�˴洢\n");
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//int my_strcmp(const char* string1,const char*string2)
//{
//	//	assert(string1&&string2)
//	//if (*string1 != *string2)
//	//	return *string1 - *string2;
//	//while (string1++ && string2++)
//	//{
//	//	if(*string1!=*string2)
//	//	return *string1 - *string2;
//	//}
//	//return 0;//��һ���޸�
//	
//	
//	
//	// 	assert(string1&&string2)
//	//do
//	//{
//	//	if (*string1 != *string2)
//	//		return *string1 - *string2;
//	//} while (string1++ && string2++);
//	//return 0;//�ڶ����޸�
//
//
//
//
//	int ret = 0;
//	assert(string1&&string2);
//	while (*string1 == *string2)
//	{
//		if (*string1 == '\0')
//			return 0;
//		string1++;
//		string2++;
//	}
//	return *string1 - *string2;//�����ο��μ�����޸�
//}
//int main()
//{
//	//ģ��strcmp
//	//ע��㣺
//	//1����������ȥ���ַ��������Ա��ı�Ӧ��+const
//	//2.�Ƚ�ÿһ����ĸ˳��ֱ��'\0'�������ֹ�ϵ
//	char* arr = "abcdef";
//	char* arr1 = "abcdef";
//	int a=my_strcmp(arr, arr1);
//}



//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1,const char* str2)
//{
//	//Ϊ�������ָ���һ�ζ�ʧ����ȼ�¼�״�Ѱ�ҵ�ַ
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* con = str1;
//	if (!*str2)
//		return str1;
//	while(con)
//	{
//		s1 = con;
//		s2 = str2;
//		while (*s1&&*s2&& * s2 == *s1)
//		{
//			s2++;
//			s1++;
//		}
//		if (!*s2)
//		{
//			return con;
//		}
//		if (!*s1)
//		{
//			return NULL;
//		}//����ϵͳʱ��
//
//		con++;
//	}
//	return NULL;
//	
//}
//int main()
//{
//	//ģ��ʵ��strstr
//	//Ҫ��
//	//1.Ϊ�˰�ȫ������ȥ��ָ���const
//	//2.����ҵ������ҵ���λ��ָ�룬���û�ҵ�����NULL�����Ҫ���ҵ�Ϊ'\0'����str1�ĵ�ַ;
//	//3.����ָ����붼��'\0'��β
//	char* arr = "abcdef";
//	char* arr1 = "abcdef";
//	printf("%s", my_strstr(arr, arr1));
//}



//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	char* start = dest; // ��¼Ŀ���ַ�����ʼλ��
//	while (count &&( *dest++ = *src++)) // �����ַ���
//	{
//		count--;
//	}
//	while (count--)
//	{
//		*dest++ = '\0';
//	}
//	return start;
//}
//int main()
//{
//	//ģ��strncpy�ص��strcpy����һ�Ĳ�������ȷ�����Ƶ��ֽ�
//	//���õĵط����κ�ʱ�򶼷���str1
//	//ʹ��ϸ��:ԭ�ռ��㹻��
//	char arr[] = "abcdefhyiuooouo";
//	char arr1[] = "bbcder";
//	my_strncpy(arr, arr1, 10);
//	printf("%s", arr);
//}



#include<stdio.h>
#include<assert.h>
char* my_strncat(char* str1,const char* str2, size_t count)
{
	assert(str1 && str2);
	char* ps = str2;
	while (++*str1)
	{
		;
	}
	while ((*str1++ = *str2++)&&count )
	{
		assert(str1);
		count--;
	}
	if(count>0)
	while (--count)
	{
		assert(str1);
		*str1++ = '\0';
	}

}
int main()
{
	char arr[20] = "hello";
	char arr1[] = "bit";
	//ģ��ʵ��strncat
	my_strncat(arr, arr1, 2);
}