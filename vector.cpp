#include <iostream>
#include <vector>

int main()
{
    std::cout << "Vector from initalizer list: " <<std::endl;
    std::vector<int> vi1 = {1, 2, 3, 4, 5, 6, 20};

    std::cout << "Size: " << vi1.size() << std::endl;
    std::cout << "Front: " << vi1.front() << std::endl;
    std::cout << "Back: " << vi1.back() << std::endl;

    // Iterator
    /*
    std::vector<int>::iterator itbegin = vi1.begin();
    std::vector<int>::iterator itend = vi1.end();

    for(auto it = itbegin; it< itend; ++it)
    {
        std::cout << *it << '  ' ;
    }
    */

    for(auto it = vi1.begin(); it< vi1.end(); ++it)
    {
        std::cout << *it <<  " " ;
    }
    std::cout << std::endl;

    std::cout << "Element at 5: " << vi1[5] << std::endl;
    std::cout << "Element at 5: " << vi1.at(5) << std::endl;

    for(int i : vi1)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    std::cout << "insert 42 at begin + 5: " << std::endl;
    vi1.insert(vi1.begin() +5, 42);
    std::cout << "Size: " << vi1.size() << std::endl;
    std::cout << "vi1[5]: " << vi1[5] << std::endl;

    std::cout << "erase at begin + 5: " << std::endl;
    vi1.erase(vi1.begin() +5);
    std::cout << "Size: " << vi1.size() << std::endl;
    std::cout << "vi1[5]: " << vi1[5] << std::endl;

    std::cout << "Push back" << std::endl;
    vi1.push_back(30);
    std::cout << "Size: " << vi1.size() << std::endl;
    std::cout << "vi1.back(): " << vi1.back() << std::endl;

    // from C-array
    const static size_t size = 10;
    int ia[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    std::cout << "vector from C-array: " << std::endl;
    std::cout << "ia: " << ia << ", size: " << size << ", ia + size:" << (ia + size) << std::endl;
    std::vector<int> vi2(ia, ia + size);
    std::cout << "vi2.begin() :" << *vi2.begin() << std::endl;


    // string vector
    std::cout << "vector of strings" << std::endl;
    std::vector<std::string> vs = {"One", "Two", "Three", "Four", "Five"};
    for(const std::string & v : vs)
    {
        std::cout << v <<std::endl;
    }
    return 0;
}