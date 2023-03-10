#include <iostream>
#include <string>
using namespace std;

int main()
{
    #pragma region CandyBuy
    /*
    int money = 0;
    int candyValue = 0;

    cout << "현재 가지고 있는 돈 : ";
    cin >> money;

    cout << "" << endl;

    cout << "캔디의 가격 : ";
    cin >> candyValue;

    cout << "" << endl;

    cout << "최대로 살 수 있는 캔디의 개수 = " << floor(money / candyValue) << endl;

    cout << "캔디 구입 후 남은 돈 = " << money % candyValue;
    */

    #pragma endregion

    #pragma region 이름주소
    /*
    string name;
    string adress;

    cout << "이름을 입력하시오 : ";
    cin >> name;
    cout << endl << "주소를 입력하시오 : ";
    cin.ignore(); //cin다음 getline쓰면 cin.ignore()필요
    getline(cin, adress); //공백을 받을 수 있음
    cout << endl << adress << "의 " << name << "씨 안녕하세요?";
    */

    #pragma endregion

    #pragma region 문자 위치 찾기
    /*
    string str = "When is Rome, do as the Romans.";
    cout << str.find("Rome");
    */

    #pragma endregion

    #pragma region 특정 문자 삭제하기

    /*
    string persontag;
    cout << "주민등록번호를 입력하십시오 : ";
    cin >> persontag;
    cout << endl << "-가 제거된 주민등록번호 : ";
    cout << persontag.erase(persontag.find("-"),1);
    */


    #pragma endregion

    #pragma region 해밍거리 구하기

    /*string dnaA;
    string dnaB;
    int count = 0;

    cout << "DNA1 : ";
    cin >> dnaA;

    cout << "DNA2 : ";
    cin >> dnaB;

    for (int i = 0; i < dnaA.length(); i++)
    {
        if (dnaA[i] != dnaB[i])
        {
            count++;
        }
    }
    cout << "해밍거리는 : " << count;*/


    #pragma endregion

    string answer;
    string realanswer;
    string input;
    int index = 0;

    cout << "정답을 입력하세요" << endl;
    cin >> realanswer;

    for (int i = 0; i < realanswer.length(); i++)
    {
        answer.push_back('_');
    }


    cout << answer << endl;

    cout << "글자를 입력하세요" << endl;
    cin >> input;

    while (answer != realanswer)
    {
        if (realanswer.find(input) != NULL)
        {
            index += realanswer.find(input);
            answer[index] = input[index];
            index = 0;
        }
        else
        {
            cout << "틀렸습니다." << endl;
        }
        cout << answer << endl;
        cin >> input;
        
    }
    



    

}