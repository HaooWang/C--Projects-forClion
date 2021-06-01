/* students please write your program here */
/* students please write your program here */
/*
 *题目描述
任意给定 n 个整数，求这 n 个整数序列的和、最小值、最大值

输入描述
输入一个整数n，代表接下来输入整数个数，0 < n <= 100，接着输入n个整数，整数用int表示即可。

输出描述
输出整数序列的和、最小值、最大值。用空格隔开，占一行

样例输入
2
1 2
样例输出
3 1 2
 */
#include <iostream>
#include <vector>
#include <algorithm>   //头文件
using namespace std;

int main(int argc, char* argv[]){

    int num = 0;
    cin>>num; // 输入个数num int类型
    //输入值判合法操作
    if (num <= 0 || num > 100 ){
      return -1;
    }

    int* numSeq = new int[num]; // 动态内存分配
    int sum = 0;
    for (auto it = 0; it < num; ++it)
    {// 读入数据
        cin >> numSeq[it];
        sum += numSeq[it];
    }
    auto minPosition = min_element(numSeq, numSeq+num); // return min val position
    auto maxPosition = max_element(numSeq, numSeq+num); // return max val position

//    output results
    cout<< sum <<" "
        << *minPosition <<" "
        << *maxPosition <<"";
    delete [] numSeq;
    return 0;
}
