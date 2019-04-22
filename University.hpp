#include <string>

class University
{
  protected:
    std::string name;
    int buildings;
    int people;

  public:
    University();

    void printBuildingInfo();
    void printPeopleInfo();
};