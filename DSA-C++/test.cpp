#include <iostream>
#include <string>
using namespace std;

class AcademicRecord {
protected:
    int roll;
    int marks;

public:
    void getAcademicDetails() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Academic Marks: ";
        cin >> marks;
    }

    void showAcademicDetails() {
        cout << "Roll Number: " << roll << endl;
        cout << "Academic Marks: " << marks << endl;
    }
};

class SportsRecord {
protected:
    string sport;
    int sportsScore;

public:
    void getSportsDetails() {
        cout << "Enter Sport Name: ";
        cin >> sport;

        cout << "Enter Sports Score: ";
        cin >> sportsScore;
    }

    void showSportsDetails() {
        cout << "Sport Name: " << sport << endl;
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Student : public AcademicRecord, public SportsRecord {
public:
    void showStudentResult() {
        int total = marks + sportsScore;
        float average = total / 2.0;

        cout << "\nStudent Details\n";
        showAcademicDetails();
        showSportsDetails();
        cout << "Overall Performance Score: " << average << endl;
    }
};

int main() {
    Student s1;

    s1.getAcademicDetails();
    s1.getSportsDetails();
    s1.showStudentResult();
    return 0;
}
