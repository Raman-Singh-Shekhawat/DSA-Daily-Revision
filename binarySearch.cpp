Problem statement
You are given an integer array 'A' of size 'N', sorted in ascending order. You are also given an integer 'target'.

Your task is to write a function to search for 'target' in the array 'A'. If it exists, return its index in 0-based indexing. Otherwise, return -1.

Example:
Input: ‘N’ = 7 ‘target’ = 3
‘A’ = [1, 3, 7, 9, 11, 12, 45]

Output: 1

Explanation: For A = [1, 3, 7, 9, 11, 12, 45],
The index of element '3' is 1.
Hence, the answer is '1'.

int binarySearch(int nums[], int left, int right, int target) {
    // Write Your Code Here

    while (left <= right) {

        int mid = (left + right) / 2;

        if (target == nums [mid]) {

            return mid;
        }
        else if (target < nums [mid]) {

            right = mid - 1;
        }
        else {

            left = mid + 1;
        }
    }

    return -1;
}