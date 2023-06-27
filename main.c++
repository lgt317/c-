#include <iostream>
#include <string>
using namespace std;

int main() {

    string question[] = { "개", "고양이","기린" ,"코끼리","표범" };
    string answer[] = { "dog", "cat","giraffe" ,"elephant","leopard" };
    string ox; //맞을 떄 마다 o 틀릴 때 마다 x 추가
    int score(0);

    cout << "영어단어로 바꾸세요." << endl;
    for (int i = 0; i < 5; i++) {

        string word;
        cout << question[i] << ": ";
        cin >> word;

        if (word == answer[i]) {
            ox += "O";
            score += 20;
        }
        else {
            ox += "X";
        }
    }

    cout << "==> " << ox << " " << score << "점" << endl;

    return 0;
}
