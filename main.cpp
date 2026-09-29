#include <iostream>

int main() {
	// コンソールをUTF-8に設定する
	system("chcp 65001 > nul");

	char str[] = "Hello, 世界!";

	printf("%s", str);
	return 0;
}