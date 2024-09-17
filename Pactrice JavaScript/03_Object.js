
// EX1
// const customer = {
//     customerName : "Peerapat",
//     age : 21,
//     address : "Thailand"
// }
// console.log(customer)


// EX2
// const username = "Peerapat"
// const age = 21
// const address = "THAILAND"

// const customer = {
//     customerName : username,
//     age,
//     address 
// }
// console.log(customer)


// EX3
const customerName = "Peerapat"
const age = 21
const address = "THAILAND"

const customer = {customerName,
    age,
    address,
    showData(){ //การเพิ่ม method ใน Object
        console.log("ข้อมูลลูกค้า = "+customerName)
    }
    }

customer.showData()

