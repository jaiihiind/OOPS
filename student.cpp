// Create a Structure STUDENT with the fields name, roll_num, marks (marks in 5 different subjects), total and average and write the functions to perform following operations:
// 1.Input the details of n students.
// 2.Calculate the total and average marks for each student.
// 3.Sort the details of students based on roll number.

#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int roll_num;
    int marks[5];
    int total;
    float average;
};

void input_details(Student *s, int n) {
    for(int i=0; i<n; i++) {
        cout << "Enter the details of student " << i+1 << ":" << endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Roll number: ";
        cin >> s[i].roll_num;
        cout << "Marks in 5 subjects: ";
        for(int j=0; j<5; j++) {
            cin >> s[i].marks[j];
            s[i].total += s[i].marks[j];
        }
        s[i].average = (float)s[i].total / 5;
    }
}

bool compare(Student a, Student b) {
    return a.roll_num < b.roll_num;
}

void sort_details(Student *s, int n) {
    sort(s, s+n, compare);
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student *s = new Student[n];
    input_details(s, n);
    sort_details(s, n);
    cout << "Details of students sorted based on roll number:" << endl;
    cout << "Name\tRoll number\tTotal\tAverage" << endl;
    for(int i=0; i<n; i++) {
        cout << s[i].name << "\t" << s[i].roll_num << "\t\t" << s[i].total << "\t" << s[i].average << endl;
    }
    return 0;
}
