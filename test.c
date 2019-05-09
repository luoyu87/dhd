#include <iostream>
#include <vector>


using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	int i = 0;

	vector<int> a(10);
	//for(auto &i : a)	
	for(i=0;i<a.size();i++)
	{
		cin >> a[i];
	}

	for(auto i : a)
	{
		cout << i << endl;
	}
}


