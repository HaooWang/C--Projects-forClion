/*
 * C2-2 进制转换 (100 满分)
题目描述
已知一个只包含 0 和 1 的二进制数，长度不大于 10 ，将其转换为十进制并输出。

输入描述
输入一个二进制整数n，其长度大于0且不大于10

输出描述
输出转换后的十进制数， 占一行

样例输入
110

样例输出
6

 */


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    char nums[11] = "0000000000";
    string s;
    int res =0;
    cin>>s;
    int len = s.length();
    // string判空
    if( len > 10 || len <=0 ){
      return -1;
    }
//    循环转换
    for(int i = len-1, j = 9;i>=0 ;i--,j--){
        nums[j] = s[i];
    }
//    循环计算每一位的10进制数值
    for(int i = 0; i<10;i++){
        int c  = static_cast<int>(nums[i]) - 48;
        res = res + c* pow(2,9-i);
    }
    cout<<res;
//    返回结果
    return 0;
}

/*
 *
编号	运行结果	运行时间(ms)	使用空间(KB)	得分
0	评测通过	2ms	12668KB	10.0
1	评测通过	2ms	12668KB	10.0
2	评测通过	2ms	12668KB	10.0
3	评测通过	0ms	12668KB	10.0
4	评测通过	2ms	12668KB	10.0
5	评测通过	2ms	12668KB	10.0
6	评测通过	2ms	12668KB	10.0
7	评测通过	2ms	12668KB	10.0
8	评测通过	2ms	12668KB	10.0
9	评测通过	2ms	12668KB	10.0

 */