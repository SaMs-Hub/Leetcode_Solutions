#include <bits/stdc++.h>
using namespace std;

int main()
{

	// crreate var to store input until user gives .
	// push ch in q, and freqTable
	// while q is not empty, get index of 1st char using frontElement - a
	// if freq of index is > 1, then pop it
	// else get print qfront break

	// finally if q empy get -1

	queue<char> q;
	int freq[27] = {0};
	char ch;
	cin >> ch;

	while (ch != '.')
	{
		q.push(ch);
		freq[ch - 'a']++;
		while (!q.empty())
		{
			int index = q.front() - 'a';
			if (freq[index] > 1)
			{
				q.pop();
			}
			else
			{
				cout << q.front() << endl;
				break;
			}
		}

		if (q.empty())
		{
			cout << "-1" << endl;
		}
		cin >> ch;
	}
}
