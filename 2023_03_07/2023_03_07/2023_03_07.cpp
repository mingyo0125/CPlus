#include <iostream>
#include <string>
using namespace std;

int main()
{
    #pragma region CandyBuy
    /*
    int money = 0;
    int candyValue = 0;

    cout << "���� ������ �ִ� �� : ";
    cin >> money;

    cout << "" << endl;

    cout << "ĵ���� ���� : ";
    cin >> candyValue;

    cout << "" << endl;

    cout << "�ִ�� �� �� �ִ� ĵ���� ���� = " << floor(money / candyValue) << endl;

    cout << "ĵ�� ���� �� ���� �� = " << money % candyValue;
    */

    #pragma endregion

    #pragma region �̸��ּ�
    /*
    string name;
    string adress;

    cout << "�̸��� �Է��Ͻÿ� : ";
    cin >> name;
    cout << endl << "�ּҸ� �Է��Ͻÿ� : ";
    cin.ignore(); //cin���� getline���� cin.ignore()�ʿ�
    getline(cin, adress); //������ ���� �� ����
    cout << endl << adress << "�� " << name << "�� �ȳ��ϼ���?";
    */

    #pragma endregion

    #pragma region ���� ��ġ ã��
    /*
    string str = "When is Rome, do as the Romans.";
    cout << str.find("Rome");
    */

    #pragma endregion

    #pragma region Ư�� ���� �����ϱ�

    /*
    string persontag;
    cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻʽÿ� : ";
    cin >> persontag;
    cout << endl << "-�� ���ŵ� �ֹε�Ϲ�ȣ : ";
    cout << persontag.erase(persontag.find("-"),1);
    */


    #pragma endregion

    #pragma region �عְŸ� ���ϱ�

    string dnaA;
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
    cout << "�عְŸ��� : " << count;


    #pragma endregion


    

}