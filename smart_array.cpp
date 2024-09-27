#include <iostream>﻿
#include "smart_array.h"

smart_array::smart_array(const size_t size) {
	sizeOfArray_ = size;
	sm_array_ = new int[size] {};
}

smart_array::~smart_array() {
	delete[] sm_array_;
}

void smart_array::printSmartArray()
{
	for (int i = 0; i < sizeOfArray_; i++)
		std::cout << sm_array_[i] << " ";

	std::cout << std::endl;
};

void smart_array::addElement(const int value)
{
	if (countForOverflow_ >= sizeOfArray_)
	{
		throw std::out_of_range("Size of array is smaller");
	}
	sm_array_[countForOverflow_++] = value;
};

int smart_array::getElement(const size_t index)
{
	if ((index >= sizeOfArray_) || (index < 0))
	{
		throw std::out_of_range("The getting element is out of array range");
	}
	return sm_array_[index];
};