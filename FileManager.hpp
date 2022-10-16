#include <iostream>
#include <fstream>
using namespace std;

class FileManager {
  public: 
  FileManager();
  ~Filemanager();

  void open_file(string input_file);  
  string get_line();          
  void put_line(string new_line); 
  void close_files();       
};

FileManager::FileManager() //constructor
{
}

FileManager::~FileManager()  //destructor
{
}
void FileManager::open_file(string file_name){
  fstream input_file;
	input_file.open(file_name, ios::in);
	if (!my_file) {
		cout << "File not found";
	}else {
		char ch;
		while (1) {
			my_file >> ch;
			if (my_file.eof())
				break;
			cout << ch;
		}
	}
	input_file.close();
	return 0;
}  
string FileManager::get_line(){
  
}          
void FileManager::put_line(string){
  
}
void FileManager::close_files(){
  
}