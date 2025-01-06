#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNum;
    double balance;

public:
    BankAccount(string n, int ac, double bal)
    {
        name = n;
        accountNum = ac;
        balance = bal;
    }

    string getName()
    {
        return name;
    }

    int getAccountNum()
    {
        return accountNum;
    }
    double getBalance()
    {
        return balance;
    }
};

class BankManagement
{
private:
    vector<BankAccount> accounts;

public:
    void AddAccount(string name, int accountNum, double balance)
    {
        accounts.push_back(BankAccount(name, accountNum, balance));
    }
};

int main()
{
    BankManagement bank;
    int choice;
    cout << "\t\t::Bank Management System" << endl;
    cout << "\t\t\tMain Menu" << endl;
    cout << "\t\t 1. Create New Account" << endl;
    cout << "\t\t 2. Show All Account" << endl;
    cout << "\t\t 3. Search Account" << endl;
    cout << "\t\t 4. Deposit Money" << endl;
    cout << "\t\t 5. Withdraw Money" << endl;
    cout << "\t\t 6. Exit" << endl;
    cout << "\t\t --------------------------------------" << endl;
    cout << "\t\t Enter Your Choice :";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        string name;
        int accountNum;
        double balance;
        cout << "\t\t Enter Name: ";
        cin >> name;
        cout << "\t\t Enter Account NUmber: ";
        cin >> accountNum;
        cout << "\t\t Enter Initial Balance: ";
        cin >> balance;
        bank.AddAccount(name, accountNum, balance);
        cout << "\t\t Account Created Successfulyl..." << endl;
        break;
    }
    }

    return 0;
}