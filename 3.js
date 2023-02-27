function person(name, age, gender, address) {
    this.name = name;
    this.age = age;
    this.gender = gender;
    this.address = address;

}
var sha = new person("Sharon", 20, "Male", "Poonthottam , Coimbatore");

function display() {
    document.getElementById("Details").innerHTML = (sha.name + ", " + sha.age + ", " + sha.gender + ", " + sha.address);
}
display();
