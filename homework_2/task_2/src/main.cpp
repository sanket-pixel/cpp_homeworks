#include <iostream>
#include <sstream>
using namespace std;


int main(int argc, char** argv){

    if(argc!=3){

        std::cerr << argc << " inputs were provided. Please provide only 2 inputs";
        return 1;
    }
    stringstream filename1{argv[1]};
    int num1=0;
    string ext1;

    filename1 >> num1 >> ext1;

    stringstream filename2{argv[2]};
      int num2=0;
    string ext2;

    float final_num = 0.0;
    filename2 >> num2 >> ext2;

    if( ext1 == ".txt" && ext2 == ".txt"){
        final_num = (num1 + num2)/2.0;
    } else if( ext1 == ".png" && ext2 == ".png"){
         final_num = (num1 + num2);
    } else  if( ext1 == ".txt" && ext2 == ".png"){
         final_num = (num1 % num2);
    } else {
        cerr << "The file extension is incorrect";
        return 1;
    }
    cout << final_num;
    return 0;


}