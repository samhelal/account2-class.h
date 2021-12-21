/*9. 3.13 (Removing Duplicated Code in main Function) In
function contains six statements (lines 14–15, 16–17, 26–27, 28–29,
37–38 and 39–40) that each display an Account object’s name and balance .
Study these statements and you’ll notice that they differ only in the
manipulated— account1 or define a new account2 . displayAccount Account
object being In this exercise, you’ll function that contains one copy of
that output statement. The member function’s parameter will be
an Account object and the member function will output the object’s name and balance .
duplicated statements in You’ll then replace the six main with calls to passing as 
an argument the specific Account Modify Fig. 3.9 to define the following after the using
directive and before displayAccount , object to output. displayAccount main :
void displayAccount(Account accountToDisplay) {
// place the statement that displays
// accountToDisplay’s name and balance here
}
functionReplace the comment in the member function’s body with a statement that 
displays accountToDisplay ’s name and balance . Once you’ve completed displayAccount ’s
declaration, modify main to replace the statements that display each name and balance
with calls to displayAccount Account ’s of the form: displayAccount(nameOfAccountObject);
In each call, the argument should be the
account1
or
account2
object, as appropriate. Then, test the updated program to
ensure that it produces the same output as shown in Fig. 3.9. (c++ how to program)*/

#include <string>

class account {
    public :
    account (std::string accountName , int accountBalance):
    name (accountName){
        if(accountBalance > 0){
            balance = balance + accountBalance ;
        }
    }
    void setName( std::string accountName){
        name = accountName ;
    }
    std::string getName() const {
        return name ;
    }
    void deposite(int depositAmount) {
        if(depositAmount>0){
            balance = balance + depositAmount ;
        }
    }
    void withdraw ( int withdrawAmount ){
        if (withdrawAmount <=balance){
            balance = balance - withdrawAmount ;
        }
    }
    
    int getBalance () const {
        return balance ;
    }

    std::string displayAccount(){

        return getName()+ " " + std::to_string(getBalance()) ;
    }


    private :
    std::string name ;
    int balance{0} ;
};