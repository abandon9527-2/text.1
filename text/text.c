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
	int a=text();//≈–∂œ «¥Û∂À¥Ê¥¢ªπ «–°∂À¥Ê¥¢
	enum Color c = wite;
	printf("%d\n", c);
	printf("%d %d %d %d", Red, Yellow, blue, wite);
}