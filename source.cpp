#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> p)
{
	for (int i = 0; i < p.size();i++)
	{
		cout << p.at(i);
	}
	cout << endl;
}
int f(int n, int  k,int start,vector<int>p)
{
	for (int i=start; i<n-k+1; i++)
	{
		if (0 == k)
		{
			display(p);
			return 0;
		}
		else
		{
			p.push_back(i);
			f(n, k - 1,i+1,p);
			p.pop_back();
		}
	}
}

int main()
{
	vector<int> ans,p;
	vector<int> test = { 1,2,3,4,5 };
	display(test);
	f(7, 4,0,p);
	system("pause");
	return 0;
}
