#include <iostream>
#include <array>
#include <string>
#include <functional>
#include <algorithm>
struct student
{
    std::string name{};
    short grade{};
};

int main()
{  
 
std::array<student,8> arr{
    { {"Albert", 3},
      {"Ben", 5},
      {"Christine", 2},
      {"Dan", 8},
      {"Enchilada", 4},
      {"Francis", 1},
      {"Greg", 3},
      {"Hagrid", 5}}
};
  



const auto best{std::max_element(arr.begin(),arr.end(), [] (const auto& a, const auto& b)
{
    return (a.grade < b.grade);

}


)};
std::cout << best->name << " is the best student \n";
std::cout << "git \n";

    return 0;
}