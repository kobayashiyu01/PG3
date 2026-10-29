#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

// コールバック関数の型
typedef void (*Callback)(int, int);

// 結果表示を遅らせる関数
void DelayReveal(void (*fn)(int, int), unsigned int delayMs,
    int roll, int userGuess) {

    // 指定した時間だけ待つ
    Sleep(delayMs);

    // コールバック関数を実行する
    fn(roll, userGuess);
}

// 結果を判定して表示する関数
void ShowResult(int roll, int userGuess) {

    // 出目とユーザーの入力を比較
    if ((roll % 2 == 1 && userGuess == 1) ||
        (roll % 2 == 0 && userGuess == 0)) {

        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }

    printf("出目は%dでした。\n", roll);
}

// サイコロの出目を決める関数
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

    // 3秒後に結果を表示
    DelayReveal(ShowResult, 3000, roll, userGuess);

    return 0;
}
 

