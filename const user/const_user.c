//const两种使用方法
//1.const修饰变量
////2.const修饰指针
//#include<stdio.h>
//int main()
//{
//	//1.const修饰变量
//	//在C语言中作为常变量，无法对数组使用
//	//在c++中作为常量，可以作为数组长度出现
//	/*int a = 0;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);*///可以正常被修改
//	//const int a = 0;
//	//a = 10;//不能被修改
//
//
//	//const修饰指针
//	//int a = 0;
//	//int b = 0;
//	//const int* p = &a;//等价于 int const*p 常量指针
//	//*p = 20;//err 不能被修改
//	//p = &b;//可以被修改
//	//int* const m = &a;
//	//m = &b;//err
//	//*m = 20;//可以被修改
//}
// 
// 
// 
// 
// 
//模拟strlen函数
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* s)//限制*s不能被修改
//{
//	int count = 0;
//	assert(s != NULL);//避免传出来空指针导致系统崩溃
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int m=my_strlen(arr);
//	printf("%d", m);
//	printf("%zd", strlen(arr));//验证模拟是否正确
//	return 0;
//}
