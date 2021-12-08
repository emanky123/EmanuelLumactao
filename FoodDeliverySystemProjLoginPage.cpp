#include <iostream>
using namespace std;

class Register{
  public:
    string username, password;
};

class Login{
  public:
    string inpUsername, inpPassword;
};

int main(){
	
	cout <<"========================================= * FOOD DELIVERY SYSTEM * ====================================\n";
	cout <<"========================================= * Login and Registration Page * =============================\n";
  Register newUser;

  cout << "\n( Please Register before Logging in...Thank you! )\n";

  cout << "\nEnter your desired username: ";
  cin >> newUser.username;

  cout << "\nEnter your desired password: ";
  cin >> newUser.password;

  cout << "\n( Successfully Registered your account, Please login below. )\n";


  Login newLogin;

  cout << "\nUsername: ";
  cin >> newLogin.inpUsername;

  cout << "\nPassword: ";
  cin >> newLogin.inpPassword;

  if(newLogin.inpUsername == newUser.username && newLogin.inpPassword == newUser.password){
    cout << "\nSuccessfully logged in, \nloading...";
  } else {
    cout << "Incorrect Username and Password Please Try Again.";
  }


}
