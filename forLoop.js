class Person{
    constructor(firstname,lastname){
        this.firstname = firstname;
        this.lastname = lastname;
    }
    greet(){
        console.log("Ui there!");
    }
    compliment(name,object){
        return "That is a nice " + object + " " + name; 
    }
    fullname(){
        return this.firstname + " " + this.lastname;
    }
   
}
let person1 = new Person("Alice", "Jhonson");
let person2 = new Person("Eric", "scarf");
let p = new Person("Harry", "Potter");
let compliment = p.compliment("Harry", "hat");
console.log("Person1 full name is ", person1.fullname());
console.log("Person2 full name is ", person2.fullname());
person1.greet();
console.log(compliment);

