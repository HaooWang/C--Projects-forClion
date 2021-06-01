/*
 * C3-2 斐波那契数列 (100 满分)
题目描述
斐波那契数列f(n)满足以下定义：

f(0) = 1, f(1) = 1, f(n) = f(n-1) + f(n-2) (n >= 2)。

请用递归的方法编写函数，对于给定的n，求出斐波那契数列的第n项f(n)


输入描述
每行输入一个整数 n

0 <= n<= 30

输出描述
对于每一行输入，输出斐波那契数列第n项的值f(n)
 */
#include <iostream>

using namespace std;
int fabonacci(int);

int main(){
    int n;
    cin>>n;
    cout<<fabonacci(n)<<endl;
    return 0;
}

int fabonacci(int n){
    if (n==0 || n==1){
        return 1;
        //递归终止条件
    }else{
      // 递归条件
        return fabonacci(n-1) + fabonacci(n-2);
    }
}

/*
 * 您的程序运行结果为：评测通过，得分为：100.0，以下为详细信息：

编号	运行结果	运行时间(ms)	使用空间(KB)	得分
0	评测通过	2ms	12568KB	10.0
1	评测通过	0ms	12568KB	10.0
2	评测通过	2ms	12568KB	10.0
3	评测通过	2ms	12568KB	10.0
4	评测通过	3ms	12568KB	10.0
5	评测通过	3ms	12568KB	10.0
6	评测通过	3ms	12568KB	10.0
7	评测通过	3ms	12568KB	10.0
8	评测通过	5ms	12568KB	10.0
9	评测通过	3ms	12568KB	10.0

 */