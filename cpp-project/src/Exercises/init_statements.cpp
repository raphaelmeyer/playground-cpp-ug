
#include <map>
#include <string>
#include <iostream>

using namespace std::string_literals;

struct address_t {
    std::string street;
    unsigned plz;
    std::string city;
};

int main() {

    std::map<std::string, address_t> address_book;

    const auto hans = "Hans Meister"s;
    const auto hans_address = address_t{"Maihofstrasse 49"s, 6000u, "Luzern"s};
    const auto [elem, inserted] = address_book.insert({hans, hans_address});

    std::cout << "inserted = " << inserted << std::endl;
    std::cout << "name = " << elem->first << std::endl;
    std::cout << "address = " << elem->second.street << ", "
              << elem->second.plz << ", "
              << elem->second.city << std::endl;

    auto it = address_book.find(hans);
    if (it != address_book.end()) {
        std::cout << hans << " is in address book\n";
    }

    const auto peter = "Peter Müller"s;
    it = address_book.find(peter);
    if (it == address_book.end()) {
        std::cout << peter << " is not in address book\n";
    }

    const auto peter_address = address_t{"Langstrasse 49"s, 8000u, "Zürich"s};
    const auto [second_elem, second_insert] = address_book.insert({peter, peter_address});

    if (second_insert) {
        std::cout << "Inserted " << second_elem->first << std::endl;;
    } else {
        std::cout << "Did not insert " << second_elem->first << std::endl;;
    }

    const auto [third_elem, third_insert] = address_book.insert({peter, peter_address});

    if (third_insert) {
        std::cout << "Inserted " << third_elem->first << std::endl;;
    } else {
        std::cout << "Did not insert " << third_elem->first << std::endl;;
    }

    for(const auto& [name, address] : address_book)
    {
        std::cout << "\n name = " << name << std::endl;
        std::cout << " address = " << address.street << ", "
                  << address.plz << ", "
                  << address.city << std::endl;
    }
}



