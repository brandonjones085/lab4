
#include <string>

class Person
{
  protected:
    std::string personName;
    int personAge;

  public:
    Person();
    Person(std::string, int);
    virtual void doWork();
    void printName();
    void printAge();
};