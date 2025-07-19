#include<iostream>
#include <string>
#include<vector>
#include <stack>
using namespace std;

////输出一个整数，表示为使结果字符串有效而必须添加的最少括号数
//int find_minimum(string s);

//
//int main()
//{
//	char s[2000];
//	cin >> s;
//	printf("%d",find_minimum(s));
//	return 0;
//
//
//
//}
//
//int find_minimum(string s)
//{
//	int add = 0;  // 添加次数
//	int leftCount = 0;  // (数量
//	//travel
//	for (auto ch : s)
//	{
//		if (ch == '(')
//		{
//			leftCount++;
//		}
//		else
//		{
//			if (leftCount > 0)
//			{
//				leftCount--;
//			}
//			else
//			{
//				add++;
//			}
//		}
//		
//	}
//	add += leftCount;
//	return add;
//
//	
//}



