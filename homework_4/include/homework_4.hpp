
#ifndef HOMEWORK_4_HPP
#define HOMEWORK_4_HPP
#include <vector>
#include <string>

namespace ipb{

    template <typename T>
    struct named_vector {
        std::string vec_name;
        std::vector<T> vec;

        std::string const name();

        std::vector<T> const vector();
    };
}
#endif