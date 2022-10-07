#include <iostream>

void task1() {
    int desiredNum = 0;
    std::cout << "Choose any integer number: ";
    std::cin >> desiredNum;

    for(int i=0;i<desiredNum; ++i){
        for(int x=0; x<i;++x){
            std::cout << "*";
        }
        std::cout << "*" << std::endl;
    }
}
void task2() {
    int desiredNum = 0;
    std::cout << "Choose any integer number: ";
    std::cin >> desiredNum;

    for(int i=0;i<desiredNum; ++i){
        for(int y = desiredNum;y>i;--y){
            std::cout << " ";

        }
        for(int x=0; x<i;++x){
            std::cout << "**";
        }
        std::cout << "*" << std::endl;

    }
}
void task3() {
    int desiredNum = 0;
    std::cout << "Choose any integer number: ";
    std::cin >> desiredNum;

    for(int i=0;i<desiredNum; ++i){
        for(int y = desiredNum-1;y>i;--y){
            std::cout << " ";
        }
        for(int x=0; x<i;++x){
            std::cout << "**";
        }
        std::cout << "*" << std::endl;
    }

    for(int i=0;i<desiredNum-1;++i) {
        for(int y = 0;y<i+1;++y){
            std::cout << " ";
        }
        for(int x=desiredNum-2; x>i;--x){
            std::cout << "**";
        }
        std::cout << "*"  << std::endl;
    }

}
void task4() {
    int desiredNum = 0;
    std::cout << "Choose any integer number: ";
    std::cin >> desiredNum;

    //up
    for(int i=0;i<desiredNum; ++i){
        //up 1
        for(int y = desiredNum-1;y>i;--y){
            std::cout << " ";
        }
        for(int x=0; x<i;++x){
            std::cout << "**";
        }
        std::cout << "*";

        //up 2
        for(int y = desiredNum-1;y>i;--y){
            std::cout << "  ";
        }
        for(int x=0; x<i;++x){
            std::cout << "**";
        }
        std::cout << "*";

        //up 3
        for(int y = desiredNum-1;y>i;--y){
            std::cout << "  ";
        }
        for(int x=0; x<i;++x){
            std::cout << "**";
        }
        std::cout << "*";

        //up 4
        for(int y = desiredNum-1;y>i;--y){
            std::cout << "  ";
        }
        for(int x=0; x<i;++x){
            std::cout << "**";
        }
        std::cout << "*" << std::endl;
    }
    //bottom
    for(int i=0;i<desiredNum-1;++i) {
        //bottom 1
        for(int y = 0;y<i+1;++y){
            std::cout << " ";
        }
        for(int x=desiredNum-2; x>i;--x){
            std::cout << "**";
        }
        std::cout << "*";

        //bottom 2
        for(int y = 0;y<i+1;++y){
            std::cout << "  ";
        }
        for(int x=desiredNum-2; x>i;--x){
            std::cout << "**";
        }
        std::cout << "*";

        //bottom 3
        for(int y = 0;y<i+1;++y){
            std::cout << "  ";
        }
        for(int x=desiredNum-2; x>i;--x){
            std::cout << "**";
        }
        std::cout << "*";

        //bottom 4
        for(int y = 0;y<i+1;++y){
            std::cout << "  ";
        }
        for(int x=desiredNum-2; x>i;--x){
            std::cout << "**";
        }

        std::cout << "*"  << std::endl;
    }
}
void task5() {
    int desiredNum = 0;
    std::cout << "Choose any integer number: ";
    std::cin >> desiredNum;

    for(int i=0;i<desiredNum; ++i){
        for(int y = desiredNum-1;y>i;--y){
            std::cout << " ";
        }
        for(int x=0; x<i;++x){
            std::cout << "* ";
        }
        std::cout << "*" << std::endl;
    }

    for(int i=0;i<desiredNum-1;++i) {
        for(int y = 0;y<i+1;++y){
            std::cout << " ";
        }
        for(int x=desiredNum-2; x>i;--x){
            std::cout << "* ";
        }
        std::cout << "*"  << std::endl;
    }
}

void task6() {
    int desiredNum = 0;
    std::cout << "Choose any integer number: ";
    std::cin >> desiredNum;

    for(int i=0;i<desiredNum;++i) {
        for(int y = desiredNum;y>i;--y){
            std::cout << " ";
        }
            std::cout << "*";
        for(int y = 0;y<i;++y){
                std::cout<<" ";
        }
        for(int k;k<i;++k){
            std::cout<<" ";

        }
        for(int c =2;c < i;++c){
            std::cout<<" ";
        }
        if(i!=0){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for(int i=0;i<desiredNum;++i) {
        for(int y = 0;y<i+1;++y){
            if(i!=0) {
                std::cout << " ";
            }
        }
        if(i!=0) {
            std::cout << "*";
        }
        for(int y = desiredNum;y>i+1;--y){
            if(i!=0) {
                std::cout << " ";
            }
        }
        for(int k=desiredNum;k>i+2;--k){
            if(i!=0) {
                std::cout << " ";
            }
        }
        if(i!=desiredNum-1 && i!=0){
            std::cout << "*";
        }
        if(i!=0){
            std::cout << std::endl;
        }
    }
}
void task7() {

}

int main()
{
    int chosenTask=0;
    std::cout << "Choose task (1-7): ";
    std::cin >> chosenTask;

    switch (chosenTask) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        case 7:
            task7();
            break;
        default:
            std::cout<<"Incorrect input :-(";

    }

    return 0;
}

