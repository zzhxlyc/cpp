#include <cctype>		//ctype.h

void char_test(){
	/*
	 *int isxxxx(int ), param will be turn to int by auto
	 *int isxxxx(char c), c -> (int)c
	 */
	isdigit('1');
	isxdigit('A');		//0-9, A-F, a-f
	isalpha('a');
	islower('a');
	isupper('A');
	isalnum('x');		//num or alpha
	isascii('*');		//0-127

	isspace(' ');		// ' ' '\t' '\n'
	isgraph('-');		//ox21 - ox7E
	isprint('@');		//ox20 - ox7E
	
}

void char_transfer(){
	/*
	 *int toxxxx(int ) 
	 */
	tolower('A');
	toupper('a');
}

int main(){
	char_test();
	char_transfer();
	return 0;
}
