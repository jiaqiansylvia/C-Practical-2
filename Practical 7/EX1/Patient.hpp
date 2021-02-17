#ifndef Patient_hpp
#define Patient_hpp

#include <iostream>
#include <stdio.h>  
#include <vector>
#include "Blood.hpp"
#include "Date.hpp"

using namespace std;

class Patient{
protected:
  string name;
  vector<Blood> table;
public:
  Patient(string );
  void addRecord(Blood);
  void print ();
  void printReport();
};
#endif
