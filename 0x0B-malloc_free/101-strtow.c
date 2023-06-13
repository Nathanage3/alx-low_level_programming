#include <stdlib.h>
/**
 * is_whitespace - filtering white space
 * @c: char c
 * Return: white space
 */
int is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}
/**
 * strtow - string to word
 * @str: string pointer
 * Return: word
 */
char **strtow(char *str)
{
	int i, j, word_count = 0;
	char **words = NULL;
	int word_len = 0, word_index = 0;

    	if (str == NULL || str[0] == '\0')
	{
        	return NULL;
	}
    	for (i = 0; str[i] != '\0'; i++)
	{
        	if (!is_whitespace(str[i]) && (is_whitespace(str[i + 1]) || str[i + 1] == '\0'))
		{
            		word_count++;
		}
    	}
    	words = malloc(sizeof(char *) * (word_count + 1));
    	if (words == NULL)
	{
        	return NULL;
	}
    	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_whitespace(str[i]))
		{
			if (word_len == 0)
			{
                		j = i;
            		}
            		word_len++;
        	}
		else
		{
            
			if (word_len > 0)
			{						
                		words[word_index] = malloc(sizeof(char) * (word_len + 1));
                		if (words[word_index] == NULL)
				{
					for (j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
                    			return NULL;
                		}
				for (j = 0; j < word_len; j++)
				{
                    			words[word_index][j] = str[i - word_len + j];
				}
                		words[word_index][word_len] = '\0';
                		word_index++;
                		word_len = 0;
            		}
        	}
    	}
    	if (word_len > 0)
	{
        	words[word_index] = malloc(sizeof(char) * (word_len + 1));
        	if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
			{
				free(words[j]);
			}
            		free(words);
            		return NULL;
        	}
        	for (j = 0; j < word_len; j++)
            	{
			words[word_index][j] = str[i - word_len + j];
		}
        	words[word_index][word_len] = '\0';
        	word_index++;
    }
	words[word_index] = NULL;
    	return words;
}

