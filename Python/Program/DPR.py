class DPR: #Class DPR
    #Private Attributes
    __id = ""#Id
    __name = ""#Nama
    __nameBidang = ""#Nama Bidang
    __namePartai = ""#Nama Partai
    def __init__(self, id = "", name = "", nameBidang = "", namePartai = ""):#Constructor with parameter
        self.__id = id
        self.__name = name
        self.__nameBidang = nameBidang
        self.__namePartai = namePartai
    #Gette-Setter
    def getId(self):
        return self.__id

    def setId(self, id):
        self.__id = id

    def getName(self):
        return self.__name

    def setName(self, name):
        self.__name = name

    def getNameBidang(self):
        return self.__nameBidang

    def setNameBidang(self, nameBidang):
        self.__nameBidang = nameBidang

    def getNamePartai(self):
        return self.__namePartai

    def setNamePartai(self, namePartai):
        self.__namePartai = namePartai