#include <iostream>
#include <html_writer.hpp>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

void html_writer::OpenDocument()
{
    std::cout << "<!DOCTYPE html>" << std::endl;
    std::cout << "<html>" << std::endl;
}

void html_writer::CloseDocument()
{
    std::cout << "</html>" << std::endl;
}

void html_writer::AddCSSStyle(const std::string& stylesheet)
{
    std::cout << "<head>" << std::endl;
    std::cout << "<link rel=\"stylesheet\" type=\"text/css\" href=\"" << stylesheet << "\"/>" << std::endl;
    std::cout << "</head>" << std::endl;

}

void html_writer::AddTitle(const std::string& title)
{
    std::cout << " <title>" << title << "</title>" << std::endl;
}

void html_writer::OpenBody()
{
    std::cout << "<body>" << std::endl;
}

void html_writer::CloseBody()
{
    std::cout << "</body>" << std::endl;
}

void html_writer::OpenRow()
{
    std::cout << "<div class=\"row\">" << std::endl;
}

void html_writer::CloseRow()
{
    std::cout << "</div>" << std::endl;
}

std::string html_writer::getFileExtension(const std::string& img_path){
    std::istringstream filepathstream(img_path);
    std::vector<std::string> tokens;
    std::string token, lastToken;
    while(std::getline(filepathstream, token, '.')){
        lastToken = token;
    }
    return lastToken;
}

std::string html_writer::getFileName(const std::string& img_path){
    std::istringstream filepathstream(img_path);
    std::vector<std::string> tokens;
    std::string token, lastToken;
    while(std::getline(filepathstream, token, '/')){
        lastToken = token;
    }
    return lastToken;
}

void html_writer::AddImage(const std::string& img_path, float score, bool highlight)
{
    std::string ext = html_writer::getFileExtension(img_path);
    if(ext !="png" && ext != "jpg" ){
        std::cerr << "Only .png or .jpg image files are supported.";
    }else{
         if(highlight){
                std::cout <<  "<div class=\"column\" style=\"border: 5px solid green;\">" << std::endl;
            }else{
                std::cout <<  "<div class=\"column\">" << std::endl;
            }
            std::string filename = html_writer::getFileName(img_path);
            std::cout << "<h2>" << filename << "</h2>" << std::endl;
            std::cout << "<img src=\"" << img_path <<  "\"/>" << std::endl;
            std::cout << "<p>score =" << std::setprecision(2) << std::fixed << score << "</p>" << std::endl;
            std::cout << "</div>" << std::endl;
    }
   
}

// int main()
// {
//     html_writer::OpenDocument();
//     html_writer::AddTitle("Image Browser");
//     html_writer::AddCSSStyle("style.css");
//     html_writer::AddImage("/home/motor-ai/workstation/cpp_homeworks/homework_3/web_app/data/000000.png", 0.755423, true);
//     html_writer::CloseDocument();
// }

