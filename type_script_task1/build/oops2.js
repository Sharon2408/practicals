"use strict";
class Customer {
    constructor(CustomerName, Age, Address, ContactNumber) {
        this.CustomerName = CustomerName;
        this.Age = Age;
        this.Address = Address;
        this.ContactNumber = ContactNumber;
    }
    Display() {
        console.log(`CustomerName = ${this.CustomerName} `);
        console.log(`Age = ${this.Age}`);
        console.log(`Address = ${this.Address}`);
        console.log(`ContactNumber = ${this.ContactNumber}`);
    }
}
class Loan extends Customer {
    constructor(CustomerName, Age, Address, ContactNumber, LoanAccountNo, LoanType, LoanAmount, Duration, InterestRate) {
        super(CustomerName, Age, Address, ContactNumber);
        this.LoanAccountNo = LoanAccountNo;
        this.LoanType = LoanType;
        this.LoanAmount = LoanAmount;
        this.Duration = Duration;
        this.InterestRate = InterestRate;
    }
    Display() {
        super.Display();
        console.log(`Loan AccountNO: ${this.LoanAccountNo}`);
        console.log(`Loan Type : ${this.LoanType}`);
        console.log(`Loan Amount : ${this.LoanAmount}`);
        console.log(`Loan Duration : ${this.Duration}`);
        console.log(`Intrest Rate : ${this.InterestRate}`);
    }
    InterestCalculate(LoanAmount, InterestRate) {
        LoanAmount = LoanAmount * InterestRate;
        console.log(`Your Calculated intrest Amount is : ` + LoanAmount);
    }
}
let l = new Loan('Sharon', 22, 'India', 95957, 1234, 'Education', 120000, 5, 2);
l.Display();
l.InterestCalculate(120000, 2);
