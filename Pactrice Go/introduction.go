package main

import (
	"fmt"
)

func main() {
	Printformat("PPEACH")
	// Variables()
	MutiVariables()
	constStant()
}

// printBasic
func Printformat(a string) { fmt.Println("HELLO", a) }

func Variables() {
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
	//inti muitvalue int
	var a, b, c, d, e, f int = 1, 2, 3, 4, 5, 6
	fmt.Println(a, b, c, d, e, f)

	var A, B = 10, "PPEACH22"
	fmt.Println(A, B)
}

func constStant() {
	const (
		A int = 1
		B     = 3.14
		C     = "Hi!"
	)

	fmt.Println(A, B, C)
}
