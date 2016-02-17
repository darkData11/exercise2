//Syed Hassaan Tauqeer BSCS-3A - 08126
#include<iostream>
#include<vector>
#include<string>
#include<memory>
using namespace std;

/*
class str
{
	public:
	int len;
	std::string s;
	
	void add(std::string st)
	{
		s = s.append(st);
	}

	int length (std::string st)
	{
		len = st.length();
		return len;
	}

	char index (std::string st, int pos)
	{
		char sub = st[pos];
		return sub;
	}
};*/

int main(void)
{
	vector<string> v;
	string str = "T";
	
	v.push_back(str); // push a string in the vector class
	str = "h";
	v.push_back(str);
	str = "i";
	v.push_back(str);
	int length = v.size();
	cout<<"The string has a length of:"<<length<<"characters"<<endl;
	int ind = 1;
	string index = v[ind];
	cout<<"substring: \t"<<index;

	system("pause");
	return 0;
}
