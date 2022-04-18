#include <bits/stdc++.h>
using namespace std;

class Queue{
	int currSize;
	list<int> l;
	public:
		Queue(){
			currSize = 0;
		}

		void push(int data){
			l.push_back(data);
			currSize += 1;
		}

		bool empty(){
			return currSize == 0;
		}

		void pop(){
			if(!empty()){
				l.pop_front();
				currSize -= 1;
			}
		}

		int front(){
			return l.front();
		}

};




int main()
{

	Queue q;

	for (int i = 0; i < 5; i++){
		q.push(i);
	}
	while (!q.empty()){
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}
