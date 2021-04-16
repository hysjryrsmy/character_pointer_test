#define _CRT_SECURE_NO_WARING
#include <stdio.h>


//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//****
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}
//1.当使用free释放掉一个指针内容后，指针变量的值将被我们改成空指针NULL

//2.32位系统下任何类型指针的长度都是4个字节

//3.野指针是指向未分配或者已经释放的内存地址

//4.指针的数据类型声明的是指针实际指向内容的数据类型
// 
//5.char* p = "hello bit";
//把字符串hello bit的第一个字符的地址存放在p变量中

//6.数组的地址放在数组指针

//7.下面的代码关于数组名的描述
//int main()
//{
//	int ar[10] = { 0 };
//	return 0;
//}
//sizeof(arr)，arr表示整个数组
// &arr，arr表示整个数组
//除了sizeof(arr)和&arr中的数组名，其他地方出现的数组名arr，都是数组首元素的地址


/*8.
int main()
{
	char str1[] = "hello bit";//创建了两个数组
	char str2[] = "hello bit";
	char* str3 = "hello bit";//常量字符串
	char* str4 = "hello bit";
	if (str1 == str2)
	{
		printf("str1 and str2 are same\n");
	}
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
	{
		printf("str3 and str4 are same\n");
	}
	else
		printf("str3 and str4 are not same\n");
	return 0;
}
//输出结果：str1 and str2 are not same
//str3 and str4 are same
*/



//9.定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参且返回int的函数
//int (* (*F)(int, int) )(int)


//10.int (*fun)(int*)  一个参数为int*，返回值为int的函数指针


//11.声明一个指向含有10个元素的数组的指针，其中每个元素是一个函数指针，
//该函数的返回值是int，参数是int*     ：int(*(*p)[10])(int*)


//12.设有以下函数void fun(int n,char*s){......},则下面对函数指针的定义和赋值：void(*pf)(int n, char*s); pf = fun;
//