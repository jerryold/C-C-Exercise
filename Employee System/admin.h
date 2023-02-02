
#include <string.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <Windows.h>
#include <vector>
#include <fstream>
#include <sstream>


using namespace std;
void mainMenu(void);
void addData(void);
void viewData(void);
void deleteData(void);
void adminVerification(void);
void employeeFunction(void);




void adminfunction()
{
    system("cls");
    cout << "\n\n\t\t\t\t\t | Logged In as Admin |\n";
    cout << "\n\n\t\t\t\t\t 1. Add Employee Detail";
    cout << "\n\n\t\t\t\t\t 2. Delete Employee";
    cout << "\n\n\t\t\t\t\t 3. View Table ";
    cout << "\n\n\t\t\t\t\t 4. Main Menu ";
    cout << "\n\n\t\t\t\t\t 5. Exit";
    int option;
    cout << "\n\n\t\t\t\t\tEnter choice : ";

    do
    {
        cin >> option;
        {
            switch (option)
            {
                case 1:
                    addData();
                    break;
                case 2:
                    deleteData();
                    break;
               case 3:
                    viewData();
                    break;
                case 4:
                    mainMenu();
                    break;
                case 5:
                    system("cls");
                    cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";

                    for (int i = 0; i < 4; i++)
                    {

                        Sleep(1000);
                        cout << ".";
                    }
                    exit(0);
                    break;

                default:
                    system("cls");
                    cout << "\n\n\t\t\t\t\t Logged In as Admin";
                    cout << "\n\n\t\t\t\t\t 1. Add Employee Record";
                    cout << "\n\n\t\t\t\t\t 2. Delete Record";
                    cout << "\n\n\t\t\t\t\t 3. View Table ";
                    cout << "\n\n\t\t\t\t\t 4. Main Menu ";
                    cout << "\n\n\t\t\t\t\t 5. Exit";

                    cout << "\n\n\t\t\t\t\t invalid input!";

                    cout << "\n\n\t\t\t\t\t Enter choice : ";

            }
        }   

    } while (option!='5');


}
void mainMenu()
{
    system("cls");
    cout << "The employee salary system";
    cout << "\n\n\n\n\t\t\t\t\t Login As : ";
    cout << "\n\n\n\t\t\t\t\t 1. Admin ";
    cout << "\n\n\t\t\t\t\t 2. Employee";
    cout << "\n\n\t\t\t\t\t 3. Exit";
    cout << "\n\n\n\t\t\t\t\t Enter your choice : ";

    
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:

            adminfunction();
            break;

        case 2:
            system("cls");
            cout << "Welcome as a employee";
            employeeFunction();
            break;
        case 3:
            system("cls");
            cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";

            for (int i = 0; i < 4; i++)
            {

                Sleep(1000);
                cout << ".";
            }

            exit(0);
            break;
        default:
            cout << "invalid input";

    }
    system("pause");

}
void deleteData()
{
    system("cls");

    // Open FIle pointers
    fstream fin, fout;

    // Open the existing file
    fin.open("data.csv", ios::in);

    // Create a new file to store the non-deleted data
    fout.open("datanew.csv", ios::out);

    int rollnum, roll1, count = 0, i;
    string line, word;
    vector<string> row;

    // Get the roll number
    // to decide the data to be deleted
    cout << "Enter the roll number "
        << "of the record to be deleted: ";
    cin >> rollnum;

    // Check if this record exists
    // If exists, leave it and
    // add all other data to the new file
    while (!fin.eof())
    {

        row.clear();

        getline(fin, line);
        stringstream s(line);

        while (getline(s, word, ','))
        {
            row.push_back(word);
        }

        int row_size = row.size();
        roll1 = stoi(row[0]);

        
        if (roll1 != rollnum)
        {
            if (!fin.eof())
            {
                for (i = 0; i < row_size - 1; i++)
                {
                    fout << row[i] << ",";
                }
                fout << row[row_size - 1] << "\n";
            }
        }
        else
        {
            count = 1;
        }
        if (fin.eof())
            break;
    }
    if (count == 1)
        cout << "Record deleted\n";
    else
        cout << "Record not found\n";

    // Close the pointers
    fin.close();
    fout.close();

    // removing the existing file
    remove("data.csv");

    // renaming the new file with the existing file name
    rename("datanew.csv", "data.csv");

    Sleep(2000);

    adminfunction();
}


void addData()
{
    system("cls");
    fstream file("data.csv", ios::out | ios::app);

    if (!file)
    {
        cout << "\nFailed to open data.csv / data.csv file not found!";
    }

    else
        cout << "\t|Enter Data|" << endl
        << endl;

    string ID, name, company, branch, salary, review;
    string moreData;

    cout << "\nEnter Employee's ID Number : ";
    cin >> ID;
    file << "\n"
        << ID << ", ";

    cout << "\nEnter Employee's Name : ";
    cin >> name;
    file << name << ", ";

    cout << "\nEnter Company : ";
    cin >> company;
    file << company << ", ";

    cout << "\nEnter Branch : ";
    cin >> branch;
    file << branch << ", ";

    cout << "\nEnter Salary : ";
    cin >> salary;
    file << salary << ", ";

    cout << "\nEnter Employee's Review : ";
    cin >> review;
    file << review << ", ";
        
    file.close();

    cout << "\nAdd more Record? (Y / N) : ";

    cin >> moreData;
    if (moreData == "y" || moreData == "Y" || moreData == "yes" || moreData == "Yes")
    {
        addData();
    }
    else if (moreData == "n" || moreData == "N" || moreData == "no" || moreData == "No")
        adminfunction();

    else
        cout << "\nEnter a valid option";

    adminfunction();
}
void viewData()
{
    system("cls");

    fstream file("data.csv");

    if (!file)
    {
        cout << "fail in opening the file";
    }
    cout << "\n\t\t\t\t\t\t|Employee's Record| \n\n";

    cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"
        << endl
        << endl;
    cout << "ID \t Name \t\t\t Company \t branch \t Salary \t Review " << endl
        << endl;
    string id, name, company, branch, salary, review;

    while (!file.eof()) // file.eof() = detects as how long the f
    {
        getline(file, id, ',');
        getline(file, name, ',');
        getline(file, company, ',');
        getline(file, branch, ',');
        getline(file, salary, ',');
        getline(file, review, '\n');
              

        cout << id << " \t " << name << "\t\t\t" << company << " \t\t" << branch << " \t\t" << salary <<  " \t\t" << review << endl;
        cout << endl;
    }

    cout << "\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    file.close();

    cout << "\n\n 1. Add Record\n";
    cout << " 2. Delete Record\n";
    cout << " 3. Update Record\n";
    cout << " 4. Main Menu\n";
    cout << " 5. Exit\n";
    cout << "\nEnter choice : ";
    // adminFunction();
}


void adminVerification()
{
    system("cls");

    string password;

    cout << "\n\n\n\n\n\t\t\t\t\t";
    cout << "\n\n\n\t\t\t\t\tEnter Password : ";

    do
    {
        cin >> password;

        if (password != "password")
        {
            system("cls");
            cout << "\n\n\n\n\n\t\t"
                << "wrong password!, try again or type 'menu' to Navigate to Main Menu";
            cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }

        if (password == "Menu" || password == "menu" || password == "MENU")
        {
            mainMenu();
        }

    }

    while (password != "password");
    adminfunction(); // main menu function is in the Header File adminFunction.h
}

void employeeFunction()
{

    system("cls");

    fstream file("data.csv");

    if (!file)
    {
        cout << "fail in opening the file";
    }
    cout << "\n\t\t\t\t\t\t|Employee's Record| \n\n";

    cout << "\n-----------------------------------------------------------------------------------------------------------------------\n"
        << endl
        << endl;
    cout << "ID \t Name \t\t\t Company \t Branch \t Salary \t Review " << endl
        << endl;
    string id, name, company, branch, salary, review;

    while (!file.eof()) // file.eof() = detects as how long the f
    {
        getline(file, id, ',');
        getline(file, name, ',');
        getline(file, company, ',');
        getline(file, branch, ',');
        getline(file, salary, ',');
        getline(file, review, '\n');

        cout << id << " \t " << name << "\t\t\t" << company << " \t\t" << branch << " \t\t" << salary << " \t\t"  << review << endl;
        cout << endl;
    }

    cout << "\n-----------------------------------------------------------------------------------------------------------------------" << endl;
    file.close();
    system("pause");
    mainMenu();
}