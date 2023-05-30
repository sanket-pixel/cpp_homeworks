#include <homework_4.hpp>
#include <iostream>

int main(){
    ipb::named_vector<float> my_vector;
    my_vector.vec.push_back(0.1);
    my_vector.vec_name = "abc";
    std::cout << "Name of my vector "  << my_vector.name() << std::endl;
    std::cout << "Size " << my_vector.size() << std::endl;
    std::cout << "Empty  " << my_vector.empty() << std::endl;
    std::cout << "Size " << my_vector.size() << std::endl;

}