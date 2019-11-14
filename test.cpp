#include <iostream>

std::string garble(std::string x, std::string y, std::string z){

    return z+"\n";

}

int main(){

    std::cout << garble("test","ytest","i");

    return 0;
}
