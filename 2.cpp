/*2. Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference. Go to the editor
Sample Input:
53
30
51
Sample Output:
6
21
0*/
#include<iostream>
using namespace std;

int result (int n){
    int abs_diff = abs(51-n);
    if (n>51){
        abs_diff = abs_diff*3;
    }
    return(abs_diff);
}

int main()
{
    cout << result(53);



    return 0;
}