#include <iostream>
#include <cmath>
using namespace std;

void task_1() {
    double u,v,w,x,y,z1,z2;

    cout << "Let's begin Task 1!" << endl;

    cout << "A-1: ";
    cin >> u;
    cout << "A-2: ";
    cin >> v;

    cout << "A-x: ";
    cin >> y;

    cout << "B-1: ";
    cin >> w;
    cout << "B-2: ";
    cin >> x;

    z1 = (y-u) / (v - u);
    z2 = (x-w) * z1 + w;
    cout << "B-y: " << z2;
}
void task_2() {
    double a,b,c;
    cout << "Let's begin Task 2!" << endl;

    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (a != 0) {
        if (b * b - 4 * a * c >= 0) {
            double roots[] = {0, 0};
            double disc =  b * b - 4 * a * c;
            roots[0] = (-b + std::sqrt(disc)) / (2 * a);
            roots[1] = (-b - std::sqrt(disc)) / (2 * a);
            cout << "First root: " << roots[0] << endl;
            cout << "Second root: " << roots[1] << endl;
        } else {
            cout << "No real roots";
        }
    } else {
        cout << "Single root: " << -c / b << endl;
    }
}
void task_3() {
    double x,y,min,max,hypoten;

    cout << "Let's begin Task 3!" << endl;

    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    cout << "Min radius: ";
    cin >> min;
    cout << "Max radius: ";
    cin >> max;

    hypoten = pow(x,2) + pow(y,2);
    if (hypoten <= pow(max,2) && hypoten >= pow(min,2)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main()
{
    int chosenTask = 0;

    cout << "Choose task (1-3): ";
    cin >> chosenTask;


    switch (chosenTask) {
        case 1:
            task_1();
            break;
        case 2:
            task_2();
            break;
        case 3:
            task_3();
            break;
        default:
            cout << "Incorrect input :-(";
    }

}

