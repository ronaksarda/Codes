#include<iostream>
using namespace std;

//class template to add 2 numbers of different data type

template <class T1, class T2>
class add{
    private:
        T1 num1;
        T2 num2;
    public:
        add(T1 n1, T2 n2){
            num1 = n1;
            num2 = n2;
        }
        void display(){
            cout << "Sum: " << num1 + num2 << endl;
        }
};

int main(){
    add<int, float> a(5, 3.5);
    cout <<" adding 5 and 3.5: " << endl;
    a.display();

    add<char , double> b('S', 4.5);
    cout<<" adding 'S' and 4.5: " << endl;
    cout << "ASCII value of 'S' is: " << int('S') << endl; // Display ASCII value of 'S'
    b.display();

    return 0;
}