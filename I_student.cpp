#include <iostream>
#include <algorithm>
using namespace std;

struct STUDENT {
    string name;
    int roll_num;
    int marks[5];
    int total;
    float average;
};

// Input function to input details of 'n' students
void input_details(STUDENT* s, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter details of student " << i+1 << ":" << endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Roll Number: ";
        cin >> s[i].roll_num;
        cout << "Marks in 5 subjects: ";
        for (int j = 0; j < 5; j++) {
            cin >> s[i].marks[j];
        }
    }
}

// Function to calculate total and average marks for each student
void calculate_marks(STUDENT* s, int n) {
    for (int i = 0; i < n; i++) {
        s[i].total = 0;
        for (int j = 0; j < 5; j++) {
            s[i].total += s[i].marks[j];
        }
        s[i].average = (float)s[i].total / 5;
    }
}

// Function to sort students based on roll number
bool compare(STUDENT a, STUDENT b) {
    return a.roll_num < b.roll_num;
}

void sort_students(STUDENT* s, int n) {
    sort(s, s + n, compare);
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    STUDENT* s = new STUDENT[n];
    input_details(s, n);
    calculate_marks(s, n);
    sort_students(s, n);
    // Print the details of sorted students
    cout << "Sorted details of students: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll Number: " << s[i].roll_num << endl;
        cout << "Total Marks: " << s[i].total << endl;
        cout << "Average Marks: " << s[i].average << endl;
        cout << endl;
    }
    return 0;
}
