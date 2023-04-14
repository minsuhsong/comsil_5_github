#include "Header.h"

char *integer_to_ascii(int n){
	int i;

	char *string = (char *)malloc((MAX + 1) * sizeof(char));

	for(i = 0; n > 0; i++, n /= 10){				//다음 숫자 분석을 위해 10으로 나누 값을 다시 저장
		string[i] = (n % 10) + '0';					//n의 1의 자릿수
	}
	
	string[i] = '\0';

	return string;
}
