#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <iostream>
using namespace std;
int main(){
    //创建套接字
    //AF 是“Address Family”的简写
    //AF_INET6 表示 IPv6 地址
    //PF是“Protocol Family”的简写，它和AF是一样的。例如，PF_INET 等价于 AF_INET，
    int serv_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    //将套接字和IP、端口绑定
    struct sockaddr_in serv_addr;
    memset(&serv_addr, 0, sizeof(serv_addr));  //每个字节都用0填充
    serv_addr.sin_family = AF_INET;  //使用IPv4地址
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");  //具体的IP地址
    //端口号需要用 htons() 函数转换
    serv_addr.sin_port = htons(1234);  //端口
    //使用 sockaddr_in 结构体，然后再强制转换为 sockaddr 类型
    //
    //
    //
    //
    bind(serv_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

    //进入监听状态，等待用户发起请求,
    //20:请求队列的最大长度,设置为 SOMAXCONN，就由系统来决定请求队列长度，这个值一般比较大
    listen(serv_sock, 20);

    //接收客户端请求
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size = sizeof(clnt_addr);
    cout<< "accept..."<<endl;
  

  
        /* code */
        int clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &clnt_addr_size); //程序运行到 accept() 函数就会被阻塞，等待客户端发起请求
        cout<< "send data to client"<<endl;
        //向客户端发送数据
        //向套接字中写入数据
        char str[] = "Hello World!";
        write(clnt_sock, str, sizeof(str));
        //关闭套接字
         close(clnt_sock);

    
    
   
    
    close(serv_sock);

    return 0;
}