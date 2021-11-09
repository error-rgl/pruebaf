
/**
 * search_character - search for match and execute for the associate function
 **/
int (*search_character(const char *nxchr, int num))(va_list)
{
	int i;

	case_t options[] = {
		{"s", print_string},
		{"c", print_char},
		{NULL, NULL}
	};

	for (i = 0; options[i].mtch != NULL; i++)
		if (options[i].mtch[0] == nxchr[num])
			return (options[i].function);
	return (NULL);
}
