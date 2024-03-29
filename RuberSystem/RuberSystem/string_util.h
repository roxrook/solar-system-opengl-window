#ifndef STRING_UTIL_H
#define STRING_UTIL_H

#include <string>
#include <sstream>

using namespace std;

namespace util {
	template <typename T>
	string to_string(const T &data) {
		ostringstream ostr;
		ostr << data;
		return ostr.str();
	}
}

#endif
