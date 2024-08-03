#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int roll;
        int math,physics,chemistry;

    public:

        Student(string n, int r, int m, int p, int c){
            name = n;
            roll = r;
            math = m;
            physics = p;
            chemistry = c;
        }

        int total(){
            return math + physics + chemistry;
        }

        float average(){
            return total()/3;
        }
};

int main(){
    string name;
    int roll, math, physics, chemistry;
    cout << "Enter the name of the student: " << endl;
    cin >> name;
    cout << "Enter the roll number of the student: " << endl;
    cin >> roll;
    cout << "Enter the marks in math: " << endl;
    cin >> math;
    cout << "Enter the marks in physics: " << endl;
    cin >> physics;
    cout << "Enter the marks in chemistry: " << endl;
    cin >> chemistry;

    Student s(name, roll, math, physics, chemistry);
    cout << "Total marks: " << s.total() << endl;
    cout << "Average marks: " << s.average() << endl;
    return 0;
}
