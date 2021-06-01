/*
 * C3-3 丑数 (100 满分)
题目描述
只包含因子2,3,5的正整数被称作丑数，比如4,10,12都是丑数，而7,23,111则不是丑数，另外1也不是丑数。请编写一个函数，输入一个整数n，能够判断该整数是否为丑数，如果是，则输出True，否则输出False。

输入描述
每行输入一个正整数 n

1 <= n<= 1000000

输出描述
对于每一行输入，输出其是否为丑数，是则输出True，否则输出False

样例输入
4
7
12
样例输出
True
False
True
 */
#include <iostream>
using namespace std;


bool isTargetNum(int);

int main(){
    int num;
    cin>>num;
    if(num > 1000000 || num < 1){
//      输入合法检测
      cout<<"cin error: num > 1000000 || num < 1" <<endl;
      return -1;
    }
    isTargetNum(num)? cout<<"True":cout<<"False";
    return 0;
}

bool isTargetNum(int num){
    if(num==1 || num==0) return false;
    while(num%2==0) num/=2; //循环累除2,至不是2的倍数
    while(num%3==0) num/=3; //循环累除3，至不是3的倍数
    while(num%5==0) num/=5; // 循环累除5， 至不是5的倍数
    return (num==1)? true : false; // 结果 == 1？ 返回

}

/*
 * 您的程序运行结果为：评测通过，得分为：100.0，以下为详细信息：

编号	运行结果	运行时间(ms)	使用空间(KB)	得分
0	评测通过	3ms	12568KB	10.0
1	评测通过	2ms	12568KB	10.0
2	评测通过	2ms	12568KB	10.0
3	评测通过	2ms	12568KB	10.0
4	评测通过	2ms	12568KB	10.0
5	评测通过	2ms	12568KB	10.0
6	评测通过	2ms	12568KB	10.0
7	评测通过	2ms	12568KB	10.0
8	评测通过	2ms	12568KB	10.0
9	评测通过	0ms	12568KB	10.0

 */