"use strict";
class Account {
    constructor(c_name, c_no) {
        this.c_name = c_name;
        this.c_no = c_no;
    }
    Balance(balance, intrest) {
        if (intrest != null) {
            balance = intrest * balance;
            console.log(" Your Account type is Savings Account ");
            console.log(`Your Name ${this.c_name}`);
            console.log(`Your ID ${this.c_no}`);
            console.log('Your Balance is' + balance);
        }
        else {
            console.log(" Your Account type is Current Account ");
        }
    }
}
let s = new Account('Sharon', 110021);
s.Balance(1000, 4);
let c = new Account('Sharon', 110021);
c.Balance(1000);
