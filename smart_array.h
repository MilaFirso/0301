#pragma once
#include <iostream>


class smart_array
{
public:
	smart_array(const size_t size);
	//SmartArray(const SmartArray&) = delete; // запрещаем конструктор копирования
	//SmartArray& operator=(const SmartArray&) = delete; // запрещаем оператор присваивания
	~smart_array();
	void addElement(const int value);
	int getElement(const size_t index);
	void printSmartArray();

private:
	int* sm_array_ = nullptr;
	size_t sizeOfArray_ = 0;
	size_t countForOverflow_ = 0;
};