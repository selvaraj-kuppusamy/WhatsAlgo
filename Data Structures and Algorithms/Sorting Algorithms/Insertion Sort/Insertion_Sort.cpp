/*
Algorithm: Insertion Sort
Time: O(n²)
Space: O(1)
Author: Selvaraj Kuppusamy, github.com/selvaraj-kuppusamy
*/
#include<iostream>
using namespace std;

void display(int *array, int size) 
{
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void insertionSort(int *array, int size)
{
   int key, j, i;
   for(i = 1; i<size; i++)
   {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) 
      {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;
   }
}
int main() {
   int n;
   cin >> n;
   int arr[n]; 
   for(int i = 0; i<n; i++)
   {
      cin >> arr[i];
   }
   insertionSort(arr, n);
   display(arr, n);
}

