#include<iostream>
using namespace std;
#ifndef STRING_H
#define STRING_H
char* tolower(char* arr, int size);

char* toupper(char* arr, int size);

class String {
private:
	int l;
	int c;
	char* str;
	int len(const char* arr);
public:
	String();
	String(const String& obj);
	String(const char* other);
	String(char ch, int val);
	~String();
	char& operator[](int i)const;
	char& operator[](int i);
	void insert_at(int idx, char ch);
	void insert_at(int idx, const String obj);
	void replace_first(char c);
	void print()const;
	int stoi();
	String itos(int num);
	bool isequal(const String& other);
	bool isless(const String& other);
	bool isgreater(const String& other);
	int find_first(char ch);
	int find_last(char ch);
	void remove_at(int idx);
	void clear();
	String operator+(String other);
	String operator =(const String& str);
	bool operator==(const String& other);
	friend String operator+(String first, String other);
	friend ostream& operator<<(ostream& os, const String& obj);
	friend istream& operator>>(istream& in, String& obj);
};

#endif