#include <homework_4.hpp>

// template struct ipb::named_vector<float>;

template<typename T>
std::string const ipb::named_vector<T>::name(){
    return vec_name;
}

template<typename T>
std::vector<T> const ipb::named_vector<T>::vector(){
    return vec;
}