#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

bool Count();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "÷è º â öüîìó ôàéë³ ïàðà ñóñ³äí³õ áóêâ “no” àáî “on” ? Â³äïîâ³äü:   ";
    if (Count() == 1) { cout << " Yes" << endl; }
    else { cout << " No" << endl; }
    return 0;
}
bool Count()
{
    ifstream t("t.txt");
    string s;

    int k = 0;

    while (getline(t, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] == 'n' && s[i + 1] == 'o') ||(s[i] == 'o' && s[i+1] == 'n'))
            {
                k++;
            }
        }
    }
    if (k > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}