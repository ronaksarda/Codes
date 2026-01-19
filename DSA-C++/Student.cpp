#include <iostream>
using namespace std;

class Student {
private:
    int sub1, sub2, sub3;

public:
    void readMarks(){
        cout << "Enter marks for 3 subjects: ";
        cin >> sub1 >> sub2 >> sub3;
    }
    void average(){
        float avg = (float)(sub1 + sub2 + sub3) / 3;
        cout << "Average marks: " << avg << endl;
    }
    void percentage(){
        int total = sub1 + sub2 + sub3;
        float percent = (total / 300.0) * 100;
        cout << "Percentage: " << percent << "%" << endl;
    }
};
int main(){
    Student s1,s2,s3;
    cout << "Student 1:" << endl;
    s1.readMarks();
    s1.average();
    s1.percentage();
    cout << "Student 2:" << endl;
    s2.readMarks();
    s2.average();
    s2.percentage();
    cout << "Student 3:" << endl;
    s3.readMarks();
    s3.average();
    s3.percentage();
    return 0;
}

