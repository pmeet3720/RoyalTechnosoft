var company = [
  {
    name: "google",
    employees: [
      {
        id: 101,
        name: "meet desai",
        salary: 25600,
        email: "meet@gmail.com",
        IsMarried: true,
        child: 1,
        gender: "male",
      },
      {
        id: 102,
        name: "jane",
        salary: 22000,
        email: "jane@gmail.com",
        IsMarried: false,
        child: 0,
        gender: "female",
      },
      {
        id: 103,
        name: "priti",
        salary: 27800,
        email: "priti@gmail.com",
        IsMarried: true,
        child: 2,
        gender: "female",
      },
    ],
  },
  {
    name: "facebook",
    employees: [
      {
        id: 201,
        name: "jim",
        salary: 24500,
        email: "jim@gmail.com",
        IsMarried: true,
        child: 1,
        gender: "male",
      },
      {
        id: 202,
        name: "sarah",
        salary: 21500,
        email: "sarah@gmail.com",
        IsMarried: false,
        child: 0,
        gender: "female",
      },
      {
        id: 203,
        name: "akash",
        salary: 26200,
        email: "akash@gmail.com",
        IsMarried: true,
        child: 2,
        gender: "male",
      },
    ],
  },
  {
    name: "amazon",
    employees: [
      {
        id: 301,
        name: "ankit",
        salary: 26200,
        email: "ankit@gmail.com",
        IsMarried: false,
        child: 0,
        gender: "male",
      },
      {
        id: 302,
        name: "riya",
        salary: 86000,
        email: "riya@gmail.com",
        IsMarried: true,
        child: 1,
        gender: "female",
      },
      {
        id: 303,
        name: "kriti",
        salary: 62500,
        email: "kriti@gmail.com",
        IsMarried: false,
        child: 0,
        gender: "female",
      },
    ],
  },
  {
    name: "flipkart",
    employees: [
      {
        id: 401,
        name: "pooja",
        salary: 29800,
        email: "pooja@gmail.com",
        IsMarried: false,
        child: 0,
        gender: "female",
      },
      {
        id: 402,
        name: "ritesh",
        salary: 22500,
        email: "ritesh@gmail.com",
        IsMarried: true,
        child: 1,
        gender: "male",
      },
      {
        id: 403,
        name: "bhuwan",
        salary: 28700,
        email: "bhuwan@gmail.com",
        IsMarried: false,
        child: 0,
        gender: "male",
      },
    ],
  },
];

// 1.  Find the total number of employees in all companies.
// 2. Find the company where the employee named "riya" works.
// 3. Calculate the average salary of employees across all companies.
// 4. Find the names of all employees who are married.
// 5. Count the total number of children across all employees

// 7. List all female employees.
// 8. Count how many employees are not married.
// 9. Find the email addresses of all employees earning more than 30,000.
// 10. Identify the total number of employees for each company.

//1.
// let x = company.map((cmp) => cmp.employees.length);
// console.log(x);

// let y = company.reduce((cnt, cmp) => cnt + cmp.employees.length, 0);
// console.log(y);

//2.
// let x = company.find((cmp) =>
//   cmp.employees.find((emp) => emp.name === "riya")
// ).name;
// console.log(x);

//3.
// let x = company.map((cmp) =>
//   cmp.employees.reduce(
//     (sum, emp) =>
//       sum +
//       emp.salary /
//         company.find((cmp) => cmp.name === "amazon").employees.length,
//     0
//   )
// );
// console.log(x);

//4.
// let x = company
//   .map((cmp) => cmp.employees.filter((emp) => emp.IsMarried === true))
//   .map((emp) => emp.map((emp) => emp.name));
// console.log(x);

//5.
// let x = company.map((cmp) =>
//   cmp.employees.reduce((cnt, emp) => cnt + emp.child, 0)
// );
// console.log(x);

// let totalChildren = x.reduce((sum, child) => sum + child, 0);
// console.log(totalChildren);

//7.
// let x = company.map((cmp) =>
//   cmp.employees.filter((emp) => emp.gender === "female")
// );
// console.log(x);

// let femaleEmp = x.map((cmp) => cmp.map((fem) => fem.name));
// console.log(femaleEmp.join(",").split(","));

//8.
// let x = company
//   .map((cmp) =>
//     cmp.employees.reduce((cnt, emp) => cnt + (emp.IsMarried ? 0 : 1), 0)
//   )
//   .reduce((sum, cmp) => sum + cmp, 0);
// console.log("UnMarried employees: " + x);

// let y = company.reduce(
//   (sum, cmp) =>
//     sum + cmp.employees.reduce((cnt, emp) => cnt + (emp.IsMarried ? 0 : 1), 0),
//   0
// );
// console.log(y);

//9.
// let emailArr = [];
// let x = company
//   .map((cmp) => cmp.employees.filter((emp) => emp.salary > 30000))
//   .map((cmp) => cmp.map((emp) => emp.email))
//   .join(",")
//   .split(",");

// console.log(x);

// x.forEach((email) => {
//   if (email.length > 0) {
//     // console.log(email);
//     emailArr.push(email);
//   }
// });
// console.log(emailArr);

//10.
// let x = company.reduce((cnt, cmp) => cnt + cmp.employees.length, 0);
// console.log(x);

// let y = company.map((cmp) => cmp.employees.length);
// console.log(y);
