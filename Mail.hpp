#include <iostream>
#include <fstream>
using namespace std;

class Mail {
  Mail();
  ~Mail();
	public:
    void send_files(string file_names, int num_processes);  
  	void receive_line(string file_name, int process, int num_errors);          
        

  private:

};

Mail::Mail() //constructor
{
}

Mail::~Mail()  //destructor
{
}

void Mail::send_files(string file_names, int num_processes){
  
}

void Mail::receive_line(string file_name, int process, int num_errors){
  
}