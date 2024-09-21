The equilibrium index of an array is an index such that the sum of elements at the left indexes is equal to the sum of elements at the right indexes. Given an array arr, your task is to find the index of the first Equilibrium point in the array. If there is no equilibrium point then return -1.

Examples:

Input: arr[] = [1, 2, 0, 3]
Output: 2
Explanation: The sum of left of index 2 is 1 + 2 = 3 and the sum on right index of 2 is 3.

Input: arr[] = [1, 1, 1, 1]
Output: -1
Explanation: There is no equilibrium point.


Expected Time Complexity: O(n)
Expected Auxilary Space: O(1)