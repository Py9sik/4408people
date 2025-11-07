#include <iostream>

using namespace std;

void conm(int minutes, int& days, double& hours) { days = minutes / 1440; hours = (minutes % 1440) / 60.0; }
int main() {
    int minutes, days; double hours;
    cout << "minutes= "; cin >> minutes;
    conm(minutes, days, hours);
    cout << minutes << " minutes = " << days << " days, " << hours << " hours, " << endl;
}