"use strict";
function Pro_info() {
    return fetch('./pro.json')
        .then(response => response.json())
        .then(Response => { return Response; });
}
Pro_info()
    .then(pro => console.log(pro.map(p => "Product ID =" + p.id + "Product Name = " + p.pname + "Product Description =" + p.pdescription + "price=" + p.price).toString()));
