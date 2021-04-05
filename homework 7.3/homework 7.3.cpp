

#include <iostream>
#include <string>
#include <fstream>


using namespace std;

float* ptrArray;
#pragma pack(push, 1)


struct Employee {
    long id;
    string FirstName;
    unsigned short age;
    double salary;
};
#pragma pack(pop)

ofstream fout;


void CreateFileTXT(string FileName)

{
    ofstream fout(FileName);
    return;
}

void Task4()
{


    Employee* FirstEmployee = new Employee;

    cout << "Please, enter employee's id: ";
    cin >> FirstEmployee->id;
    cout << "Please, enter employee's first name: ";
    cin >> FirstEmployee->FirstName;
    cout << "Please, enter employee's age: ";
    cin >> FirstEmployee->age;
    cout << "Please, enter employee's salary: ";
    cin >> FirstEmployee->salary;

    cout << endl;
    cout << "First employee:" << endl;
    cout << "id: " << FirstEmployee->id << endl;
    cout << "first name: " << FirstEmployee->FirstName << endl;
    cout << "age: " << FirstEmployee->age << endl;
    cout << "salary: " << FirstEmployee->salary << endl;
    cout << "Size of struct:" << sizeof(FirstEmployee) << endl;

    string FileName;
    cout << endl << "Input File name: ";
    cin >> FileName;
    FileName = FileName + ".txt";

    CreateFileTXT(FileName);

    fout.open(FileName, std::ofstream::binary);
    if (fout.is_open())
    {
        fout << "First employee:" << endl;
        fout << "id: " << FirstEmployee->id << endl;
        fout << "first name: " << FirstEmployee->FirstName << endl;
        fout << "age: " << FirstEmployee->age << endl;
        fout << "salary: " << FirstEmployee->salary;
    }
    else
    {
        cout << "Error. Can not open file.";
    }
    fout.close();

    delete FirstEmployee;

    cin.get();
    return;
}


int main()

{
    Task4();
    cin.get();
    return 0;
}