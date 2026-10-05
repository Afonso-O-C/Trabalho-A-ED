#ifndef NO_GENERIC_H
#define NO_GENERIC_H

#include<iostream>

using namespace std;

class no_generic
{
	private:
		int key;
		no_generic* next;
	
	public:
		//Getters
		void getkey() const;
		
		//Setters
		void setKey(int novo);
};

#endif
