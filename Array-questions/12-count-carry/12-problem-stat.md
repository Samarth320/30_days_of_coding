A carry is a digit that is transferred to left if sum of digits exceeds 9 while adding two numbers from right-to-left one digit at a time

You are required to implement the following function.

Int NumberOfCarries(int num1 , int num2);

The functions accepts two numbers ‘num1’ and ‘num2’ as its arguments. You are required to calculate and return the total number of carries generated while adding digits of two numbers ‘num1’ and ‘ num2’.

Input Format

Line 1 accepts num1
Line 1 accepts num2

Constraints

num1>=0
num2>=0

Output Format

An integer, which is the sum of carry's.

Sample Input 0

451
349
Sample Output 0

2
Explanation 0

Adding ‘num 1’ and ‘num 2’ right-to-left results in 2 carries since ( 1+9) is 10. 1 is carried and (5+4+1) is 10, again 1 is carried. Hence 2 is returned.