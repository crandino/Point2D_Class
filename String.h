#ifndef __String_H__
#define __String_H__

#include <wtypes.h>
#include <stdio.h> 
#include <stdarg.h>

#define TMP_STRING_SIZE 4096 // Macro que ha definit Ricard.

class String {

private:
	char *str;
	unsigned int length;

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

	/*String(const String &a) {
		
	}*/

	//String(const char *format, ...) {
	//	
	//	length = 0;

	//	if (format != NULL)
	//	{

	//		static char tmp[TMP_STRING_SIZE];
	//		static va_list ap;

	//		va_start(ap, format);
	//		int res = vsprintf_s(tmp, TMP_STRING_SIZE, format, ap);
	//		va_end(ap);

	//		if (res > 0)
	//		{
	//			Alloc(res + 1);
	//			strcpy_s(str, length, tmp);
	//		}
	//	}
	//	if (length == 0) {
	//		Alloc(1);
	//		//clear();
	//	}
	//}

	~String() {
		delete[] str; // És necessari perquè és memòria dinàmica.
				      // Delete[] per borrar new[].
	}

	bool operator== (const String &a) const {
		return strcmp(a.str, str) == 0;
	}

	bool operator== (const char* a) const {
		if (a != NULL)
			return strcmp(a, str) == 0;
		return false;
	}

	const String& operator= (const String& a) {

		Alloc(a.length);
		strcpy_s(str, a.length, a.str);
		return (*this);
	}

	const String& operator= (const char *a) 
	{
		if (a != NULL) 
		{



		}
		else {
			//clear();
		}

	}

	int len(const String &a) {
		return a.length;
	}

	/*clear()
	{
		´str[`0] = "\n""
	}*/

private:
	void Alloc(unsigned int required_memory) // No té sentit que sigui negatiu.
	{
		length = required_memory;
		str = new char[length];
	}
};

#endif // !__String_H__
