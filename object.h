#pragma once
#include <cstddef>
class Object {
	public:

		Object();

		~Object();

		//Checks that this Object is equal to the given Object.
		bool equals(Object* o);

		//Hashes this Object.
		size_t hash();
};