#include <cstdio>
#include<algorithm>
#include<exception>
#include<iostream>
#include"GetMinStack.h"
#include"TwoStacksQueue.h"
int main()
{
    printf("hello from algorithm!\n");


	//GetMinStack<int, std::less<int>> minStack;
	//minStack.push(3);
	//minStack.push(4);
	//minStack.pop();
	//std::cout << minStack.getMin() << std::endl;

	TwoStacksQueue<int> twoStack;
	twoStack.push(1);
	twoStack.push(2);
	twoStack.push(3);
	
	twoStack.pop();
	twoStack.top();


    return 0;
}