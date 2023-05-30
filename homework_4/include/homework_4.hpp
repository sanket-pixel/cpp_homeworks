
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

        size_t const size();

        bool const empty();

        void const reserve(size_t s);

        void const resize(size_t s);

        size_t const capacity();


    };
    template struct named_vector<float>;
}
#endif