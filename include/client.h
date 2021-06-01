//
// Created by hhaow on 2020/3/8.
//

#ifndef CPPPROJECT_FORCLION_CLIENT_H
#define CPPPROJECT_FORCLION_CLIENT_H

#include <string>

class Client {
private:
//  成员变量 ServerName,和静态成员变量client-num，具有静态的声明周期，需要在类外进行初始化
// 且处理该数据成员的共有成员函数应该也是静态成员函数static
    std::string server_name;
    static int client_num;

public:
//  静态成员函数用于处理静态数据成员
    explicit Client(std::string name); //构造函数
    Client(const Client &clt);
    ~Client(); //析构函数
    bool changeServerName(const std::string& name);
    static int getClientNum();
    std::string getServerName(Client clt);
};

#endif // CPPPROJECT_FORCLION_CLIENT_H
