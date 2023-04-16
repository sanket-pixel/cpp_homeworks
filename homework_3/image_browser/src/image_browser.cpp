#include <iostream>
#include <html_writer.hpp>
#include <image_browser.hpp>


void image_browser::AddFullRow(const ImageRow& row, bool first_row ){
     
    html_writer::OpenRow();
    for (auto const& [str,val]:row){
        html_writer::AddImage(str,val);
    }
}

void image_browser::CreateImageBrowser(const std::string& title, const std::string& stylesheet,
                                        const std::vector<ImageRow>& rows){
    
    html_writer::OpenDocument();
    html_writer::AddTitle(title);
    html_writer::AddCSSStyle(stylesheet);
    html_writer::OpenBody();
    std::size_t i = 0;
    for (auto const& row: rows)
    {
        html_writer::OpenRow();
        std::size_t j = 0;
        for(auto const& [img_path,score]: row){
            if(i==0 && j==0){
                html_writer::AddImage(img_path,score,true);

            }else{
                html_writer::AddImage(img_path,score);

            }
            j++;
        }
        html_writer::CloseRow();
        i++;
    }
    
    html_writer::CloseBody();
    html_writer::CloseDocument();

}





