// File: SuperArray
// Created by Hugo Valle on 10/31/2017.
// Copyright (c) 2017 WSU
//

#include "SuperArray.h"
/*!
 * Constructor
 * @param begIndex User's low index
 * @param capacity Maximum array capacity
 */
SuperArray::SuperArray(const int begIndex, const unsigned int capacity)
{
	/* This is declaring a local variable, if you have data member
	 * called int* arr, the code on line ## will NOT refer to the data
	 * member, instead you created a second arr pointer, and this
	 * second pointer dies and is lost forever when the constructor ends
	 */
	arr = new int[capacity];
    SuperArray::capacity = capacity;
	// Other info below
    lowIndex = begIndex;
    highIndex = begIndex + capacity - 1;
}

/*!
 * Class Destructor
 */
SuperArray::~SuperArray()
{
	delete[] arr;
}
/*! Convert array content to string
 * @param: obj SuperArray class
 * @return: String version of the array
 * */
string arrayToString(const SuperArray& s)
{
    stringstream ss;

    //To Do: Change 5 to s.length()
    for(int i = 0; i < 5; i++)
    {
         ss << s.arr[i] << " ";
    }
    string s1 = ss.str(); //build a string from the stream of chars
    cout << s1 << endl;
    size_t found;
    found = s1.find_last_not_of(" ");
    if(found != string::npos)
        s1.erase(found + 1);
    else
        s1.clear();     // whitespace
    return s1;
}
/*!
 * Overload [ ] operator. Translates user's index to the real index
 * @param: index User's index
 * @return: Real index
 * */
int &SuperArray::operator[](const int index)
{
    int realIndex;
    if(lowIndex == 0)
    {
        realIndex = index;
    }
    else
    {
        realIndex = index - lowIndex;
    }
    return arr[realIndex];
}
/**
 *
 * @return
 */
int *SuperArray::getArr() const {
    return arr;
}
/**
 *
 * @param arr
 */
void SuperArray::setArr(int *arr) {
    SuperArray::arr = arr;
}

int SuperArray::getLowIndex() const {
    return lowIndex;
}

void SuperArray::setLowIndex(int lowIndex) {
    SuperArray::lowIndex = lowIndex;
}

int SuperArray::getHighIndex() const {
    return highIndex;
}

void SuperArray::setHighIndex(int highIndex) {
    SuperArray::highIndex = highIndex;
}

int SuperArray::getCapacity() const {
    return capacity;
}

void SuperArray::setCapacity(int capacity) {
    SuperArray::capacity = capacity;
}
