#pragma once
#include <stack>
#include <stdexcept>

//��Сջ���⣬�ؼ����������ǰջ����С��ֵ��
//�����Сֵ����pop����ʱ�ı䣬������Ҫ����һ��stack�����洢��Сֵ
template<typename T, typename CMP>
class GetMinStack
{
public:
	GetMinStack();
	~GetMinStack();

	void push(T data);
	void pop();
	T    top();
	T    getMin();
private:

	std::stack<T> mStackData;
	std::stack<T> mStackMin;
};

template<typename T, typename CMP>
GetMinStack<T, CMP>::GetMinStack()
{
}

template<typename T, typename CMP>
GetMinStack<T, CMP>::~GetMinStack()
{
}

template<typename T, typename CMP>
void GetMinStack<T, CMP>::push(T data)
{
	if (mStackMin.empty())
	{
		mStackData.push(data);
		mStackMin.push(data);
	}
	else
	{
		T t = mStackMin.top();
		CMP less;
		if (less(t, data))
		{
			//����
			mStackData.push(data);
			
		}
		else
		{
			mStackData.push(data);
			mStackMin.push(data);
		}
	}
}

template<typename T, typename CMP>
void GetMinStack<T, CMP>::pop()
{
	if (mStackData.empty())
	{
		throw std::logic_error("stack empty");
	}
	else
	{
		T t = mStackData.top();
		T m = mStackData.top();

		if (CMP()(t, m))
		{
			mStackData.pop();
			mStackMin.pop();
		}
		else
		{
			mStackData.pop();
		}
	}
}

template<typename T, typename CMP>
T    GetMinStack<T, CMP>::top()
{
	return mStackData.top();
}

template<typename T, typename CMP>
T    GetMinStack<T, CMP>::getMin()
{
	return mStackData.top();
}

