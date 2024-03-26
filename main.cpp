#include <iostream>
#include <string>
using namespace std;

class NumToText {
private:
    int num;
    string text;

public:
    NumToText(int n) {
        num = n;
        text = "";
    }

    string getTextForBaseData(int n) {
        switch (n) {
        case 0: return "Zero";
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
        default: return "";
        }
    }

    string getTextForTens(int n) {
        switch (n) {
        case 2: return "Twenty";
        case 3: return "Thirty";
        case 4: return "Forty";
        case 5: return "Fifty";
        case 6: return "Sixty";
        case 7: return "Seventy";
        case 8: return "Eighty";
        case 9: return "Ninety";
        default: return "";
        }
    }

    string getTextForTeens(int n) {
        switch (n) {
        case 10: return "Ten";
        case 11: return "Eleven";
        case 12: return "Twelve";
        case 13: return "Thirteen";
        case 14: return "Fourteen";
        case 15: return "Fifteen";
        case 16: return "Sixteen";
        case 17: return "Seventeen";
        case 18: return "Eighteen";
        case 19: return "Nineteen";
        default: return "";
        }
    }

    void convertToText() {
        int temp = num;
        if (temp >= 1000) {
            text += getTextForBaseData(temp / 1000) + " Thousand ";
            temp %= 1000;
        }
        if (temp >= 100) {
            text += getTextForBaseData(temp / 100) + " Hundred ";
            temp %= 100;
        }
        if (temp >= 20) {
            text += getTextForTens(temp / 10) + " ";
            temp %= 10;
        }
        if (temp >= 10 && temp <= 19) {
            text += getTextForTeens(temp) + " ";
            temp = 0;
        }
        if (temp > 0) {
            text += getTextForBaseData(temp) + " ";
        }
    }

    void display() {
        cout << "Number - " << num << "; Text - " << text << endl;
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    if (m < 0) {
        m = 0;
    }
    for (int i = m; i <= n; i++) {
        NumToText obj(i);
        obj.convertToText();
        obj.display();
    }
    return 0;
}
