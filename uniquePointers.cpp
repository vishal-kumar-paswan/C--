#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User
{
public:
    User()
    {
        cout << "User Created!!" << endl;
    }
    ~User()
    {
        cout << "User Deleted!!" << endl;
    }
    void testFunc()
    {
        cout << "Test Function!" << endl;
    }
};

int
main()
{

    {   // Method - 1
        // unique_ptr<User> vishal(new User());

        // Method - 2
        unique_ptr<User> vishal = make_unique<User>();
        vishal->testFunc();

        //This is not allowed
        // unique_ptr<User> sonu = vishal;  //it will throw an error because it is calling to a implicitly deleted copy constructor of 'unique_ptr'
    }

    cout << "Outside Code!" << endl;

    return 0;
}