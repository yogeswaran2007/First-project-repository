class Student:
    def __init__(self, id, name, marks):
        self.id = id
        self.name = name
        self.marks = marks

    def display(self):
        print("ID:", self.id)
        print("Name:", self.name)
        print("Marks:", self.marks)


students = []

n = 3

for i in range(n):
    print("Enter details of student", i+1)

    sid = int(input("Enter ID: "))
    name = input("Enter Name: ")
    marks = float(input("Enter Marks: "))

    s = Student(sid, name, marks)
    students.append(s)


print("\nStudent Details")

for s in students:
    s.display()
    print("------------")