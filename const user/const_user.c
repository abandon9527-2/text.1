//const����ʹ�÷���
//1.const���α���
////2.const����ָ��
//#include<stdio.h>
//int main()
//{
//	//1.const���α���
//	//��C��������Ϊ���������޷�������ʹ��
//	//��c++����Ϊ������������Ϊ���鳤�ȳ���
//	/*int a = 0;
//	printf("%d\n", a);
//	a = 20;
//	printf("%d\n", a);*///�����������޸�
//	//const int a = 0;
//	//a = 10;//���ܱ��޸�
//
//
//	//const����ָ��
//	//int a = 0;
//	//int b = 0;
//	//const int* p = &a;//�ȼ��� int const*p ����ָ��
//	//*p = 20;//err ���ܱ��޸�
//	//p = &b;//���Ա��޸�
//	//int* const m = &a;
//	//m = &b;//err
//	//*m = 20;//���Ա��޸�
//}
// 
// 
// 
// 
// 
//ģ��strlen����
//#include<stdio.h>
//#include<assert.h>
//size_t my_strlen(const char* s)//����*s���ܱ��޸�
//{
//	int count = 0;
//	assert(s != NULL);//���⴫������ָ�뵼��ϵͳ����
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
//	printf("%zd", strlen(arr));//��֤ģ���Ƿ���ȷ
//	return 0;
//}
