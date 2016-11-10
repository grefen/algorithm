#pragma once

#include<stack>
#include<stdexcept>

template<typename T>
class TwoStacksQueue
{
public:
	TwoStacksQueue();
	~TwoStacksQueue();

	void push(T t);
	void pop();
	T top();
private:
	 
	std::stack<T> mPopStack;
	std::stack<T> mPushStack;

};

template<typename T>
TwoStacksQueue<T>::TwoStacksQueue()
{

}
template<typename T>
TwoStacksQueue<T>::~TwoStacksQueue()
{

}
template<typename T>
void TwoStacksQueue<T>::push(T t)
{
	mPushStack.push(t);
}
template<typename T>
void TwoStacksQueue<T>::pop()
{
	if (mPushStack.empty() && mPopStack.empty()) {
		throw std::logic_error("pop");
	}
	else {
		//if (!mPopStack.empty()) {
		//	mPopStack.pop();
		//}
		//else if (!mPushStack.empty()) {
		//	while (!mPushStack.empty()) {
		//		mPopStack.push(mPushStack.top());
		//		mPushStack.pop();
		//	}

		//	mPopStack.pop();
		//}

		if (mPopStack.empty()) {
			while (!mPushStack.empty()) {
				mPopStack.push(mPushStack.top());
				mPushStack.pop();
			}
		}

		mPopStack.pop();
	}
}
template<typename T>
T TwoStacksQueue<T>::top()
{
	if (mPushStack.empty() && mPopStack.empty()) {
		throw std::logic_error("pop");
	}
	else {
		//if (!mPopStack.empty()) {
		//	return mPopStack.top();
		//}
		//else if (!mPushStack.empty()) {
		//	while (!mPushStack.empty()) {
		//		mPopStack.push(mPushStack.top());
		//		mPushStack.pop();
		//	}

		//	return mPopStack.top();
		//}
		if (mPopStack.empty()) {
			while (!mPushStack.empty()) {
				mPopStack.push(mPushStack.top());
				mPushStack.pop();
			}
		}

		return mPopStack.top();
	}
}