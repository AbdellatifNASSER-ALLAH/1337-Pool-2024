#include <unistd.h>  // For read function
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

int main() {
	char buffer[BUFFER_SIZE];
	int bytesRead;
	int i;
	// Read from standard input (file descriptor 0)
	bytesRead = read(0, buffer, 4 );

	// Null-terminate the input to make it a valid C-string
	if (bytesRead > 0) {
		buffer[bytesRead] = '\0';
	}
	i = 0;
	int lines = atoi(buffer);
	char **map;

	map = (char **)malloc((lines + 1) * sizeof(char *));
	while(i < lines)
	{
		bytesRead = read(0, buffer, BUFFER_SIZE - 1);
		map[i] = (char *) malloc(sizeof(char)*(1 + bytesRead));

		strcpy(map[i],buffer);
		write(1,map[i],bytesRead);
			i++;
	}



	return 0;
}

/*int get_info(char * str,int * length,char ** sets)
{
	
}*/
