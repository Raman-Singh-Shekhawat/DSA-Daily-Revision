Problem statement
You have been given a sorted(in ascending order) integer array/list('nums') of size N and an element 'target'. Your task is to return the index of closest element to the 'target' in the array 'nums'.

Example:
Input: ‘N’ = 7 ‘target’ = 4
‘A’ = [1, 3, 7, 9, 11, 12, 45]

Output: 1

Explanation: For nums = [1, 3, 7, 9, 11, 12, 45],
The element 3 is closest to the target element , so we will return the index of 3.
Hence, the answer is '1'.


int binarySearchClosest(int arr[], int left, int right, int target)
{
    //Write your code here

    while (left <= right) {

        int mid = (left + right) / 2;

        if (target == arr [mid]) {

            return mid;
        }
        else if (target < arr [mid]) {

            right = mid - 1;
        }
        else {

            left = mid + 1;
        }

        if (left == right) {

            return left;
        }
    }
}