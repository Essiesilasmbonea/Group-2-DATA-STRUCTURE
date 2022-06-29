//TASK SEVEN
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define WORD_LEN  20
#define DICT_LEN   2

typedef struct dict {
	char english[WORD_LEN];
	char swahili[WORD_LEN];
} Dict;

/* function prototypes */
void to_lower_string(char []);				/* change all characters to lower case */
int word_search(Dict [], char [], int);		/* search word from array list and return
												position if found*/

int main() {

	char search[WORD_LEN];
	Dict dictionary[DICT_LEN];
	int i;

	printf("\nEnter 2 words and their meaning:\n");
	for( i = 0; i < DICT_LEN; i++) {
		printf("\nEnter english word: ");
		scanf("%s", dictionary[i].english);

		printf("\nEnter swahili word: ");
		scanf("%s", dictionary[i].swahili);
	}
	printf("The words found in the dictionary are:\n");
	for(i = 0; i < DICT_LEN; i++)
	{
		printf("\t%s--------%s\n", dictionary[i].english, dictionary[i].swahili);
	}

	while(1) {
		int found = -1, direction;

		printf("\npress any number to exit:\n 1: E -> S\n 2: S -> E\n");
		scanf("%d", &direction);

		if(direction == 1) {
			printf("Welcome to English dictionary\n\n");
			printf("\nEnter an English word to translate: \n");
			scanf("%s", search);
			found = word_search(dictionary, search, 1);
		}
		
		else if(direction == 2) {
			printf("Karibu kwenye kamusi ya kiswahili\n\n");
			printf("\nWeka neno la kutafuta: \n");
			scanf("%s", search);
			found = word_search(dictionary, search, 2);
		}
		else {
			break;
		}

		if(found >= 0) {
			printf("\nThe word found:");
			char* meaning = direction == 1 ? dictionary[found].swahili : dictionary[found].english;
			printf("\"%s\" means \"%s\".\n", search, meaning);
		}
		else {
			printf("\nThe word (%s) was not found in the dictionary.\n", search);
		}
	}

	return 0;
}

void to_lower_string(char str[]) {
	int count = 0;

	while(count < WORD_LEN) {
		str[count] = tolower(str[count]);
		
		count++;
	}
}

int word_search(Dict arr_str[], char str[], int dir) {
	int found = -1;
	char str1[WORD_LEN], str2[WORD_LEN];

	strcpy(str2, str);
	to_lower_string(str2);
     int i;
	for( i = 0; i < DICT_LEN; i++) {
		if(dir == 1) {
			strcpy(str1, arr_str[i].english);
			to_lower_string(str1);
		}
		else {
			strcpy(str1, arr_str[i].swahili);
			to_lower_string(str1);
		}

		if(strcmp(str1, str2) == 0) {
			found = i;
			break;
		}
	}

	return found;
}
