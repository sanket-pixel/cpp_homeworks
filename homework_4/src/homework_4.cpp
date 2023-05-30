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

template<typename T>
size_t const ipb::named_vector<T>::size(){
    return vec.size() + vec_name.size();
}

template<typename T>
bool const ipb::named_vector<T>::empty(){
    return (vec.empty() || vec_name.empty());
}

template<typename T>
void const ipb::named_vector<T>::reserve(size_t s){
    vec.reserve(s);
}

template<typename T>
void const ipb::named_vector<T>::resize(size_t s){
    vec.resize(s);
}

template<typename T>
size_t const ipb::named_vector<T>::capacity(){
    return vec.capacity();
}
