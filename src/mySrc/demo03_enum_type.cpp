//
// Created by hhaow on 2020/2/17.
//

#include <iostream>

using namespace std;
/*
 * 枚举类型使用示例
 */
enum WeekDay {SUN = 7,
  MON = 1,
  TUE, WED, THU, FRI, SAT};  // 声明并定义一个枚举类型WeekDay

enum Month {January = 1,
  February = 2, March, April, May, June, July, August, September, October,
  November, December};
//声明并定义12个月份

struct Time{
  unsigned int year;
  unsigned int month;
  unsigned int day;
};

int WeekDAY (int argc, char **argv)
{
  WeekDay Day = FRI;
  for (int day = TUE; day <= SAT; ++day) {
      if ( Day == day){
        cout << "Day is  " << Day << endl;
      }
      else{cout << "day: " << day << endl;}

  }
  return 0;
}

int main(int argc, char **argv){

  bool isMonth = false;
  Time time = {};
  cout << "Input YY-MM-DD-: "<<endl;
  cin >>time.year;
  cin >>time.month;

  for (int mon = January; mon <= December; ++mon) {
    if(time.month == mon){
      isMonth = true;
      break;
    }
  }
  cout << " Time Month is :" << isMonth <<endl;

  cin >>time.day;

  return 0;

}