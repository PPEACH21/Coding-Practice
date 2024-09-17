//EX1
// const newArr = [100,200,300]
// const data = [10,20,newArr]
// //arrayมันซ้อนกัน
// console.log(data.length)

//EX2
// const newArr = [100,200,300]
// const data = [10,20,...newArr]
// //             เพิ่มจุด 3 จุดเข้าไป
// console.log(data)


//EX3
// const colors = ["Red","Blue","Write"]
// const allColors = ["Pink","black",...colors]
// console.log(allColors)

//EX4 push
const colors = ["Red","Blue","Write"]
const allColors = ["Pink","black",...colors]
console.log(allColors)

const newColors = ["Green","Sky"]
allColors.push(...newColors)

console.log(allColors)
