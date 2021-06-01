#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    map<std::string, int> mp{{"a",1},{"b",2},{"c",3},{"d",4}};
    std::cout << "-- MAP output ING --" << std::endl;
    for (auto p : mp){
      // not empty checking
      if (mp.empty() ){
        std::cout<<"MAP is Empty"<<std::endl;
        break;
      }
      std::cout <<p.first<< " : " <<p.second<<std::endl;
    }
    std::cout << "-- MAP output END --" << std::endl;
    return 0;
}
