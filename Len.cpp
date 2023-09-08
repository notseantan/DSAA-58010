#include<iostream>

int main()
{
int num[] = {5,4,3,2,1};
int x = sizeof(num) / sizeof(num[0]);
std::cout<<x<<std::endl;
return 0;
}
