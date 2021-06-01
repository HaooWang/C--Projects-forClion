//
/*
 * C3-1 直角三角形 (100 满分)
题目描述

输入一个三角形的3边长度，判断该三角形是否为直角三角形，若是则输出True，若不是则输出False。

 推荐做法：定义一个函数，接受三个int参数，返回bool，再用主函数调用之。


输入描述
每行输入三个由空格隔开的整数 a, b, c ，表示三角形的 3 条边长

1 <= a,b ,c <= 10000

输出描述
对于每一行输入，输出True或者False表明是否为直角三角形

样例输入
3 4 5
6 7 8
1 1 1

样例输出
True
False
False
 */
//
#include <iostream>
#include <cmath>

using namespace std;

bool evaluate(int[]);


int main(){
    int nums[3];
    int value;
    int i=0;
    while(cin>>value){
        nums[i] = value;
        i++;
        if(i==3){
          evaluate(nums)? cout << "True":cout << "False"<<endl;
          i = 0;
        }
    }
    return 0;

}

bool evaluate(int nums[]){
    return (pow(nums[0],2) + pow(nums[1],2))  == pow(nums[2],2)
    ||(pow(nums[1],2) + pow(nums[2],2))  == pow(nums[0],2)
    || (pow(nums[0],2) + pow(nums[2],2))  == pow(nums[1],2);
}

/*
 *
编号	运行结果	运行时间(ms)	使用空间(KB)	得分
0	评测通过	2ms	12568KB	10.0
1	评测通过	2ms	12568KB	10.0
2	评测通过	2ms	12568KB	10.0
3	评测通过	0ms	12568KB	10.0
4	评测通过	2ms	12568KB	10.0
5	评测通过	2ms	12568KB	10.0
6	评测通过	2ms	12568KB	10.0
7	评测通过	0ms	12568KB	10.0
8	评测通过	3ms	12568KB	10.0
9	评测通过	2ms	12568KB	10.0

 */