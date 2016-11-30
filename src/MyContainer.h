/*
 * MyContainer.h
 *
 *  Created on: 12.11.2016
 *      Author: ASKOCZYL
 */

#ifndef MYCONTAINER_H_
#define MYCONTAINER_H_
#include <iostream>

using namespace std;

template<class T, int n>
class MyContainer {
public:
	MyContainer() {
		a = new T[n];
	}

	explicit MyContainer(T* b) :
			MyContainer() {
		for (int i = 0; i < n; i++) {
			a[i] = b[i];
		}
	}

	MyContainer(const MyContainer& b) :
			MyContainer(n) {
		for (int i = 0; i < n; i++) {
			a[i] = b.a[i];
		}
	}

	MyContainer(MyContainer&& b)noexcept{
		a=b.a;
		b=nullptr;
	}
	MyContainer& operator=(MyContainer&& b)noexcept{
		a=b.a;
		b=nullptr;
		return *this;
	}

	int operator[](int i){
		return a[i];
	}
	T* begin(){
		return a;
	}
	T* end(){
			return a+n;
		}
	void printMe();

	void swap(MyContainer& b);

	virtual ~MyContainer() {
		delete[] a;
	}
	;
private:
	T* a;
};

template<class T, int n>
inline void MyContainer<T, n>::printMe() {
	for (int i = 0; i < n; i++) {
				cout << a[i] << "\t";
			}
}

template<class T, int n>
inline void MyContainer<T, n>::swap(MyContainer& b) {
	MyContainer temp = move(b);
	b=move(*this);
	*this=move(b);
}

#endif /* MYCONTAINER_H_ */
