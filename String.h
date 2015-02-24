#ifndef __String_H__
#define __String_H__

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

	/*String(const &String) {

	}*/

	~String() {
		delete[] str; // Es necessari perquè és memòria dinàmica.
				      // Delete[] per borrar new[].
	}

	/*int len(_str) const {
		return strlen_s(_str);
	}*/
};

#endif // !__String_H__
