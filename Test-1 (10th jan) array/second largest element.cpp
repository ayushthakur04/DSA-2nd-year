#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int a[], int n)
{
  
   sort(a, a + n);

   int second_largest = 0;
   for (int i = n - 2; i >= 0; i--)
   {
    
      if (a[i] != a[n - 1])
      {
         second_largest = a[i];
         break;
      }
   }

   return second_largest;
}

int main()
{
   int a[] = {12, 35, 1, 10, 34, 1};
   int n = sizeof(a) / sizeof(a[0]);

   int answer = findSecondLargest(a, n);

   cout << "The second largest element in the array is: " << answer;

   return 0;
}
