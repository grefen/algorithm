#include <cstdio>
#include<algorithm>
#include<exception>
#include<iostream>
#include"GetMinStack.h"
int main()
{
    printf("hello from algorithm!\n");

	GetMinStack<int, std::less<int>> minStack;

	minStack.push(3);
	minStack.push(4);
	minStack.pop();
	std::cout << minStack.getMin() << std::endl;


    return 0;
}