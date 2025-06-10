class City:

    def printCityName(self, name):
        print("printCityName method called...")
        print(f"value of city Name: {name}")
        # print(f"value of new city: {self.cityName}") # ahm object

    def displayNewCity(self):
        print("displayNewCity method called...")
        self.cityName = "Mumbai" # mumbai object


    

ahm = City()
ahm.printCityName("Gandhinagar")

mummbai = City()
mummbai.displayNewCity()