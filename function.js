function prompter(num) {
    var num = document.getElementById('perfect').value;
    sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        alert("It is a perfect number")
    }
    else {
        alert("It is not a perfect number")
    }
}
function factor(fact) {
    var numb = document.getElementById('fact').value;
     i = 1;
    f = 1;
    do {
        f=f*i;
        i++;
    }
    while (i<=numb) ;
    alert(f)


}
function fibonac(fib)
{
let t1=0;
let t2=1;
let t3;
var numa = document.getElementById('fib').value;
while(numa>=0){
t3=t1+t2;
t1=t2;
t2=t3;
document.write(t3+"</br></br>")
numa--;
}
}
function gender()
{
    var gend = document.getElementById('gend').value; 
    if(gend=='male' || gend=='MALE')
    {
        alert("You are male")
    } 
    else if (gend=='female' || gend=='FEMALE'){
        alert("You are Female")
    }
    else
    {
        alert("Invalid Gender")
    }
}
function genderswitch()
{
    var gender = document.getElementById('gend').value; 
    switch(gender)
{
    case 'male' :
        alert("You are male")
        break;
        case 'MALE' :
            alert("You are male")
            break;
            case 'female' :
            alert("You are female")
            break;
            case 'FEMALE' :
            alert("You are female")
            break;
}
}