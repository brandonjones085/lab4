#ifndef BUILDING_HPP
#define BUILDING_HPP

#include <string>

class Building
{
  private:
    std::string buildingName;
    std::string address;
    int size;

  public:
    Building();
    Building(std::string, std::string, int);
    void getBuildingName();
    void getAddress();
    void getSize();
};

#endif