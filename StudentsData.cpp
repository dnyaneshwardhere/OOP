#include <iostream>
#include <string>
using namespace std;

class Students
{
public:
    string name;
    int marks[5];
    int roll;

    void display(string name, int marks[], int roll)
    {
        this->name = name;
        for(int i=0; i<5; i++)
        {
            this->marks[i] = marks[i];
        }
        this->roll = roll;
        
        cout << "Name :" << name << endl;
        cout << "Roll number :" << roll << endl;
    }

    void average(int marks[])
    {
        int ave = 0;
        for(int i=0; i<5; i++)
        {
            ave += marks[i];
        }
        cout << "Sum of Marks :" << ave << endl;
        cout << "Average Marks = " << (ave/5) << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students:" << endl;
    cin >> n;

    Students* sd1 = new Students[n];
    for(int i=0; i<n; i++)
    {
        string nm1;
        int rl1;
        int mrk1[5];

        cout << "\nEnter the Name of Student " << endl;
        cin >> nm1;

        cout << "Enter Roll Number of Student " << endl;
        cin >> rl1;

        cout << "Enter Marks in five subjects: " << endl;
        for(int j=0; j<5; j++)
        {
            cin >> mrk1[j];
        }

        sd1[i].display(nm1, mrk1, rl1);
        sd1[i].average(mrk1);
    }
    delete[] sd1;
    return 0;
}