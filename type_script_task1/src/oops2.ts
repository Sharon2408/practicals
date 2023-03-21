
abstract class Customer {
    CustomerName : string
    Age: number
    Address : string
    ContactNumber : number

    constructor(CustomerName : string,Age: number,Address : string,ContactNumber : number){

this.CustomerName=CustomerName
this.Age=Age
this.Address=Address
this.ContactNumber=ContactNumber
}

public Display(): void {
    console.log(`CustomerName = ${this.CustomerName} `)
    console.log(`Age = ${this.Age}`)
    console.log(`Address = ${this.Address}`)
    console.log(`ContactNumber = ${this.ContactNumber}`)
}

}
class Loan extends Customer{

    LoanAccountNo : number
    LoanType : string
    LoanAmount : number
    Duration: number
    InterestRate : number
   

    constructor(CustomerName : string,Age: number,Address : string,ContactNumber : number,LoanAccountNo : number,LoanType : string,LoanAmount : number,Duration: number,InterestRate : number
    ){
        super(CustomerName ,Age,Address,ContactNumber)
this.LoanAccountNo=LoanAccountNo
this.LoanType=LoanType
this.LoanAmount=LoanAmount
this.Duration=Duration
this.InterestRate=InterestRate


    }
    public Display(): void {
        super.Display()
        console.log(`Loan AccountNO: ${this.LoanAccountNo}`)
        console.log(`Loan Type : ${this.LoanType}`)
        console.log(`Loan Amount : ${this.LoanAmount}`)
        console.log(`Loan Duration : ${this.Duration}`)
        console.log(`Intrest Rate : ${this.InterestRate}`)

        }
        public InterestCalculate(LoanAmount:number,InterestRate: number):any{
            LoanAmount  = LoanAmount*InterestRate
            console.log(`Your Calculated intrest Amount is : `+ LoanAmount)
            
        }
    }
let l = new Loan('Sharon',22,'India',95957,1234,'Education',120000,5,2)
l.Display()
l.InterestCalculate(120000,2)