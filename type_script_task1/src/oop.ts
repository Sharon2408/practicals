interface SavingsAccount{
c_name : string,
c_no : number
Balance(balance:number, intrest?:number):any

}

interface CurrentAccount {
    c_name : string,
    c_no : number
    Balance(balance:number, intrest?:number):any
}

class Account implements SavingsAccount,CurrentAccount{

  public  c_name: string;
   public c_no: number;

constructor(c_name: string,c_no: number){
    this.c_name=c_name;
    this.c_no=c_no;
}
 
Balance(balance:number, intrest?:number): any{

    if(intrest != null){
        balance = intrest*balance;
          console.log(" Your Account type is Savings Account ")
          console.log(`Your Name ${this.c_name}`)
          console.log(`Your ID ${this.c_no}`)
          console.log('Your Balance is' + balance )

    }
    else{
        console.log(" Your Account type is Current Account ")
    }

}
}
let s : SavingsAccount = new Account('Sharon',110021)
s.Balance(1000,4)
let c : CurrentAccount = new Account('Sharon',110021)
c.Balance(1000)