#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 1000

int main()
{
#pragma region 파일 쓰기

	/*FILE* file = fopen("data.txt", "w");

	fputs("health", file);

	fclose(file);

	return 0;*/
#pragma endregion

#pragma region 파일 읽기
	FILE* file = fopen("Data.txt", "r");

	char buffer[SIZE] = { 0 };

	fread(buffer, 1, SIZE, file);

	printf("%s", buffer);

	fclose(file);

#pragma endregion


}