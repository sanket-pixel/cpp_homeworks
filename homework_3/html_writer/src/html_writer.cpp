#include <iostream>
#include <html_writer.hpp>
#include <string>

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
    std::cout << "<link rel=\"stylesheet\" type=\"text/css\" href=\"" << stylesheet << "\"/>" << std::endl;
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
    std::cout << "<row>" << std::endl;
}

void html_writer::CloseRow()
{
    std::cout << "</row>" << std::endl;
}

void html_writer::AddImage(const std::string& img_path, float score, bool highlight)
{
    std::cout <<  "<div class=\"column\">" << std::endl;
    std::size_t found = img_path.find_last_of("/");
    std::cout << "<h2>" << img_path.substr(found+1)  << "</h2>" << std::endl;
    std::cout << "<img src=\"" << img_path <<  "/>" << std::endl;
    std::cout << "<p>score =" << score << "</p>" << std::endl;
    std::cout << "</div>" << std::endl;

}

int main()
{
    html_writer::OpenDocument();
    html_writer::AddTitle("Image Browser");
    html_writer::AddCSSStyle("style.css");
    html_writer::AddImage("/home/motor-ai/workstation/cpp_homeworks/homework_3/web_app/data/000000.png", 0.75, false);
    html_writer::CloseDocument();
}

