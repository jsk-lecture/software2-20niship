#include <iostream>


class Withdraw{
private:
  int balance;

public:
  Withdraw(){ balance = 100;  }
  int withdraw(const int amount){
    if(balance >= amount){
      balance -= amount;
      return balance;
    }else{
      return -1;
    }
  }
};

int main(){
  auto w = Withdraw();
  std::cout << "withdraw 25 = " << w.withdraw(25) << std::endl;
  std::cout << "withdraw 25 = " << w.withdraw(25) << std::endl;
  std::cout << "withdraw 60= " << w.withdraw(60) << std::endl;
  std::cout << "withdraw 15= " << w.withdraw(15) << std::endl;
}
