var company = [
  {
    companyname: "Tech Solutions",
    employees: [
      {
        id: 1,
        name: "John Smith",
        age: 35,
        position: "Software Engineer",
        email: "john.smith@techsolutions.com",
        phone: "555-1234",
        salary: 85000,
      },
      {
        id: 2,
        name: "Emily Davis",
        age: 29,
        position: "QA Engineer",
        email: "emily.davis@techsolutions.com",
        phone: "555-5678",
        salary: 62000,
      },
    ],
  },
  {
    companyname: "Marketing Masters",
    employees: [
      {
        id: 1,
        name: "Sophia Brown",
        age: 32,
        position: "Marketing Manager",
        email: "sophia.brown@marketingmasters.com",
        phone: "555-2345",
        salary: 75000,
      },
      {
        id: 2,
        name: "James Taylor",
        age: 28,
        position: "Social Media Analyst",
        email: "james.taylor@marketingmasters.com",
        phone: "555-6789",
        salary: 55000,
      },
    ],
  },
  {
    companyname: "Data Dynamics",
    employees: [
      {
        id: 1,
        name: "Liam Wilson",
        age: 40,
        position: "Data Scientist",
        email: "liam.wilson@datadynamics.com",
        phone: "555-3456",
        salary: 95000,
      },
      {
        id: 2,
        name: "Olivia Johnson",
        age: 27,
        position: "Data Analyst",
        email: "olivia.johnson@datadynamics.com",
        phone: "555-9876",
        salary: 67000,
      },
    ],
  },
  {
    companyname: "Eco Innovations",
    employees: [
      {
        id: 1,
        name: "Noah Green",
        age: 38,
        position: "Sustainability Consultant",
        email: "noah.green@ecoinnovations.com",
        phone: "555-1111",
        salary: 87000,
      },
      {
        id: 2,
        name: "Emma White",
        age: 30,
        position: "Environmental Analyst",
        email: "emma.white@ecoinnovations.com",
        phone: "555-2222",
        salary: 68000,
      },
    ],
  },
  {
    companyname: "Healthcare Hub",
    employees: [
      {
        id: 1,
        name: "Ethan Martinez",
        age: 45,
        position: "Medical Researcher",
        email: "ethan.martinez@healthcarehub.com",
        phone: "555-3333",
        salary: 98000,
      },
      {
        id: 2,
        name: "Ava Rodriguez",
        age: 34,
        position: "Clinical Specialist",
        email: "ava.rodriguez@healthcarehub.com",
        phone: "555-4444",
        salary: 79000,
      },
    ],
  },
];

//1
// List all company names.
// Extract and display only the companyName fields from the JSON array.

//2
// Find employees earning more than $80,000.
// Search through all employees arrays and list employees with a salary greater than 80,000.

//3
// Count the total number of employees in all companies.
// Count the total number of employee objects across all companies.

//4
// Find the position of an employee named "Emily Davis".
// Search for "Emily Davis" in the employees array and display her position.

//5
// List all unique positions held by employees.
// Extract and list all unique values from the position fields across all employees.

//6
// Find which company "Liam Wilson" works for.
// Search for "Liam Wilson" in the employees arrays and display the companyName he belongs to.

//7
// Calculate the average salary of employees in "Tech Solutions".
// Sum up the salary values of employees in "Tech Solutions" and divide by the number of employees in that company.

//8
// Find employees who are older than 30.
// Search through all employees arrays for employees with an age greater than 30 and list their details.

//9
// Count how many employees have an email domain of "datadynamics.com".
// Check the email field of all employees and count how many contain "datadynamics.com" as the domain.

//solutions

//1
// let x = company.map((cmp) => cmp.companyname);
// console.log(x);

//2
// let x = company.map((comp) =>
//   comp.employees.filter((emp) => emp.salary > 80000)
// );
// console.log(x);

//3
// let y = company.reduce((cnt, comp) => cnt + comp.employees.length, 0);
// console.log(y);

//4
// let x = company.map(
//   (cmp) => cmp.employees.find((emp) => emp.name === "Emily Davis")?.position
// );
// console.log(x[0]);

//5
// let x = company.map((cmp) => cmp.employees.map((emp) => emp.position));
// console.log(x);

//6
// company.forEach((cmp) => {
//   if (cmp.employees.find((emp) => emp.name === "Liam Wilson")) {
//     console.log(cmp.companyname);
//   }
// });

//7
// var sumF = 0;
// var avgF = 0;
// company.forEach((cmp) => {
//   if (cmp.companyname === "Tech Solutions") {
//     sumF = cmp.employees.reduce((sum, emp) => sum + emp.salary, 0);
//     avgF = sumF / cmp.employees.length;
//   }
// });
// console.log("Sum: " + sumF);
// console.log("Avg: " + avgF);

// var sumS = 0;
// var avgS = 0;
// let y = company.map((cmp) =>
//   cmp.companyname === "Tech Solutions"
//     ? (avgS =
//         (sumS = cmp.employees.reduce((sum, emp) => sum + emp.salary, 0)) /
//         cmp.employees.length)
//     : 0
// );

// console.log("Sum: " + sumS);
// console.log("Avg: " + avgS);

//8
// company.forEach((cmp) => {
//   let x = cmp.employees.filter((emp) => emp.age > 30);
//   console.log(x);
// });

// let y = company.map((cmp) => cmp.employees.filter((emp) => emp.age > 30));
// console.log(y);

//9
// company.forEach((cmp) => {
//   let x = cmp.employees.filter((emp) => emp.email.includes("datadynamics.com"));
//   console.log(x);
// });

// let y = company.reduce(
//   (cnt, cmp) =>
//     cnt +
//     cmp.employees.filter((emp) => emp.email.includes("datadynamics.com"))
//       .length,
//   0
// );
// console.log(y);
