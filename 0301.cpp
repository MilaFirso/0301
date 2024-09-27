#include <iostream>
#include "smart_array.h"

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");

    system ("chcp 1251");

    try {

        smart_array arr(5);
        arr.addElement(1);
        arr.addElement(4);
        arr.addElement(155);
        arr.addElement(14);
        arr.addElement(15);
        arr.printSmartArray();
        std::cout << arr.getElement(4) << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}