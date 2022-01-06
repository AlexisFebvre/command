#include "main.h"

int checkCommand(string command)
{
	string arguments[] = { "default" };
	string space_delimiter = " ";

	// stock all of the word in an array
	size_t pos = 0;
	while ((pos = command.find(space_delimiter)) != string::npos)
	{
		arguments->push_back(command.substr(0, pos));
		command.erase(0, pos + space_delimiter.length());
	}

	return 0;
}