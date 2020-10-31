#include <iostream>
using namespace std;

void wordScatterer(char*);

int main()
{
	char word[500];
	cin.getline(word, 500);
	wordScatterer(&word[0]);

	return 0;
}

void wordScatterer(char* s)
{
	int a = strlen(s);
	for (int i = 0;i < a;i++)
	{
		for (int j = 0;j < a;j++)
		{
			cout << s[i] << " ";
		}
		cout << endl;
	}
}