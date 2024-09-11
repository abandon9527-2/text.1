


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
//		printf("大端存储\n");
//	}
//	else
//		printf("小端存储\n");
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
//	//return 0;//第一次修改
//	
//	
//	
//	// 	assert(string1&&string2)
//	//do
//	//{
//	//	if (*string1 != *string2)
//	//		return *string1 - *string2;
//	//} while (string1++ && string2++);
//	//return 0;//第二次修改
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
//	return *string1 - *string2;//第三次看课件理解修改
//}
//int main()
//{
//	//模拟strcmp
//	//注意点：
//	//1，两个传过去的字符串不可以被改编应该+const
//	//2.比较每一个字母顺序直到'\0'返回三种关系
//	char* arr = "abcdef";
//	char* arr1 = "abcdef";
//	int a=my_strcmp(arr, arr1);
//}



//#include<stdio.h>
//#include<assert.h>
//char* my_strstr(const char* str1,const char* str2)
//{
//	//为避免出现指针第一次丢失情况先记录首次寻找地址
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
//		}//减少系统时间
//
//		con++;
//	}
//	return NULL;
//	
//}
//int main()
//{
//	//模拟实现strstr
//	//要点
//	//1.为了安全将传过去的指针加const
//	//2.如果找到返回找到的位置指针，如果没找到返回NULL，如果要需找的为'\0'返回str1的地址;
//	//3.两个指针必须都已'\0'结尾
//	char* arr = "abcdef";
//	char* arr1 = "abcdef";
//	printf("%s", my_strstr(arr, arr1));
//}



//#include<stdio.h>
//#include<assert.h>
//char* my_strncpy(char* dest, const char* src, size_t count)
//{
//	char* start = dest; // 记录目标字符串起始位置
//	while (count &&( *dest++ = *src++)) // 拷贝字符串
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
//	//模拟strncpy特点比strcpy多了一的参数，来确定复制的字节
//	//不好的地方：任何时候都返回str1
//	//使用细节:原空间足够大
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
	//模拟实现strncat
	my_strncat(arr, arr1, 2);
}