#pragma once
#include "object.h"
#include <string.h>
#include <cstddef>
class String : public Object {
	public:
		char* str_;
		size_t size_;
		String(const char* str);

		~String();

		//Concatenates another string to the front of this one.
		String* concat(String* other);

		//Checks for equality between this String and the given Object.
		bool equals(Object* other);

		//Hashes this String.
		size_t hash();
};