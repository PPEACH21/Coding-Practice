package main

import (
	"fmt"
	
)

// printBasic
func Printformat(a string){ fmt.Print("\n### Function Name : ", a, " ####\n") }

func Variables(){
	Printformat("Variables")
	var tmp int
	var a int = 20
	var b float32 = 20.000000001
	var c string = "PPEACH21"
	var d bool = true

	// := use inside Func only!!
	A := 30
	B := 35.01
	C := "PPEACH22"
	D := false

	fmt.Println("tmp :", tmp)
	fmt.Println("a :", a)
	fmt.Println("b :", b)
	fmt.Println("c :", c)
	fmt.Println("d :", d)

	fmt.Println("A :", A)
	fmt.Println("B :", B)
	fmt.Println("C :", C)
	fmt.Println("D :", D)
}

func MutiVariables() {
	Printformat("MutiVariables")
	//inti muitvalue int
	var a, b, c, d, e, f int = 1, 2, 3, 4, 5, 6
	fmt.Println(a, b, c, d, e, f)

	var A, B = 10, "PPEACH22"
	fmt.Println(A, B)
}

func constStant() {
	Printformat("constStant")
	const (
		A int = 1
		B     = 3.14
		C     = "Hi!"
	)

	fmt.Println(A, B, C)
}

func outputFormat() {
	Printformat("outputFormat")
	a, b := "Hello", "World"
	fmt.Print("a: ", a, " b: ", b, "\n")
	//auto space agument
	fmt.Println("a: ", a, " b: ", b)

	//agument Auto Space
	c, d := 12, "Hello"
	fmt.Print(c, d, "\n")

	//printFormat
	fmt.Printf("c = %v\n", c)
	fmt.Printf("d = %v\n", d)

	//inInteger Formatting Verbs
	fmt.Printf("c Base 2 = %b\n", c)
	fmt.Printf("c Base 10 = %d\n", c)
	fmt.Printf("c Base 10 show sign=%+d\n", c)
	fmt.Printf("c Bese 8 = %o\n", c)
	fmt.Printf("c Bese with leading 0o = %O\n", c)
	fmt.Printf("c Bese 16 lowercase = %x\n", c)
	fmt.Printf("c Bese 16 uppercase = %X\n", c)
	fmt.Printf("c Bese 16 with leading 0x = %#x\n", c)
	fmt.Printf("c Pad with space = %4d\n", c)
	fmt.Printf("c Pad with space = %-4d\n", c)
	fmt.Printf("c Pad with zero = %04d\n\n", c)

	fmt.Printf("%v\n", d)
	fmt.Printf("%#v\n", d)
	fmt.Printf("%T\n", d)
	fmt.Printf("d Prints the value as plain string = %s\n", d)
	fmt.Printf("d double-quoted string = %q\n", d)
	fmt.Printf("d width 8, right justified = %8s\n", d)
	fmt.Printf("d width 8, left justified = %-8s\n", d)
}

func Array() {
	Printformat("Array")
	var a = [5]int{1, 2, 3, 4, 5}
	var b = [...]int{1, 2, 3, 4, 5}
	c := [5]int{1, 2, 3, 4, 5}
	d := [...]int{1, 2, 3, 4, 5}
	fmt.Println(a)
	fmt.Println(a[1])
	fmt.Println(b)
	fmt.Println(c)
	fmt.Println(d)

	var cars = [4]string{"Volvo", "BMW", "Ford", "Mazda"}
	fmt.Println(cars)

	arr1 := [5]int{1: 10, 4: 40}
	fmt.Println()
	fmt.Println(arr1)
	fmt.Println("arr1 length =", len(arr1))
	fmt.Println("arr1 cap =", cap(arr1))

	myslice := arr1[1:4]
	fmt.Printf("\n")
	fmt.Printf("myslice = %v\n", myslice)
	fmt.Printf("length = %d\n", len(myslice))
	fmt.Printf("capacity = %d\n", cap(myslice))

	//MAKE () slice_name := make([]type, length, capacity)
	make1 := make([]int, 2, 5)
	fmt.Println()
	fmt.Println("Make1 =", make1)
	fmt.Println(len(make1))
	fmt.Println(cap(make1))

	make1 = append(make1, 10, 20)
	fmt.Println("Make1 =", make1)
	fmt.Println(len(make1))
	fmt.Println(cap(make1))

	copy(make1, make1)
	tmpvalue := make([]int, 10, 20)
	fmt.Println("Tmpvalue =", tmpvalue)
	copy(tmpvalue, make1)
	fmt.Println("Make1 =", make1)
	fmt.Println("Tmpvalue =", tmpvalue)
}

func Operator() {
	Printformat("Operator")
	var x, y = 5, 7
	fmt.Println(x < y)
}

func Conditions() {
	Printformat("Conditions")
	fmt.Println("\n### if else ####")
	fmt.Println("5 < 7 && 9>10 = ")
	if(5 < 7 && 9>10){
		fmt.Println("CORRECT")
	} else {
		fmt.Println("WORNG")
	}

	num := 20;
	fmt.Println("\n### Switch case ####")
	fmt.Println("num =",20 )
	switch(num){
		case 1:
			fmt.Println("H")
		case 12:
			fmt.Println("E")
		case 10:
			fmt.Println("L")
		case 11:
			fmt.Println("0")
		case 19:
			fmt.Println("O")
		default:
			fmt.Println("Not Found")
	}
}

func Loop(){
	Printformat("Loop");
	for i:=0;i<10;i++{
		fmt.Print(i," ")
	}

	arr:= []string{"A","B","C","D","E","F","G"};

	fmt.Println("\nEx Loop1")
	for i:=0 ;i<len(arr);i++ {
		fmt.Println("index:",i,"value:",arr[i])
	}

	fmt.Println("\nEX Loop2")
	for i ,val := range arr{
		fmt.Println("index:",i,"value:",val)
	}
	
	// "_" ไม่ต้องการใช้
	fmt.Println("\nEX Loop3 No index")
	for _ ,val := range arr{
		fmt.Println("value:",val)
	}
	
}

func Return01(index int, txt1 string,x int ,y int)(result string,ans int){

	switch(index){
		case 1:
			result = "PPEACH!"
			return
		case 2:
			ans = x+y
			result = "ANS = "
			return
		default:
			return
	}
}

func Return02()int{
	return 10
}