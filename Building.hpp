
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