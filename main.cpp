#include <iostream>

int main() {
	// コンソールをUTF-8に設定する
	system("chcp 65001 > nul");

	char str[] = "Ingrish, 日本語";

	printf("%s", str);
	return 0;
}