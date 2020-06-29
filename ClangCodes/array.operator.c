#include <stdio.h>

/* define an array
 * assign an array
 * pick part of array
 * 2-d array define
 * 2-d array assign */

// this file can not be deal with gcc

int main()
{
	//define
	int array1[3];		// define an array can include 3 int elements
	float array2[3];	// define an array can include 3 float elements
	char array3[3];		// define an array can include 3 char elements
	
	// assign
	int array1[3] = {1, 2, 3};	// assign array1 with 3 ele
	float array2[3] = {1.2, 3.4, 5.6}; // assing array2 with 3 ele
	char array3[3] = {"joh"}; // assign array3 with 3 ele
	
	// assign with 'for loop'
	int a[3], i;
	for (i=1; i<4; i++)
	{
		a[i] =i;
	}

	// pick with 'for loop'
	int i;
	for (i=1; i<4; i++)
	{
		printf("%d\n", a[i]);
	}

	// assign part of the whole array
	int a[5] = {1,2,3};

	// without a certain size, auto assign the array
	int a[] = {1,2,3,4,5,6,7};

	//SUMMARY
	/*
	 * int array_name[size]		// 声明数组类型、名称、大小； 带类型声明的是定义；
	 * int array_name[size] = {values, list};	// 声明并赋值； 带类型声明，带值；
	 * array_name[index]		// 访问数组元素的值； 不带类型声明；
	 * 数值型数组可在定义时，初始化，并赋值； 之后也可灵活赋值；
	 * 字符型数组可在定义时，初始化，并赋值（长字串）； 之后不能赋值字串，只能单个字符赋值给数组元素；
	 */
	
	// string array
	char charArr[] = {'i', 'l', 'o', 'v', 'e', 'c'};	// char array
	char strArr[] = {"ilovec"};
	char strArr[] = "ilovec";		// string array, {}可以不写

	// 'c','h','a','r', 单引号用于字符
	// "string", 双引号用于字串
	
}
