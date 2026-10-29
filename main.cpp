#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

// 結果表示を遅らせる関数
void DelayReveal(void (*fn)(int, int), unsigned int delayMs,
    int roll, int userGuess) {

    // 指定した時間だけ待つ
    Sleep(delayMs);

    // コールバック関数を実行する
    fn(roll, userGuess);
}

// サイコロの出目を決定する関数
int roll_dice() {
    return rand() % 6 + 1;
}

// メイン関数
int main() {
system("chcp 65001 > nul");
    // 乱数を初期化
    srand((unsigned int)time(NULL));

    int userGuess;

    // ユーザーから入力
    printf("奇数なら1、偶数なら0を入力してください: ");
    scanf_s("%d", &userGuess);

    // サイコロの出目を決定
    int roll = roll_dice();

    // ラムダ式で結果を判定する関数を作成
    auto ShowResult = [](int roll, int userGuess) {

        if ((roll % 2 == 1 && userGuess == 1) ||
            (roll % 2 == 0 && userGuess == 0)) {

            printf("正解\n");
        }
        else {
            printf("不正解\n");
        }

        printf("出目は%dでした。\n", roll);
        };

    // 3秒後に結果を表示
    DelayReveal(ShowResult, 3000, roll, userGuess);

    return 0;
}

