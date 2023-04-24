#include "main.h"

int (*select_output(char ch))(va_list)
{
	OUTS output_funcs[] = {
		{'s', output_alpha},
		{'c', output_char},
		{'%', output_handle}};
		/*{'x', print_hex},*/
		/*{'X', print_hex_big},*/
		/*{'b', print_binary},*/
		/*{'o', print_octal},*/
		/*{'R', print_rot13},
		*//*{'r', print_rev},
		*//*{'S', print_bigS},*/
		/*{'p', print_address},*/
		/*{'%', output_handle}*/
		/*};*/
	int keys = 3;

	int j;

	for (j= 0; j < keys; j++)
		if (output_funcs[j].spec == ch)
			return (output_funcs[j].selectprint);

	return (NULL);
	}
