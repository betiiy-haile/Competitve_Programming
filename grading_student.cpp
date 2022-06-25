#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<int>& gradingStudents(vector<int>& grades) {
    int n;
    for (int& grade : grades) {
        if (grade >= 38) {
            n = grade % 5;
            if (n >= 3) {
                grade += (5 - n);
            }
        }
    }
    return grades;
}