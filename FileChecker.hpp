#include <iostream>
#include <fstream>
using namespace std;

class FileChecker {
  public:
  FileChecker();
  ~FileChecker();

  void check_file(string file_name);  
  string check_line((string line);          
  int errors_found();
  
  private:
   int error_count
  
};

FileChecker::FileChecker() //constructor
{
}

FileChecker::~FileChecker()  //destructor
{
}

void FileChecker::check_file(string file_name){
  check_line("");
}  
string FileChecker::check_line((string line){
  char ch = ';' ;
  int count = count(line.begin(), line.end(), ch1); //count times ch is found
  
  if(count!=1){
    //write ; at the end 
  }
int FileChecker::errors_found(){ //sends errors to interface
  int errors_found = error_count;
  return errors_found;
}
}