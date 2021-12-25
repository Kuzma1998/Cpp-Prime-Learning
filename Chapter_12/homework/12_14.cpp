/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-25 19:12:27
 */

#include <iostream>
#include <memory>
#include <string>
using namespace std;

struct connection{
    string ip; //
    int port; //
    connection(string i, int p): ip(i),port(p){}
};

struct destination{
    string ip; //
    int port; //
    destination(string i, int p): ip(i),port(p){}
};

connection connect(destination* pDest){
    shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
    cout<<"Creating connection: "<<pConn.use_count()<<endl;
    return *pConn;
}

void disconnect(connection pConn){
    cout<<"Connection close: "<<pConn.ip<<pConn.port<<endl;
}

void end_connection(connection* pConn){
    disconnect(*pConn);
}

void f(destination &d)
{
	connection conn = connect(&d);
	std::shared_ptr<connection> p(&conn, end_connection);// f函数结束时，p指向的内存会销毁
	std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}


int main()
{
	destination dest("220.181.111.111", 10086);
	f(dest);

	return 0;
}