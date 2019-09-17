#include <windows.h>
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	printf("Write something after handels: \n");
	char prompt[]="It was readed...";
	char buffer[80];
	DWORD actlen, actl;
	HANDLE hstdin, hstdout;
	hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	hstdin = GetStdHandle(STD_INPUT_HANDLE);
	printf("handle of stdin = %i \n",hstdin);
	printf("handle of stdout = %i\n",hstdout);
	ReadFile(hstdin, buffer, 80, &actlen, NULL);
	WriteFile(hstdout, prompt, 18, &actl, 0);
	WriteFile(hstdout, buffer, actlen, &actlen, 0);
	
	getchar();
	return 0;
}