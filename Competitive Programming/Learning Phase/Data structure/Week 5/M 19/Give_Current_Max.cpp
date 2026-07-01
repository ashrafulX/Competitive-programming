#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class Comparator {
public:
    bool operator()(Student a, Student b) {
        if (a.marks == b.marks) {
            return a.roll > b.roll; // Prioritize lower roll number in case of tie
        } else {
            return a.marks < b.marks; // Prioritize higher marks
        }
    }
};

int main() {
    priority_queue<Student, vector<Student>, Comparator> pq;

    string command;
    while (cin >> command) {
        if (command == "1.0") {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));

            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            } else {
                cout << "Empty" << endl;
            }
        } else if (command == "2.1" || command == "3.2") {
            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;

                if (command == "3.2") {
                    pq.pop();
                }
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}