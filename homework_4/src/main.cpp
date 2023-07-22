#include <include/homework_4.hpp>
#include <include/ipb_algorithm.hpp>
#include <iostream>
int main() {
    ipb::named_vector<int> intVector;
    intVector.vec_name = "int";
    intVector.vec = {-2, 6, 4, 8};

   
    // You can access the members of the struct like this:
    std::cout << intVector.name() << std::endl;
    for (int val : intVector.vector()) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    std::cout << "Size of int : " <<intVector.size() << std::endl;

    std::cout << "Sum of all ints : " << ipb::accumulate(intVector) << std::endl;

    std::cout << "Count of 1's : " << ipb::count(intVector, 1) << std::endl;

    std::cout << "Are all numbers Even? : " << ipb::all_even(intVector) << std::endl;

    // auto a = ipb::clamp(intVector, 0,6);
    // std::cout << "Clamped : " << a.vec.at(0)  << std::endl;

    // ipb::fill(intVector, 33);
    // for(int val:intVector.vector()){
    //     std::cout << val << " ";
    // }
    // std::cout << std::endl;

    std::cout << "Is 30 in the container? " << ipb::find(intVector, 30) << std::endl;

    ipb::print(intVector);

    ipb::toupper(intVector);
    std::cout << intVector.name() << std::endl;

    ipb::sort(intVector);
    ipb::print(intVector);


    ipb::rotate(intVector,2);
    ipb::print(intVector);

    ipb::reverse(intVector);
    ipb::print(intVector);









    return 0;
}
