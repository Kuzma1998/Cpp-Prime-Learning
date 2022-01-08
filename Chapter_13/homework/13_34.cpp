<<<<<<< HEAD
/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-05 15:08:41
 */

#include"13_34.h"
#include<iostream>
using namespace std;

void Message::save(Folder& f){
    folders.insert(&f);//把f加入到含有Message的Folders的列表
    f.addMsg(this);//Message加入到f的集合里面
}
void Message::remove(Folder& f){
    folders.erase(&f);//把f从含有Message的Folders的列表删除
    f.remMsg(this);//将本Message从f删除
}

void Message::add_to_Folders(const Message &m){
    for(auto f:m.folders){
        f->addMsg(this);
    }
}

Message::Message(const Message &m):contents(m.contents),folders(m.folders){
    add_to_Folders(m);// 拷贝构造要将拷贝的本消息加入m的folders中
}

void Message::remove_from_Folders(){ 
    for(auto f:folders){
        f->remMsg(this);
    }
    folders.clear();
}

Message::~Message(){
    remove_from_Folders();//析构要把此Message从所有的folders里面删除
}

Message& Message::operator=(const Message& rhs){
    remove_from_Folders();//赋值，先把原来的删除
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

void swap(Message& lhs, Message& rhs){
    using std::swap;
    for(auto f:lhs.folders){
        f->remMsg(&lhs);  
    }
    for(auto f:rhs.folders){
        f->remMsg(&rhs);
    }
    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);
    for(auto f:lhs.folders)
        f->addMsg(&lhs);
    for(auto f:rhs.folders)
        f->addMsg(&rhs);
}

//********************************************************************************//

void Folder::add_to_Message(const Folder& f)
{
	for (auto m : f.msgs)
		m->addFldr(this); // 每个msg到要加入该Folders
}


Folder::Folder(const Folder& f) : msgs(f.msgs){
    add_to_Message(f);
}

void Folder::remove_to_Message()
{
	for (auto m : msgs)
		m->remFlddr(this);
	msgs.clear();
}

Folder::~Folder()
{
	remove_to_Message();
}


Folder& Folder::operator=(const Folder& rhs)
{
	remove_to_Message(); 
	msgs = rhs.msgs;
	add_to_Message(rhs);
	return *this;
}

void Folder::print_debug()
{
	for (auto m : msgs)
		std::cout << m->contents << " ";
	std::cout << std::endl;
}


void swap(Folder& lhs, Folder& rhs)
{
	using std::swap;
	for (auto m : lhs.msgs)
		m->remFlddr(&lhs);
	for (auto m : rhs.msgs)
		m->remFlddr(&rhs);

	swap(lhs.msgs, rhs.msgs);

	for (auto m : lhs.msgs)
		m->addFldr(&lhs);
	for (auto m : rhs.msgs)
		m->addFldr(&rhs);
=======
/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2022-01-05 15:08:41
 */

#include"13_34.h"
#include<iostream>
using namespace std;

void Message::save(Folder& f){
    folders.insert(&f);//把f加入到含有Message的Folders的列表
    f.addMsg(this);//Message加入到f的集合里面
}
void Message::remove(Folder& f){
    folders.erase(&f);//把f从含有Message的Folders的列表删除
    f.remMsg(this);//将本Message从f删除
}

void Message::add_to_Folders(const Message &m){
    for(auto f:m.folders){
        f->addMsg(this);
    }
}

Message::Message(const Message &m):contents(m.contents),folders(m.folders){
    add_to_Folders(m);// 拷贝构造要将拷贝的本消息加入m的folders中
}

void Message::remove_from_Folders(){ 
    for(auto f:folders){
        f->remMsg(this);
    }
    folders.clear();
}

Message::~Message(){
    remove_from_Folders();//析构要把此Message从所有的folders里面删除
}

Message& Message::operator=(const Message& rhs){
    remove_from_Folders();//赋值，先把原来的删除
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folders(rhs);
    return *this;
}

void swap(Message& lhs, Message& rhs){
    using std::swap;
    for(auto f:lhs.folders){
        f->remMsg(&lhs);  
    }
    for(auto f:rhs.folders){
        f->remMsg(&rhs);
    }
    swap(lhs.folders, rhs.folders);
    swap(lhs.contents, rhs.contents);
    for(auto f:lhs.folders)
        f->addMsg(&lhs);
    for(auto f:rhs.folders)
        f->addMsg(&rhs);
}

//********************************************************************************//

void Folder::add_to_Message(const Folder& f)
{
	for (auto m : f.msgs)
		m->addFldr(this); // 每个msg到要加入该Folders
}


Folder::Folder(const Folder& f) : msgs(f.msgs){
    add_to_Message(f);
}

void Folder::remove_to_Message()
{
	for (auto m : msgs)
		m->remFlddr(this);
	msgs.clear();
}

Folder::~Folder()
{
	remove_to_Message();
}


Folder& Folder::operator=(const Folder& rhs)
{
	remove_to_Message(); 
	msgs = rhs.msgs;
	add_to_Message(rhs);
	return *this;
}

void Folder::print_debug()
{
	for (auto m : msgs)
		std::cout << m->contents << " ";
	std::cout << std::endl;
}


void swap(Folder& lhs, Folder& rhs)
{
	using std::swap;
	for (auto m : lhs.msgs)
		m->remFlddr(&lhs);
	for (auto m : rhs.msgs)
		m->remFlddr(&rhs);

	swap(lhs.msgs, rhs.msgs);

	for (auto m : lhs.msgs)
		m->addFldr(&lhs);
	for (auto m : rhs.msgs)
		m->addFldr(&rhs);
>>>>>>> 5e334f4a8f140df473eded85b601cf10e14e04fb
}