#pragma once
#include <stdexcept>
#define ll long long
template <typename T>

class clsStack
{
private:
	ll size;
	ll capacity;
	T* array;
	static ll defult_capacity() { return 64; }

	void resize(ll newcap)
	{
		T* newarray = new T[newcap];
		for (ll i = 0; i < size; ++i) newarray[i] = array[i];
		delete[]array;
		array = newarray;
		capacity = newcap;
	}
public:
	clsStack() :capacity(defult_capacity()), size(0), array(new T[capacity]) {}
	~clsStack() { delete []array; }

	void push(T value)
	{
		if (size == capacity) resize(capacity * 2);
		array[size] = value;
		size++;
	}
	bool pop()
	{
		if (size == 0)return false;
			size--;
		return true;
	}
	const T& Top()const
	{
		if (size == 0) throw std::out_of_range("-1");
		return array[size - 1];
	}
	T& Top()
	{
		if (size == 0) throw std::out_of_range("-1");
		return array[size - 1];
	}

	ll Size() const{ return size; }
	bool Empty() const{ return size == 0; }
	void clear(){ size = 0; }
};