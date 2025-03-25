#include <iostream>
#include <string>
using namespace std;

class Faculty
{
    string id;
    string name;
    string post;
    string qualification;
    string address;

public:
    void assignInitialValues(string facultyID, string facultyName, string facultyPost, string facultyQualification, string facultyAddress) {
        id = facultyID;
        name = facultyName;
        post = facultyPost;
        qualification = facultyQualification;
        address = facultyAddress;
    }

    void display() {
        cout << "Faculty ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
        cout << "Qualification: " << qualification << endl;
        cout << "Address: " << address << endl << endl;
    }
};

int main() 
{
    Faculty faculty;
    string id, name, post, qualification, address;

    cout << "Enter Faculty ID: ";
    cin >> id;
    cout << "Enter Name: ";
    getline(cin, name);
    // cin.ignore();
    getline(cin, name);
    cout << "Enter Post: ";
    getline(cin, post);
    cout << "Enter Qualification: ";
    getline(cin, qualification);
    cout << "Enter Address: ";
    getline(cin, address);

    faculty.assignInitialValues(id, name, post, qualification, address);
    faculty.display();

    return 0;
}
