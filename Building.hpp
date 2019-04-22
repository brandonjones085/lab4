#include "University.hpp"

#include <string>

class Building : public University
{
  protected:
    std::string buildingName;
    std::string address;
    int size;

  public:
    Building();
    Building(std::string, std::string, int);
};