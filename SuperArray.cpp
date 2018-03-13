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

    for(int i = 0; i < s.length(); i++)
    {
        ss << s.arr[i]; << " ";
    }
    string s1 = ss.str(); //build a string from the stream of chars
    return s1;
}
