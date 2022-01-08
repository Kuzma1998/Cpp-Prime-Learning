<<<<<<< HEAD
/*
 * @Description:
 * @code:
 * @Author: Li Jiaxin
 * @Date: 2022-01-05 15:09:28
 */

// 编写Message和Folder类
#include <string>
#include <iostream>
#include <set>
using namespace std;

class Folder;
class Message{
    friend void swap(Message&,Message&);
    friend void swap(Folder&,Folder&);
    friend class Folder;
public:
    explicit Message(const string& s = ""): contents(s) {}
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    // 从指定集合添加删除Message
    void save(Folder&);
    void remove(Folder&);

private:
    string contents;
    set<Folder*> folders; //Message 出现在的Folder集合
    void add_to_Folders(const Message&);
    void remove_from_Folders();
    void addFldr(Folder* f) { folders.insert(f); }
	void remFlddr(Folder* f) { folders.erase(f); }
    // void add_
};

void swap(Message&,Message&);

class Folder
{
	friend void swap(Message&, Message&);
	friend void swap(Folder&, Folder&);
	friend class Message;
public:
	Folder() = default;
	Folder(const Folder&);
	Folder& operator=(const Folder&);
	~Folder();
	void print_debug();

private:
	std::set<Message*> msgs;

	void add_to_Message(const Folder&); // 拷贝构造用
	void remove_to_Message();        // 析构用到

	void addMsg(Message* m) { msgs.insert(m); } // 加入一条Message
	void remMsg(Message *m) { msgs.erase(m); }  // 删除一条Message
};

void swap(Folder&, Folder&);


// class Folder;

// class Message
// {
// 	friend void swap(Message &, Message &);
// 	friend void swap(Folder &, Folder &);
// 	friend class Folder;
// public:
// 	explicit Message(const std::string& s = "") :contents(s) {}
// 	Message(const Message&);
// 	Message& operator=(const Message&);
// 	~Message();
// 	void save(Folder&);
// 	void remove(Folder&);
// 	void print_debug();

// private:
// 	std::string contents;
// 	std::set<Folder*> folders;

// 	void add_to_Folders(const Message&);
// 	void remove_from_Folders();

// 	void addFldr(Folder* f) { folders.insert(f); }
// 	void remFlddr(Folder* f) { folders.erase(f); }
// };

// void swap(Message&, Message&);

// class Folder
// {
// 	friend void swap(Message&, Message&);
// 	friend void swap(Folder&, Folder&);
// 	friend class Message;
// public:
// 	Folder() = default;
// 	Folder(const Folder&);
// 	Folder& operator=(const Folder&);
// 	~Folder();
// 	void print_debug();

// private:
// 	std::set<Message*> msgs;

// 	void add_to_Message(const Folder&);
// 	void remove_to_Message();

// 	void addMsg(Message* m) { msgs.insert(m); }
// 	void remMsg(Message *m) { msgs.erase(m); }
// };

// void swap(Folder&, Folder&);
=======
/*
 * @Description:
 * @code:
 * @Author: Li Jiaxin
 * @Date: 2022-01-05 15:09:28
 */

// 编写Message和Folder类
#include <string>
#include <iostream>
#include <set>
using namespace std;

class Folder;
class Message{
    friend void swap(Message&,Message&);
    friend void swap(Folder&,Folder&);
    friend class Folder;
public:
    explicit Message(const string& s = ""): contents(s) {}
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    // 从指定集合添加删除Message
    void save(Folder&);
    void remove(Folder&);

private:
    string contents;
    set<Folder*> folders; //Message 出现在的Folder集合
    void add_to_Folders(const Message&);
    void remove_from_Folders();
    void addFldr(Folder* f) { folders.insert(f); }
	void remFlddr(Folder* f) { folders.erase(f); }
    // void add_
};

void swap(Message&,Message&);

class Folder
{
	friend void swap(Message&, Message&);
	friend void swap(Folder&, Folder&);
	friend class Message;
public:
	Folder() = default;
	Folder(const Folder&);
	Folder& operator=(const Folder&);
	~Folder();
	void print_debug();

private:
	std::set<Message*> msgs;

	void add_to_Message(const Folder&); // 拷贝构造用
	void remove_to_Message();        // 析构用到

	void addMsg(Message* m) { msgs.insert(m); } // 加入一条Message
	void remMsg(Message *m) { msgs.erase(m); }  // 删除一条Message
};

void swap(Folder&, Folder&);


// class Folder;

// class Message
// {
// 	friend void swap(Message &, Message &);
// 	friend void swap(Folder &, Folder &);
// 	friend class Folder;
// public:
// 	explicit Message(const std::string& s = "") :contents(s) {}
// 	Message(const Message&);
// 	Message& operator=(const Message&);
// 	~Message();
// 	void save(Folder&);
// 	void remove(Folder&);
// 	void print_debug();

// private:
// 	std::string contents;
// 	std::set<Folder*> folders;

// 	void add_to_Folders(const Message&);
// 	void remove_from_Folders();

// 	void addFldr(Folder* f) { folders.insert(f); }
// 	void remFlddr(Folder* f) { folders.erase(f); }
// };

// void swap(Message&, Message&);

// class Folder
// {
// 	friend void swap(Message&, Message&);
// 	friend void swap(Folder&, Folder&);
// 	friend class Message;
// public:
// 	Folder() = default;
// 	Folder(const Folder&);
// 	Folder& operator=(const Folder&);
// 	~Folder();
// 	void print_debug();

// private:
// 	std::set<Message*> msgs;

// 	void add_to_Message(const Folder&);
// 	void remove_to_Message();

// 	void addMsg(Message* m) { msgs.insert(m); }
// 	void remMsg(Message *m) { msgs.erase(m); }
// };

// void swap(Folder&, Folder&);
>>>>>>> 5e334f4a8f140df473eded85b601cf10e14e04fb
