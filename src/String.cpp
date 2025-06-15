#include <iostream>
#include "string.h"
using namespace std;

int String::len(const char* arr) {

	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
		count++;

	return count;
}
String::String() {
	l = 0;
	c = 0;
	str = nullptr;
}
String::String(const String& obj) {
	this->l = obj.l;
	this->c = obj.c;
	this->str = new char[this->c] { '\0' };
	for (int i = 0; i < this->l; i++)
		this->str[i] = obj.str[i];
}
String::String(const char ch) {
	this->c = 2;
	this->l = 1;
	this->str = new char[this->c];
	this->str[0] = ch;
	this->str[1] = '\0';
}
String::String(const char* other) {

	this->l = len(other);
	this->c = this->l + 1;
	this->str = new char[this->c];
	for (int i = 0; i < this->l; i++)
		this->str[i] = other[i];
	this->str[this->l] = '\0';
}
String::String(char ch, int val) {

	this->l = val;
	this->c = val + 1;
	this->str = new char[this->c];
	for (int i = 0; i < this->l; i++)
		this->str[i] = ch;
	this->str[this->l] = '\0';
}
String::~String() {
	delete[]this->str;
}
char& String::operator[](int i) const {

	if (i >= 0 && i < this->l)
		return this->str[i];

}
char& String::operator[](int i) {

	if (i >= 0 && i < this->l)
		return this->str[i];

}
void String::insert_at(int idx, char ch) {

	if (idx <= this->l)
	{
		char* arr = new char[this->c + 1];
		for (int i = 0; i < idx; i++)
			arr[i] = this->str[i];
		arr[idx] = ch;
		for (int i = idx + 1; i < this->c; i++)
			arr[i] = this->str[i - 1];
		arr[this->c] = '\0';
		delete[]this->str;
		this->str = arr;
		this->l++;
		this->c++;
	}
}
void String::insert_at(int idx, const String obj) {

	if (idx <= this->l)
	{
		char* arr = new char[this->c + obj.l];
		for (int i = 0; i < idx; i++)
			arr[i] = this->str[i];
		int index = 0;
		for (int i = idx; i < idx + obj.l; i++)
		{
			arr[i] = obj.str[index];
			index++;
		}
		for (int i = idx + obj.l; i < idx + obj.l - 1; i++)
		{
			arr[i] = this->str[i - obj.l];
		}
		arr[this->c + obj.l - 1] = '\0';
		delete[]this->str;
		this->str = arr;
		this->l += obj.l;
		this->c += obj.l;
	}
}
void String::replace_first(char c) {

	this->str[0] = c;

}
void String::print()const {

	for (int i = 0; i < this->l; i++)
		cout << this->str[i];
}
int String::stoi() {

	int power = 1;
	for (int i = 0; i < this->l - 1; i++)
		power *= 10;

	int result = 0, digit = 0;

	for (int i = 0; i < this->l; i++)
	{
		if (this->str[i] == '0')
		{
			digit = 0;
		}
		else if (this->str[i] == '1')
		{
			digit = 1;
		}
		else if (this->str[i] == '2')
		{
			digit = 2;
		}
		else if (this->str[i] == '3')
		{
			digit = 3;
		}
		else if (this->str[i] == '4')
		{
			digit = 4;
		}
		else if (this->str[i] == '5')
		{
			digit = 5;
		}
		else if (this->str[i] == '6')
		{
			digit = 6;
		}
		else if (this->str[i] == '7')
		{
			digit = 7;
		}
		else if (this->str[i] == '8')
		{
			digit = 8;
		}
		else if (this->str[i] == '9')
		{
			digit = 9;
		}

		result += (power * digit);
		power /= 10;
	}

	return result;
}
String String::itos(int num) {

	String s1;
	int result = num;
	int power = 1;
	while (result != 0)
	{
		result /= 10;
		power *= 10;
		s1.l++;
	}
	power /= 10;

	int digit;
	s1.c = s1.l + 1;
	s1.str = new char[s1.c];
	for (int i = s1.l - 1; i >= 0; i--)
	{
		digit = num % 10;
		if (digit == 0)
		{
			s1.str[i] = '0';
		}
		else if (digit == 1)
		{
			s1.str[i] = '1';
		}
		else if (digit == 2)
		{
			s1.str[i] = '2';
		}
		else if (digit == 3)
		{
			s1.str[i] = '3';
		}
		else if (digit == 4)
		{
			s1.str[i] = '4';
		}
		else if (digit == 5)
		{
			s1.str[i] = '5';
		}
		else if (digit == 6)
		{
			s1.str[i] = '6';
		}
		else if (digit == 7)
		{
			s1.str[i] = '7';
		}
		else if (digit == 8)
		{
			s1.str[i] = '8';
		}
		else if (digit == 9)
		{
			s1.str[i] = '9';
		}
		num /= 10;
	}
	s1.str[l] = '\0';
	return s1;
}
bool String::isequal(const String& other) {

	char* temp1 = tolower(this->str, this->l);
	char* temp2 = tolower(other.str, other.l);
	if (this->l != other.l)
		return false;

	for (int i = 0; i < this->l; i++)
	{
		if (temp1[i] > temp2[i] || temp1[i] < temp2[i])
		{
			return false;
		}
	}
	return true;
}
bool String::isless(const String& other) {

	char* temp1 = tolower(this->str, this->l);
	char* temp2 = tolower(other.str, other.l);
	int max_idx = 0;
	if (this->l > other.l)
	{
		max_idx = other.l;
	}
	else
	{
		max_idx = this->l;
	}

	for (int i = 0; i < max_idx; i++)
	{
		if (temp1[i] < temp2[i])
		{
			return true;
		}
		else if (temp1[i] > temp2[i])
		{
			return false;
		}
	}

	return false;
}
bool String::isgreater(const String& other) {

	if (this->isequal(other))
		return false;
	return !this->isless(other);

}
int String::find_first(char ch) {

	for (int i = 0; i < this->l; i++)
	{
		if (this->str[i] == ch)
			return i;
	}
	return -1;
}
int String::find_last(char ch) {

	int idx = -1;
	for (int i = 0; i < this->l; i++)
	{
		if (this->str[i] == ch)
			idx = i;
	}
	return idx;
}
void String::remove_at(int idx) {

	char* arr = new char[this->c - 1];
	for (int i = 0; i < idx; i++)
		arr[i] = this->str[i];

	for (int i = idx + 1; i < this->l; i++)
		arr[i - 1] = this->str[i];
	this->l--;
	arr[this->l] = '\0';
	this->c--;
	delete[]this->str;
	this->str = arr;
}
void String::clear() {

	this->l = 0;
	this->c = 0;
	delete[]this->str;
	this->str = nullptr;
}
String String::operator+(String other) {

	String result;
	result.l = this->l + other.l;
	result.c = result.l + 1;
	result.str = new char[result.c];
	int idx = 0;
	for (int i = 0; i < this->l; i++, idx++)
		result.str[idx] = this->str[i];
	for (int i = 0; i < other.l; i++, idx++)
		result.str[idx] = other.str[i];
	result.str[result.l] = '\0';
	return result;
}
String operator+(String first, String other) {

	String result;
	result.l = first.l + other.l;
	result.c = result.l + 1;
	result.str = new char[result.c];
	int idx = 0;
	for (int i = 0; i < first.l; i++, idx++)
		result.str[idx] = first.str[i];
	for (int i = 0; i < other.l; i++, idx++)
		result.str[idx] = other.str[i];
	result.str[result.l] = '\0';
	return result;
}
String& String::operator=(const String& other){
	if (this != &other) {
		delete[] this->str;
		this->str = new char[other.c];
		for (int i = 0; i < other.l; i++)
		{
			this->str[i] = other.str[i];
		}
		this->str[other.l] = '\0';
		this->c = other.c;
		this->l = other.l;
	}
	return *this;
}
bool String::operator==(const String& other){
	if (this->l > other.l)
		return false;
	else if (this->l < other.l)
		return false;
	else {
		char* temp1 = new char[this->l];
		char* temp2 = new char[other.l];
		temp1 = tolower(this->str, this->l);
		temp2 = tolower(other.str, other.l);
		for (int i = 0;i < this->l;i++)
			if (temp1[i] != temp2[i])
				return false;
	}
	return true;
}
ostream& operator<<(ostream& os, const String& obj) {

	os << obj.str;
	return os;
}
istream& operator>>(istream& in, String& obj) {
	char mystr[100];
	in.getline(mystr, 50, ',');

	int size = 0;
	for (int i = 0; mystr[i] != '\0'; i++)
		size++;
	obj.l = size;
	obj.c = size + 1;
	obj.str = new char[obj.c];
	for (int i = 0; i < size; i++)
		obj.str[i] = mystr[i];
	obj.str[size] = '\0';

	return in;
}
char* tolower(char* arr, int size) {

	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
		if (arr[i] >= 65 && arr[i] <= 90)
		{
			temp[i] = temp[i] + 32;
		}
	}
	return temp;
}
char* toupper(char* arr, int size) {

	char* temp = new char[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
		if (arr[i] >= 90 && arr[i] <= 122)
		{
			temp[i] = temp[i] - 32;
		}
	}
	return temp;
}

char* String::getstring() {
	char* temp = new char[l + 1];
	for (int i = 0;i < l;i++)
		temp[i] = str[i];
	temp[l] = '\0';
	return temp;
}