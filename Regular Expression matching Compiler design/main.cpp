#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main () {

if (regex_match ("CompilerDesign", regex("(Compiler)(.*)") ))
      cout << "Matched\n";

   const char mystr[] = "CompilerDesignCourse";
   string str ("CompilerDesign");
   regex str_expr ("(Compiler)(.*)");

   if (regex_match (str,str_expr))
      cout << "String object is matched\n";

   if ( regex_match ( str.begin(), str.end(), str_expr ) )
      cout << "string range(begin-end) is matched\n";
   cmatch cm;
   regex_match (mystr,cm,str_expr);
   smatch sm;
   regex_match (str,sm,str_expr);
   regex_match ( str.cbegin(), str.cend(), sm, str_expr);
   cout << "String:range, size:" << sm.size() << " matches\n";
   regex_match ( mystr, cm, str_expr, regex_constants::match_default );
   cout << "the matches are: ";
   for (unsigned i=0; i<sm.size(); ++i) {
      cout << "[" << sm[i] << "] ";
   }
   cout << endl;
   return 0;
}

