function prompter(num) {
    var num = document.getElementById('perfect').value;
    sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        document.write("It is a perfect number")
    }
    else {
        document.writeln("It is not a perfect number")
    }
}
function factor(fact) {
    var numb = document.getElementById('fact').value;
    i = 1;
    f = 1;
    do {
        f = f * i;
        i++;
    }
    while (i <= numb);
    document.writeln(f)


}
function fibonac(fib) {
    let t1 = 0;
    let t2 = 1;
    let t3;
    var numa = document.getElementById('fib').value;
    while (numa >= 0) {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        document.writeln(t3 + "</br></br>")
        numa--;
    }
}
function gender() {
    var gend = document.getElementById('gend').value;
    if (gend == 'male' || gend == 'MALE') {
        document.writeln("You are male")
    }
    else if (gend == 'female' || gend == 'FEMALE') {
        document.writeln("You are Female")
    }
    else {
        document.writeln("Invalid Gender")
    }
}
function genderswitch() {
    var gender = document.getElementById('gend').value;
    switch (gender) {
        case 'male':
            document.writeln("You are male")
            break;
        case 'MALE':
            document.writeln("You are male")
            break;
        case 'female':
            document.writeln("You are female")
            break;
        case 'FEMALE':
            document.writeln("You are female")
            break;
    }
}