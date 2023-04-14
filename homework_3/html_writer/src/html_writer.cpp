#include <iostream>
#include <html_writer.hpp>


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

int main()
{
    html_writer::OpenDocument();
    html_writer::AddTitle("Image Browser");
    html_writer::AddCSSStyle("style.css");
    html_writer::CloseDocument();
}

