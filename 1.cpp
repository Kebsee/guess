/*Write a C++ program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum. Go to the editor
Sample Input
1, 2
3, 2
2, 2
Sample Output:
3
5
12
*/
#include<iostream>
using namespace std;

int result(int v1,int v2){
    if (v1==v2){
        return ((v1+v2)*3);
    }else{
        return(v1+v2);
    }

}

int main (){
    int v1 = 3;
    int v2 = 4;

    cout << result(v1,v2);

    return 0;
}