// EX1
//MultiLine String
// const address = `ชื่อลูกค้า : Peerapat 
// ที่อยู่ 1/1 ถ.dd อ.เมือง จ.กก 
// เบอร์ : 099-888-8888`

//Interpolation ${} `=มันชื่อว่าแบล็คติก
let customerName = "PEERAPAT"
let tel = "00000000"
let Address = "THAILAND"

const address = `ชื่อลูกค้า : ${customerName}
ที่อยู่ : ${Address}
เบอร์ : ${tel}`


console.log(address)