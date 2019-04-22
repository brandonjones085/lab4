#include <string>

//one student, one instructor, 2 buildings

class University
{
  protected:
    std::string name;
    int buildings;
    int people;

  public:
    University();
    University(int, int);
    void printBuildingInfo();
    void printPeopleInfo();
};