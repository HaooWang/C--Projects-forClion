/*
 * C4-2 反转整数 (100 满分)
题目描述
对于输入的一个正整数，输出其反转形式

要求使用c++ class编写程序。可以创建如下class
 */

#include <iostream>
#include <string>
using namespace std;

class Integer{
private:
    int _num;
//getLength()函数获取_num长度
    int getLength(){
        string s = to_string(_num);
        return int(s.length());
    }
public:
//Integer类构造函数
    Integer(int num):_num(num){}
//反转_num
    int inversed(){
        int i = _num;
        int m = 0;//m is the auxiliary number
        while(i>0){
          //将数字int从个位依次向高位取出，并存在新int数中
            m = m*10 + i%10;
            i  = i/10;
        }
        return m;
    }
};

int main() {
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
    return 0;
}

/*
 * 您的程序运行结果为：评测通过，得分为：100.0，以下为详细信息：

编号	运行结果	运行时间(ms)	使用空间(KB)	得分
0	评测通过	0ms	12568KB	10.0
1	评测通过	2ms	12568KB	10.0
2	评测通过	2ms	12568KB	10.0
3	评测通过	2ms	12568KB	10.0
4	评测通过	3ms	12568KB	10.0
5	评测通过	3ms	12568KB	10.0
6	评测通过	3ms	12568KB	10.0
7	评测通过	2ms	12568KB	10.0
8	评测通过	3ms	12568KB	10.0
9	评测通过	3ms	12568KB	10.0

 */