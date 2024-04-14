#include <iostream>
#include <vector>
using namespace std;

class Items
{
public:
    int code;
    string name;
    int price;

    void display(int code, string name, int price)
    {
        this->code = code;
        this->name = name;
        this->price = price;

        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of items you want to add: ";
    cin >> n;

    vector<Items> items(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Item " << (i + 1) << " Details:" << endl;

        int code;
        cout << "Enter Code of Item: ";
        cin >> code;

        string name;
        cout << "Enter Name of Item: ";
        cin.ignore(); // To ignore the newline character left in the buffer from the previous input
        getline(cin, name); // Using getline to read the entire line, including spaces

        int price;
        cout << "Enter Price of Item: ";
        cin >> price;

        items[i].display(code, name, price);
    }

    return 0;
}