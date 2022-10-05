#include <any>
#include <functional>
#include <iostream>
#include <map>
#include <string>
#include <vector>

int main(int argc, char **argv) {
  using namespace std;


    map < string, function<double(vector<double>)> > my_functions;
    my_functions["add"] = [](vector<double> arg) {return arg.at(0) + arg.at(1);};
    my_functions["sin"] = [](vector<double> x) {return x.at(0);};
  return 0;
}