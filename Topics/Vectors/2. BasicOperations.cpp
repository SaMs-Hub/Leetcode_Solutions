#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v{1, 2, 3, 4};
    //push
    v.push_back(44);

    //pop
    v.pop_back();

    //insert
    v.insert(v.begin() + 3, 42);

    //erase
    v.erase(v.begin() + 2);

    //removeAll
    v.clear();

    //size
    cout << v.size() << endl;


    //empty
    if(v.empty()){
        cout << "Empty" << endl;
    }
    v.push_back(1);
    v.push_back(2);
    
    //front
    cout << v.front() << endl;
    // back
    cout <<v.back() << endl;

    // Reservation used to avaoid doubling
    v.reserve(1000);


    for(int x: v){
        cout << x << ",";
    }
    return 0;
}  
