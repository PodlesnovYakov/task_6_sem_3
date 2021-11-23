#include <iostream>
#include <map>
#include <string>
#include <locale.h>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cin >> n;
    string eng_word,rus_word,dop_word;
    map<string, string> engrus;
    for (int i = 0; i < n; i++) {
        cin >> eng_word >> rus_word;
        
        engrus[eng_word] = rus_word;
        engrus[rus_word] = eng_word;
    }
    cin >> dop_word;
    cout << engrus[dop_word] << endl;
}


