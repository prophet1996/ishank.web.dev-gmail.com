#ifndef HTML_ELEMENTS
#define HTML_ELEMENTS

#define p(text) std::printf("<p>%s</p>\n", text)
#define h(number, text) std::printf("<h%d>%s</h%d>\n", number, text, number)
#endif