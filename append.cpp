#include<iostream>
using namespace std;
int main()
{
int i, x;
x = 69;
int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
num[10] = x;
for(i=0; i<11; i++)
    cout<<num[i]<<"  ";
    cout<<endl;
return 0;
}
