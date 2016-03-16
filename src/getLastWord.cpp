#include <stdlib.h>
int strlen(char *str)
{
	int i = 0;
	while (str[i++] != '\0');
	return i;
}
char * get_last_word(char * str){
	char * result = NULL;
	int length = strlen(str);
	int end = length - 1;
	int temp = end;
	while (str[temp - 1] != ' ' && temp>0)
		temp--;
	result = (char *)malloc(sizeof(char)*(end - temp + 1));
	for (int i = temp; i <= end; i++){
		result[i - temp] = str[i];
	}
	result[end - temp + 1] = '\0';
	return result;
}

