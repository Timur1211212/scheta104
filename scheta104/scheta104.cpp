#include <iostream>
using namespace std;

struct bank_account {
    int account_number;
    string owners_name;
    int balance;
    int new_balance;
};
void order(bank_account& p) {
    cout << "Введите номер счёта: ";
    cin >> p.account_number;
    cout << "Введите имя владельца: ";
    cin >> p.owners_name;
    cout << "Введите баланс: ";
    cin >> p.balance;
    cout << "Введите новый баланс: ";
    cin >> p.new_balance;

}

int main()
{
    setlocale(LC_ALL, "rus");
    bank_account card;
    order(card);
    cout << "Ваш счёт: " << card.owners_name << " " << card.account_number << " " << card.new_balance;
    return 0;
}