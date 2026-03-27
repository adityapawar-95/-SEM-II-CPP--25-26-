class Student:
    def __init__(self,student_name,roll_number,maths,physics,chemistry,total,average):
        self.student_name=student_name
        self.roll_number=roll_number
        self.maths=maths
        self.physics=physics
        self.chemistry=chemistry
        self.total=total
        self.average=average 

    def accept_details(self):
        self.student_name=input("ENTER YOUR NAME:")
        self.roll_number= int(input("ENTER ROLL NUMBER:"))
        self.maths=float(input("ENTER MARKS OUT OF 50 IN MATHS:"))
        self.physics=float(input("ENTER MARKS OUT OF 50 PHYSICS:"))
        self.chemistry=float(input("ENTER MARKS OUT OF 50 CHEMISTRY:"))
             
            
    def calculate(self):
        self.total=self.maths+self.physics+self.chemistry
        self.average= self.total/3

    def display(self):
        print("STUDENT DETAILS")
        print("Student name:",self.student_name)
        print("Roll number:",self.roll_number)
        print("Total marks:",self.total)
        print("Average marks:",self.average)

s1=Student("","","","","","","")
s1.accept_details()
s1.calculate()
s1.display()