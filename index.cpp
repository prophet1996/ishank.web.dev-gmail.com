#include <iostream>
#include <string>
#include <stdlib.h>
#include "htmlElements.h"

using namespace std;

void set_content_type(string content_type)
{
    cout << "Content-type:" << content_type << "\r\n\r\n";
}

void set_page_title(string title)
{
    cout << "<title>" << title << "</title>\n";
}

void h1_text(string text)
{
    cout << text << "\n";
}

void form()
{
    const char *text = "<form></form>";
}

int main()
{
    set_content_type("text/html");

    // Output HTML boilerplate
    cout << "<!doctype html>";
    cout << "<html lang=\"en\">\n";
    cout << "<head>\n";
    set_page_title("Hello, world!");
    cout << "</head>";
    cout << "<body>\n";
    cout << h(1, "bruh1");

    cout
        << p("This is from another file");

    cout
        << "</body>\n";
    cout << "</html>";
}
