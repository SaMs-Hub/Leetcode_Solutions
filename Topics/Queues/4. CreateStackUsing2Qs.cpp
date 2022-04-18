#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Stack{
	queue<T> q1, q2;

	public:
		void push(T data){
			q1.push(data);
		}

		void pop(){
			if (q1.empty()){
				return;
			}

			while (q1.size() > 1){
				T ele = q1.front();
				q2.push(ele);
				q1.pop();
			}

			q1.pop();

			swap(q1, q2);
		}


		int top(){
			while(q1.size() > 1){
				T ele = q1.front();
				q2.push(ele);
				q1.pop();
			}

			T ele = q1.front();
			q1.pop();
			q2.push(ele);

			swap(q1, q2);
		}


		int size(){
			return q1.size() + q2.size();
		}

		bool empty(){
			return size() == 0;
		}


};




int main()
{
	Stack<int> s;
	s.push(2);
	s.push(3);

	
	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}
