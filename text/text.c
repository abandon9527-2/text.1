#include<stdio.h>
union stu
{
	char a;
	int b;

};
enum Color
{
	Red,
	Yellow,
	blue,
	wite,
};
int text()
{
	//int a = 1;
	//return *(char*) & a;
	union stu V;
	V.b = 1;
	return V.a;
}
int main()
{
	int a=text();//�ж��Ǵ�˴洢����С�˴洢
	enum Color c = wite;
	printf("%d\n", c);
	printf("%d %d %d %d", Red, Yellow, blue, wite);
}