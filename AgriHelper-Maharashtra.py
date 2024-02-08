class soiltype:

    def introduction(self):
        print("Welcome to the AgriHelper Maharashtra Program!\n")
        self.area=int(input("Please enter the area in which you have your agricultural land:\n1.North Maharashtra\n2.West Maharashtra\n3.South Maharashtra\n4.East Maharashtra\n5.Central Maharashtra\n"))

    def choosesoil(self):
        if self.area==1:
            print("Types of soil found in North Maharashtra are:\n1.Black Soil\n2.Coarse Soil\n")
        elif self.area==2:
            print("Types of soil found in West Maharashtra are:\n1.Black Soil\n2.Coarse Soil\n3.Laterite Soil\n4.Alluvial Soil\n")
        elif self.area==3:
            print("Types of soil found in South Maharashtra are:\n1.Black Soil\n2.Coarse Soil\n3.Laterite Soil\n4.Alluvial Soil\n")
        elif self.area==4:
            print("Types of soil found in East Maharashtra are:\n1.Black Soil\n2.Coarse Soil\n3.Laterite Soil\n")
        elif self.area==5:
            print("Types of soil found in Central Maharashtra are:\n1.Black Soil\n2.Coarse Soil\n")
        else:
            print("Invalid Input")

        self.plot=int(input("Choose the type of soil found in your plot/agricultural land\n"))

        print("Crop Recommendations for your farm are:")
        if self.plot==1:
            print("For Black Soil:\n1.Cotton-Rs 6477.11 INR/Quintal\n2.Sugarcane-Rs 7932.43 INR/Quintal\n")
        elif self.plot==2:
            print("For Coarse Soil:\n1.Jowar-Rs 3217.29 INR/Quintal\n2.Bajra-Rs 2577 INR/Quintal\n3.Maize-Rs 2175.35 INR/Quintal\n")
        elif self.plot==3:
            print("For Laterite Soil:\n1.Lentils-Rs 7150 INR/Quintal\n2.Cashew-Rs 67500 INR/Quintal\n")
        elif self.plot==4:
            print("For Alluvial Soil:\n1.Rice-Rs 3465 INR/Quintal\n2.Soyabean-Rs 4270.92 INR/Quintal\n3.Jute-Rs 5600 INR/Quintal\n")

    def choosecrop(self):
        self.acre=float(input("Enter the land area you own\n"))
        self.crop=str(input("Choose a crop to plant on the field\n"))
        self.tcl=0.9*self.acre
        print("Total cultivable land in your Farm is",self.tcl,"acres")
        
        if self.crop=="Cotton":
            self.total=self.tcl*84930
            print("Total money gained from Cotton is Rs",self.total)
        elif self.crop=="Sugarcane":
            self.total=self.tcl*103110
            print("Total money gained from Sugarcane is Rs",self.total)
        elif self.crop=="Jowar":
            self.total=self.tcl*41820
            print("Total money gained from Jowar is Rs",self.total)
        elif self.crop=="Bajra":
            self.total=self.tcl*33500
            print("Total money gained from Bajra is Rs",self.total)
        elif self.crop=="Maize":
            self.total=self.tcl*28275
            print("Total money gained from Maize is Rs",self.total)
        elif self.crop=="Lentils":
            self.total=self.tcl*92950
            print("Total money gained from Lentils is Rs",self.total)
        elif self.crop=="Cashew":
            self.total=self.tcl*96000     #Yaha pe cashew ka phal hai
            print("Total money gained from Cashew is Rs",self.total)
        elif self.crop=="Rice":
            self.total=self.tcl*45040
            print("Total money gained from Rice is Rs",self.total)
        elif self.crop=="Soyabean":
            self.total=self.tcl*55510
            print("Total money gained from Soyabean is Rs",self.total)
        elif self.crop=="Jute":
            self.total=self.tcl*72000
            print("Total money gained from Jute is Rs",self.total)
        else:
            print("Invalid Input")

p=soiltype()
p.introduction()
p.choosesoil()
p.choosecrop()
exit()
