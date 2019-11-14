#include <iostream>

int readNum(){
    int num = 0;
    std::cout << "Give me a number plz.";
    std::cin >> num;
    return num;
}

void printNum(int x){
    std::cout << x << std::endl;
}

int doubleNum(int x){
    return x*2;
}

int main()
{
    int number = readNum();
    int doubleNumber = doubleNum(number);
    printNum(doubleNumber);
	return 0;
}
