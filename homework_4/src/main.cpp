#include <include/homework_4.hpp>
#include <iostream>
int main() {
    ipb::named_vector<int> intVector;
    intVector.vec_name = "int";
    intVector.vec = {1, 2, 3, 4};

    ipb::named_vector<double> doubleVector;
    doubleVector.vec_name = "double";
    doubleVector.vec = {1.1, 2.2, 3.3, 4.4, 5.5};

    // You can access the members of the struct like this:
    std::cout << intVector.name() << std::endl;
    for (int val : intVector.vector()) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of int : " <<intVector.size() << std::endl;

    std::cout << doubleVector.name() << std::endl;
    for (double val : doubleVector.vector()) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of double : " << doubleVector.size() << std::endl;

    return 0;
}
