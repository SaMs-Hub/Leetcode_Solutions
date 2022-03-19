#include <bits/stdc++.h>
using namespace std;

void printAllSubarrays(int arr[], int n)
{
     // traverse through j steps with i iterations
     for (int i = 0; i < n; i++)
     {
          int sum = 0;
          for (int j = i; j < n; j++)
          {
               // get their sum
               sum += arr[j];

               // if 0 print i, j;
               if (sum == 0){
                    cout << i << " to " << j << endl;
               }
          }
     }
}

int main()
{
     int nums[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
     int n = sizeof(nums) / sizeof(nums[0]);

     printAllSubarrays(nums, n);

     return 0;
}
