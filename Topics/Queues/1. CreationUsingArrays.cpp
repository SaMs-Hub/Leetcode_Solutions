#include <bits/stdc++.h>
using namespace std;

class Queue{
	int *arr;
	int first, rear, currSize, maxSize;

	public:
		// make a contructor
		Queue(int size = 5){
			// using defautlSIze if not given
			// make dynamic array of size given
			// give first as 0, read as size - 1, cs is 0 and max as size as size - 1

			arr = new int[size];
			currSize = 0;
			maxSize = size ;

			first = 0;
			rear = maxSize - 1;
			
		}



		// CRUD
		// full
		bool full(){
			return maxSize == currSize;
		}
		// empty
		bool empty(){
			return currSize == 0;
		}
		// push
		void push(int data){
			// check if array is full,
			// if no, add rear as read +  1 % maxSize.. add data to arr[r]  kkep inc currSIze
			if (!full()){
				rear = (rear + 1)% maxSize;
				arr[rear] = data;
				currSize++;
			}
		}
		// pop
		void pop(){
			// check if array is empty
			// if not first as first + 1 % maxSize.. keep dec currSize
			if (!empty()){
				first = (first + 1) % maxSize;
				currSize--;
			}
		}
		// front
		int front(){
			return arr[first];
		}
	
	
		// last element
		int back(){
			return arr[rear];
		}
		

		// make a destructor
		~Queue(){
			// if arr is not null delete it, add null to it
			if (arr != NULL){
				delete [] arr;
				arr = NULL;
			}
		}

};

int main()
{

	Queue q;
	for (int i = 0; i <= 4; i++){
		q.push(i);
	}

	q.pop();

	q.pop();

	while(!q.empty()){
		cout << q.front();
		q.pop();
	}
	return 0;
}
