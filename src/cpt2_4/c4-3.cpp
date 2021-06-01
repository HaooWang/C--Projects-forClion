/*
 * C4-3 一元二次方程求解 (100 满分)
题目描述
对于一元二次方程ax^2 + bx + c = 0,解可以分为很多情况。

若该方程有两个不相等实根，首先输出1，换行，然后从小到大输出两个实根，换行；

若该方程有两个相等实根，首先输出2，换行，然后输出这个这个实根，换行；

若该方程有一对共轭复根，输出3，换行；

若该方程有无解，输出4，换行；

若该方程有无穷个解，输出5，换行；

若该方程只有一个根，首先输出6，换行，然后输出这个跟，换行；

要求使用c++ class编写程序。可以创建如下class
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c){
        _a = a;
        _b = b;
        _c = c;
    }
    void solve(){
        float delta = _b*_b - 4*_a*_c;
        if(delta>0){
            cout<<"1"<<endl;
            float x1 = (-_b+sqrt(delta))/2*_a;
            float x2 = (-_b-sqrt(delta))/2*_a;
            if (x1 > x2) {
                cout << fixed << setprecision(2) << x2 << " " <<setprecision(2)<< x1 << endl;
            } else {
                cout << fixed << setprecision(2) << x1 << " " <<setprecision(2)<< x2 << endl;
            }
        }else if(delta==0){
            cout<<"2"<<endl;
            cout<<setprecision(2)<<(-_b)/2*_a<<endl;
        }else{
            cout<<"4"<<endl;
        }
    }
};
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
    return 0;
}