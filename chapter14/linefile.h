#define STR(x) #x
#define XSTR(x) STR(x)
//#define LINE_FILE "Line " XSTR(__LINE__) " of " __FILE__
#define LINE_FILE "Line " STR(__LINE__) " of " __FILE__