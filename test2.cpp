// #include <iostream>
// using namespace std;

// class adder{
//     string str;
// public:
//     adder(){}
//     adder(string s){str = s;}
//     ~adder(){}
//     void add(string s){
//         str.append(s);
//         cout<<str;
//     }
//     // void print_add(initializer_list<string> s){
//     //     string n =" ";
//     //     for(int i=0; i<s.size(); i++){
//     //         s[0].add(n).add(s[i]).add(n);
//     //     }
//     //     cout<<s[0];
//     // }
// };

// int main(){
//     adder s("banana");
    
//     s.add("wow").add("oh");
    
//     adder y;
//     // y.print_add({"LoveLee","ive","itzy"});
// }

#include <iostream>
#include <string>

class StringConcatenator {
private:
    std::string result;

public:
    StringConcatenator(const std::string& initialString) {
        result = initialString;
    }

    StringConcatenator add(const std::string s) {
        StringConcatenator newConcatenator(result + s);
        return newConcatenator;
    }

    std::string getResult() const {
        return result;
    }
};

void print_add(const std::string& initialString) {
    StringConcatenator concatenator(initialString);
    StringConcatenator concatenated = concatenator.add("LoveLee").add("ive").add("itzy");
    std::cout << concatenated.getResult() << std::endl;
}

int main() {
    print_add("abc");

    return 0;
}

