function validate() {
    var name = document.register.name.value;
    var dob = document.register.dob.value;
    var gen = document.register.gen.value;
    var qual = document.register.Diploma.value;
    var mark = document.register.Mark.value;
    var tam = document.getElementById('c1').value;
    var eng = document.getElementById('c2').value;
    var fren = document.getElementById('c3').value;
    var ger = document.getElementById('c4').value;
    var pol = document.getElementById('c5').value;
    document.write("<p><strong>Name:</strong> " + name + "</p>");
    document.write("<p><strong>DOB:</strong> " + dob + "</p>");
    document.write("<p><strong>Gender:</strong> " + gen + "</p>");
    document.write("<p><strong>Qualification:</strong> " + qual + "</p>");
    document.write("<p><strong>Mark:</strong> " + mark + "</p>");
    



    if (tam.checked == true) {
        document.write("<p><strong>Language:</strong> " + tam + "</p>");
    }
    else if (eng.checked == true) {
        document.write("<p><strong>Language:</strong> " + eng + "</p>");
    }
    else if (fren.checked == true) {
        document.write("<p><strong>Language:</strong> " + fren + "</p>");
    }
    else if (ger.checked == true) {
        document.write("<p><strong>Language:</strong> " + ger + "</p>");
    }
    else if (pol.checked == true) {
        document.write("<p><strong>Language:</strong> " + pol + "</p>");
    }

    var grade = document.register.Grade.value;
    var lang = document.register.language.value;
    var add = document.register.address.value;
    var mobile = document.register.mno.value;
    var email = document.register.mail.value;
    var mark = document.register.mark.value;



    var ncheck = /^[A-Za-z]+$/;
    var echeck = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
    if (name == '') {
        alert('Please enter your name');
    } else if (!ncheck.test(name)) {
        alert('Name field required only alphabet characters');
    } else if (email == '') {
        alert('Please enter your  email id');
    } else if (!echeck.test(email)) {
        alert('Invalid email');
    }
    // else if ( == '') {
    //     alert('Please enter your  email id');
    // }
    else {
        alert('Thank you for registering!');
        display(name, dob, gen, add, mobile, email, mark, qual);

    }

}

// function display(name, dob, gend,  add, mobile,  email,  mark, qual) {
//    