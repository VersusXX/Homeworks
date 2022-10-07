#include <iostream>
#include <cmath>

void task_1() {
    double u,v,w,x,y,z1,z2;

    std::cout << "Let's begin Task 1!" << std::endl;

    std::cout << "A-1: ";
    std::cin >> u;
    std::cout << "A-2: ";
    std::cin >> v;

    std::cout << "A-x: ";
    std::cin >> y;

    std::cout << "B-1: ";
    std::cin >> w;
    std::cout << "B-2: ";
    std::cin >> x;

    z1 = (y-u) / (v - u);
    z2 = (x-w) * z1 + w;
    std::cout << "B-y: " << z2;
}
void task_2() {
    double a,b,c;
    std::cout << "Let's begin Task 2!" << std::endl;

    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    if (a != 0) {
        if (b * b - 4 * a * c >= 0) {
            double roots[] = {0, 0};
            double disc =  b * b - 4 * a * c;
            roots[0] = (-b + std::sqrt(disc)) / (2 * a);
            roots[1] = (-b - std::sqrt(disc)) / (2 * a);
            std::cout << "First root: " << roots[0] << std::endl;
            std::cout << "Second root: " << roots[1] << std::endl;
        } else {
            std::cout << "No real roots";
        }
    } else {
        std::cout << "Single root: " << -c / b << std::endl;
    }
}
void task_3() {
    double x,y,min,max,hypoten;

    std::cout << "Let's begin Task 3!" << std::endl;

    std::cout << "X: ";
    std::cin >> x;
    std::cout << "Y: ";
    std::cin >> y;
    std::cout << "Min radius: ";
    std::cin >> min;
    std::cout << "Max radius: ";
    std::cin >> max;

    hypoten = pow(x,2) + pow(y,2);
    if (hypoten <= pow(max,2) && hypoten >= pow(min,2)) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}

int main()
{
    int chosenTask = 0;

    std::cout << "Choose task (1-3): ";
    std::cin >> chosenTask;


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
            std::cout << "Incorrect input :-(";
    }

}