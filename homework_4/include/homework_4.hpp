#ifndef HOMEWORK_4_HPP
#define HOMEWORK_4_HPP

#include <vector>
#include <string>

namespace ipb {
    template <typename T>
    struct named_vector {
        std::string vec_name;
        std::vector<T> vec;

        std::string const name() const {
            return vec_name;
        }

        std::vector<T> const vector(){
            return vec;
        }

        size_t const size(){
            return vec.size() + vec_name.size();
        }

        void const resize(int num_elem){
            vec.resize(num_elem);
        }

        void const reserve(int num_elem){
            vec.reserve(num_elem);
        }

        size_t const capacity(){
            return vec.capacity();
        }


    };
}

#endif
