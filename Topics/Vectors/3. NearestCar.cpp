// App1 
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1, pair<int, int> p2){
    // d1 by calling p1firt2 and d2 by p2second2
    // if d1 == d2 return based on coorinates
    int d1 = p1.first*p1.first + p1.second*p1.second;
    int d2 = p2.first*p2.first + p2.second*p2.second;

    if(d1 == d2){
        return p1.first < p2.first;
    }
    return d1 < d2;
}


int main()
{
    // make a vector with pairs v
    // take number of cars
    // iterate over cars, and get their coordinates
    // push them by making pair into v

    // by comparing sort them
    // print
    vector<pair<int,int>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;

        v.push_back(make_pair(x,y));
    }

    sort(v.begin(), v.end(), compare);
    for (auto x: v){
        cout << x.first << ',' << x.second << endl;
    }
    return 0;
}


// Approach 2 - Using class
#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
        string carName;
        int x,y;

        Car(){

        }
        Car(string n, int x, int y){
            carName = n;
            this->x = x;
            this->y = y;
        }

        int dist(){
            return x*x + y*y;
        }

};

bool compare(Car A, Car B){
    int da = A.dist();
    int db = B.dist();

    if (da == db){
        return A.carName < B.carName;
    }

    return da < db;
}


int main()
{
    int n;
    cin >> n;
    
    vector<Car> v;
    for (int i = 0; i < n; i++){
        int x, y;
        string name;
        cin >> name >> x >> y; 

        Car temp(name, x, y);
        v.push_back(temp);

        
    }

    sort(v.begin(), v.end(), compare);

    for (auto c: v){
        cout << c.carName << " at " << c.x << ',' << c.y << endl;
    }

    return 0;
}
