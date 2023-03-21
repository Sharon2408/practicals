interface Pro {
    id: number,
      pname: string,
      pdescription: string,
      price: number
}

function Pro_info(): Promise<Pro[]>{
    return fetch('./pro.json')        
    .then(response => response.json())
    .then(Response => {return Response as Pro[]})
 }
  
 Pro_info()
 .then(pro=> console.log(pro.map(p=> "Product ID =" + p.id + "Product Name = " + p.pname+ "Product Description =" + p.pdescription + "price="+ p.price).toString()))