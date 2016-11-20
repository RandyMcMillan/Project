#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string.h>
#include <iostream>

#include "DataObject.hpp"

class DataObject;

class Department
{
public:
  Department (int myId, std::string myName, DataObject* myDataObject);
  Department (DataObject* myDataObject);
  virtual ~Department ();

  std::string getName ();
  int getDepartmentId ();

private:
  int departmentId;
  std::string name;
  DataObject* dataObject;
  friend std::ostream& operator<< (std::ostream& out, Department& me);
  friend std::istream& operator>> (std::istream& out, Department& me);
};


#endif /* DEPARTMENT_H */
