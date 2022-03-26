/*
 * @Description: 
 * @code: 
 * @Author: Li Jiaxin
 * @Date: 2021-12-21 21:30:06
 */
#include <map>
#include <set>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	std::multimap<string, string> authors{
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" } };
	map<string,multiset<string>> author_works;
    for(auto& author : authors){
        // if(!author_works.count(author.first))
        //     author_works[author.first].insert(author.second);
        author_works[author.first].insert(author.second);
    }
    for(auto it:author_works){
        cout << it.first<<": ";
        for(auto word:it.second){
            cout<<word << " ";
        }
        cout<< endl;
    }
	return 0;
}