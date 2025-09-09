package main

import (
	"fmt"
)

type user struct  {
	name string
  	age int
  	job string
} 

func printPerson(data user) {
  fmt.Println("Name: ", data.name)
  fmt.Println("Age: ", data.age)
  fmt.Println("Job: ", data.job)
}


func userinfo(){
	var Person1 user
	Person1.name="PPEACH"
	Person1.age=22
	Person1.job="Coding "
	
	var Person2 user
	Person2.name="Peerapat"
	Person2.age=21
	Person2.job="Programmer "
	printPerson(Person1);
	printPerson(Person2);
}


func MAP(){
	var A = map[string]string{"food":"Burger","place":"Thailand","Timezone":"UCT+7"}
	fmt.Println(A["food"])
	
	
	var a = make(map[string]string)
	a["brand"] = "Ford"
	a["model"] = "Mustang"
	a["year"] = "1964"
	fmt.Println(a)
	delete(a,"year")
	fmt.Println(a)

}

func MAPchanging(){
	var a = map[string]string{"brand": "Ford", "model": "Mustang", "year": "1964"}
	b := a

	fmt.Println(a)
	fmt.Println(b)

  	b["year"] = "1970"
  	fmt.Println("After change to b:")

  	fmt.Println(a)
  	fmt.Println(b)
}