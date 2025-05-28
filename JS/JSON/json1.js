var student = {
  rollno: 407,
  name: "Meet",
  age: 22,
  university: "PDEU",
  semMarks: [9.5, 9, 8.5, 8.6, 8.67],
  address: {
    city: "Gandhinagar",
    state: "Gujarat",
    area: "Sargasan",
    apartment: "Megh Malhaar",
    pincode: 382421,
  },
};

var employee = {
  id: 121,
  name: "Jackson",
  organization: "Microsoft",
  role: "Cloud engineer",
  exCompanyName: ["Oracle", "Accenture", "TCS", "Radix"],
  address: {
    city: "Bangalore",
    state: "Karnataka",
    area: "WhiteField",
  },
};

var SocialMedia = {
  id: "1234Insta",
  name: "Instagram",
  Company: "Meta",
  otherMetaMedia: ["facebook", "Whatsapp", "Messanger"],
  profile: {
    name: "Meet Pate",
    username: "meet1234",
    bio: "Stay motivated, stay confident",
    gender: "male",
    pronouns: "he/him",
  },
};

console.log(student);
console.log(employee);
console.log(SocialMedia);

console.log(employee.exCompanyName[1]);
console.log(SocialMedia.profile.bio);
