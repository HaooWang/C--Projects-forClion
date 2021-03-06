

/*C2-3实心菱形  (100 满分)

题目描述
        打印 n 阶实心菱形

输入描述
        输入一个整数n，n<=10

输出描述
        输出 n 阶实心菱形 ， 占 2*n-1 行

*/

#include <iostream>
using namespace std;
int main()
{
  int n,i,z;
  cin >> n;
  for (i=1;i<=n;i++)//先画前n层，一共循环n次，当前层数为i
  {
    for (z=1;z<=n-i;z++)//每一层的空格数
    {
      cout << " ";
    }
    for(z=1;z<=2*i-1;z++)//每一层的*数
    {
      cout << "*";
    }
    cout << endl;
  }
  for(i=n-1;i>=1;i--)//这是后面的n-1层，一共循环n-1次，并且倒序循环，当前层数为i
  {
    for(z=1;z<=n-i;z++)//每一层的空格数
    {
      cout << " ";
    }
    for (z=1;z<=2*i-1;z++)//每一层的*数
    {
      cout << "*";
    }
    cout << endl;
  }
}
/*
 *
编号	运行结果	运行时间(ms)	使用空间(KB)	得分
0	评测通过	4ms	12568KB	10.0
1	评测通过	3ms	12568KB	10.0
2	评测通过	2ms	12568KB	10.0
3	评测通过	3ms	12568KB	10.0
4	评测通过	2ms	12568KB	10.0
5	评测通过	2ms	12568KB	10.0
6	评测通过	2ms	12568KB	10.0
7	评测通过	3ms	12568KB	10.0
8	评测通过	3ms	12568KB	10.0
9	评测通过	0ms	12568KB	10.0

 */