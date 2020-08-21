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

    // {   // Method - 1
    //     // unique_ptr<User> vishal(new User());

    //     // Method - 2
    //     unique_ptr<User> vishal = make_unique<User>();
    //     vishal->testFunc();

    //     //This is not allowed
    //     // unique_ptr<User> sonu = vishal;  //it will throw an error because it is calling to a implicitly deleted copy constructor of 'unique_ptr'
    // }

    {
        // Method - 1 // Bad Practice 
        // shared_ptr<User> tim (new User());

        // Method - 2 //Good Practice
        shared_ptr<User> tim = make_shared<User>();
        shared_ptr <User> tom = tim;
        tom->testFunc();
    }

    cout << "Outside Code!" << endl;

    return 0;
}