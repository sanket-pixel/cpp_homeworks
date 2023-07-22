#include <include/homework_4.hpp>
#include <iostream>
#include <numeric> 
#include <algorithm> 
#include <vector>
#include <cctype> 

namespace ipb{

    bool isEven(int number) {
    return number % 2 == 0;
    }

    template <typename T>
    T accumulate(ipb::named_vector<T> nv){
        return std::accumulate(nv.vec.begin(), nv.vec.end(),0);
    }

    template <typename T>
    T count(ipb::named_vector<T> nv, T target){
        return std::count(nv.vec.begin(), nv.vec.end(),target);
    }

    //std::all_of(vec.begin(), vec.end(), isEven);
    template <typename T>
    bool all_even(ipb::named_vector<T> nv){
        return std::all_of(nv.vec.begin(), nv.vec.end(),isEven);
    }

    template <typename T>
    ipb::named_vector<T> clamp(ipb::named_vector<T> nv, T minVal, T maxVal){
        auto clampLambda = [=](int value){
            return std::clamp(value, minVal, maxVal);
        };
        std::transform(nv.vec.begin(), nv.vec.end(), nv.vec.begin(), clampLambda);
        return nv;
    }

    template <typename T>
    ipb::named_vector<T>& fill(ipb::named_vector<T>& nv, T fillVal){
        std::fill(nv.vec.begin(), nv.vec.end(), fillVal);
        return nv;
    }

    template <typename T>
    bool find(ipb::named_vector<T> nv, T searchVal){
        auto it = std::find(nv.vec.begin(), nv.vec.end(), searchVal);
        return (it != nv.vec.end());
    }

    template <typename T>
    void print(ipb::named_vector<T> nv){
        std::cout << nv.name() << " : ";
        for(T val : nv.vec){
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    template <typename T>
    void toupper(ipb::named_vector<T>& nv){

        auto toUpperLambda = [](char c){
            return std::toupper(c);
        };

        std::transform(nv.vec_name.begin(), nv.vec_name.end(), nv.vec_name.begin(), toUpperLambda);
        
    }

    template <typename T>
    void sort(ipb::named_vector<T>& nv){
        std::sort(nv.vec.begin(), nv.vec.end());
    }

    template <typename T>
    void rotate(ipb::named_vector<T>& nv, int num_positions){
        std::rotate(nv.vec.begin(), nv.vec.begin() + num_positions,  nv.vec.end());
    }

     template <typename T>
    void reverse(ipb::named_vector<T>& nv){
        std::reverse(nv.vec.begin(), nv.vec.end());
    }





}