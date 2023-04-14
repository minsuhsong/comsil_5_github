#include "Header.h"

void count(int n, int *arr){
	int i;
	char *tmp = integer_to_ascii(n);

	for(i = 0; tmp[i]; i++){
		arr[tmp[i] - '0'] += 1;			//문자로 바꿔서 개수 계산
	}

	free(tmp);
}
