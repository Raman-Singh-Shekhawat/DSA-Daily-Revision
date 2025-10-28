Problem statement
You have been given an array/list and a number k. You have to find the kth smallest number.

Example:
Input: ‘N’ = 5 , 'k' = 2
‘A’ = [3, 2, 11, 5, 1]

Output: 2

Explanation: For nums = [3, 2, 11, 5, 1],
In the given array, smallest element is 1 and 2nd smallest element is 2 and the value of k is 2. So, our output will be 2.

#include <bits/stdc++.h>

using namespace std;

int kthSmallest(int arr[], int n, int k)
{
    //Write your code here

    priority_queue<int, vector <int>, greater <int>> pq;

    for (int i = 0; i < n; i++) {

        pq.push (arr [i]);
    }

    int temp = k;

    while (temp > 1) {

        pq.pop ();
        temp--;
    }

    return pq.top();
}