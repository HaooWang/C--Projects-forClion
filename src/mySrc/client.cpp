//
// Created by hhaow on 2020/3/8.
//
#include "client.h"
#include <string>
//构造函数
Client::Client(std::string name):
    server_name(std::move(name)){
  client_num ++;
}
//复制构造函数
Client::Client(const Client &clt) {
  server_name = clt.server_name;
  client_num ++;
}
//析构函数
Client::~Client() {}

/*
 * 成员函数
 * bool Client::changeServerName(const string & serverName)
 * nt Client::getClientNum()
 */
bool Client::changeServerName(const std::string & serverName){
  bool flag = false;
  Client::server_name = serverName;
  Client::client_num ++;
  return Client::server_name == serverName;
}
int Client::getClientNum() {
  return Client::client_num;  //返回客户端数量
}
std::string Client::getServerName(Client clt) {
  std::string name_tmp = clt.server_name;
  return name_tmp;
}
