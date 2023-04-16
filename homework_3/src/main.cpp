#include <iostream>
#include <image_browser.hpp>
#include <html_writer.hpp>
#include <iostream>
#include <vector>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;
int main() {
    
    string directory_path = "data/";
    image_browser::ImageRow row_1 = {{
        {directory_path+"000000.png", 0.80f},
        {directory_path+"000100.png", 0.90f},
        {directory_path+"000200.png", 0.60f}
    }};
    image_browser::ImageRow row_2 = {{
        {directory_path+"000300.png", 0.80f},
        {directory_path+"000400.png", 0.80f},
        {directory_path+"000500.png", 0.80f}
    }};
    image_browser::ImageRow row_3 = {{
        {directory_path+"000600.png", 0.80f},
        {directory_path+"000700.png", 0.80f},
        {directory_path+"000800.png", 0.80f}
    }};

    const std::vector<image_browser::ImageRow>& rows{
        row_1, row_2, row_3
    };

    image_browser::CreateImageBrowser("Image Browser","style.css",rows);

}