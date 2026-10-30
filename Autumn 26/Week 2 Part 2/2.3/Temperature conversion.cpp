#include <iostream>
#include <string>
int main(){
double Temp_in, Temp_out;
bool valid = true;
std::string unit_in, unit_out;
std::cin >> Temp_in >> unit_in;
//input
  if((unit_in == "C") || (unit_in == "c")){
    unit_out = "F";
    Temp_out = (Temp_in * 9/5) + 32;
  }
  else if((unit_in == "F") || (unit_in == "f")){
    unit_out = "C";
    Temp_out = (Temp_in - 32) * 5/9;
  }
  else{
    valid = false;
  }
  //processing
  if(valid){
    std::cout << Temp_out << " " << unit_out << std::endl;
  }
  else{
    std::cout << "Error, unit not recognized" << std::endl;
  }
}