def main():
    print("1.Create")
    print("2.Remove")
    print("3.Update")
    print("4.Display")
    print("5.Exit")

    id = 0
    empData = {}
    

    while(1):
        choice = int(input("Enter choice: "))

        match(choice):
            case 1:
                empData.update(Create())
                Display(empData)
            case 2:
                Remove(empData)
                Display(empData)
            case 3:
                Update(empData)
                Display(empData)
            case 4:
                Display(empData)
            case 5:
                exit(0)

def Create():
    empData = {}
    emp = {}
    id=""
    name=""
    salary=""
    role=""
    city=""
    
    
    id = (input("Enter employeeID: "))
    name = input("Enter employee name: ")
    salary = input("Enter employee salary: ")
    role = input("Enter employee designation: ")
    city = input("Enter employee location: ")

    emp[id] = {
        "Name":name,
        "Salary":salary,
        "Role":role,
        "City":city,
    }

    empData.update(emp)

    return (empData)

def Display(empData):
    # print(empData)

    for emp_id, details in empData.items():
        print(f"ID: {emp_id}, Details: {details}")

def Remove(empData):
    id = (input("Enter empId to remove: "))

    # print(empData[id])
    if id in empData:
        del empData[id]

def Update(empData):
    id = ''
    id = input("Enter employeeID: ")
    

    if id in empData:
        print("1.___Name")
        print("2.___Salary")
        print("3.___Role")
        print("4.___City")
        print("5.___exit")
        while(1):
            detail = int(input("Enter which detail u want to update: "))
            match(detail):
                case 1:
                    name = input("Enter new name: ")
                    empData[id]['Name'] = name
                    Display(empData)
                case 2:
                    salary = input("Enter new salary: ")
                    empData[id]['Salary'] = salary
                    Display(empData)
                case 3:
                    role = input("Enter new role: ")
                    empData[id]['Role'] = role
                    Display(empData)
                case 4:
                    city = input("Enter new city: ")
                    empData[id]['City'] = city
                    Display(empData)
                case 5:
                    break
                


main()
