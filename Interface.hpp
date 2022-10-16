#include <iostream>
#include <fstream>
#include "FileChecker.hpp"
using namespace std;

class Interface {
	public:
  Interface();
  ~Interface();
  void get_files();  
  void show_errors();      

  private:

};

Interface::Interface() //constructor
{
}

Interface::~Interface()  //destructor
{
}

void Interface::get_files(){
  cout<<"Add files to inspect";
  
}  
void Interface::show_errors(){
  FileChecker filecheck;
  
  cout<<"The amount of errors found globaly is" << filecheck.errors_found();
}