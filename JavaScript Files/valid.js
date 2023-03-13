function formvalidation() {
    var name = document.register.name.value;
    var dob = document.register.dob.value;
    var gend = document.register.gen.value;
    var fname = document.register.fname.value;
    var add = document.register.address.value;
    var mobile = document.register.mno.value;
    var phone = document.register.pno.value;
    var email = document.register.mail.value;
    var col= document.register.cname.value;
    var mark= document.register.mark.value;
    var interest= document.register.Interest.value;


    var ncheck = /^[A-Za-z]+$/;
    var echeck = /^([a-zA-Z0-9_\.\-])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;

    if (name == '' ) {
        alert('Please enter your name');
    } else if (!ncheck.test(name)) {
        alert('Name field required only alphabet characters');
    } else if (email == '') {
        alert('Please enter your  email id');
    } else if (!echeck.test(email)) {
        alert('Invalid email');
    } else {
        alert('Thank you for registering!');
        display(name, dob, gend, fname, add, mobile, phone,  email ,col, mark, interest);
    }
}



function display(name, dob, gend, fname, add, mobile, phone,  email, col, mark, interest) {
    document.write("<h2>Registration Details:</h2>");
    document.write("<p><strong>Name:</strong> " + name + "</p>");
    document.write("<p><strong>Date of Birth:</strong> " + dob + "</p>");
    document.write("<p><strong>Gender:</strong> " + gend + "</p>");
    document.write("<p><strong>Father's Name:</strong> " + fname + "</p>");
    document.write("<p><strong>Address:</strong> " + add + "</p>");
    document.write("<p><strong>Mobile Number:</strong> " + mobile + "</p>");
    document.write("<p><strong>Phone Number:</strong> " + phone + "</p>");
    document.write("<p><strong>Email:</strong> " + email + "</p>");
    document.write("<p><strong>College Name:</strong> " + col + "</p>");
    document.write("<p><strong>Mark:</strong> " + mark + "</p>");
    function show_image(src, width, height) {
        var img = document.createElement("img");
        img.src = src;
        img.width = width;
        img.height = height;
        img.setAttribute = ("class", "center");
        document.body.appendChild(img);
    }   
    
    show_image("./assets/mypic.jpg", 110, 150,);
    document.body.appendChild(img);
}