#ifndef __String_H__
#define __String_H__

#include <wtypes.h>

class String {

private:
	char *str;
	int length;

public:
	// Constructors
	String() {
		length = 1;
		str = new char[length];
		str[0] = '\0';
	}

	String(const char* _str) {
		length = strlen(_str) + 1;
		str = new char[length];
		strcpy_s(str,length,_str);
	}

	String(const String &a) {
		
	}

	//String(LPCSTR format, ...)  // Ricard pedia String(const char *format) {}
	//{
	//	str = new char[10];
	//	va_list args;
	//	va_start(args, format);
	//	length = vsnprintf_s(str, _countof(str), _TRUNCATE, format, args);
	//	printf("%d", length);
	//}

	~String() {
		delete[] str; // És necessari perquè és memòria dinàmica.
				      // Delete[] per borrar new[].
	}

};

#endif // !__String_H__
