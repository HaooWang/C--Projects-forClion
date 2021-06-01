//
// Created by hhaow on 2020/3/8.
//

#include <iostream>
#include "client.h"
#include <string>
#include <utility>
using namespace std;

int Client::client_num =0;


int main(int argc, char ** argv){

  string name_wang = {"WANG HAO "};
  string name_zhang = {"Zhang Heng "};
  string name_con = name_wang + name_zhang;

  Client clt_W(name_wang);
  cout << clt_W.getClientNum() <<endl;
  Client clt_Z(name_zhang);
  cout << clt_Z.getClientNum() <<endl;
  Client clt_Con(name_con);
  cout << clt_Con.getClientNum() <<endl;
  cout << clt_Con.getServerName(clt_Con)<<endl;  //类对象作为函数参数时，会调用复制构造函数
  Client copyClt(clt_Con); //调用复制构造函数，初始化一个新的对象
  cout << copyClt.getClientNum() <<endl;
  return 0;
}