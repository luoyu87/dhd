#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <ctype.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::iterator;

int main(void)
{
#if 0
	vector<string> a;
	
	for(auto i = 0;i<5;i++)
	{
		string s;	
		cin>>s;
		a.push_back(s);
	}
#endif
//	vector<string> a{"hello,world"};
	string a("hello,world");

	for(auto it=a.begin();(it!=a.end() && !isspace(*it));++it)
	{
		cout << *it <<endl;
	}


}
