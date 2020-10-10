class Box:
    def __init__(self, a=0, b=0, h=0):
        self.__a = a
        self.__b = b
        self.__h = h

    def setA (self, a):
        self.__a = a

    def setB (self, b):
        self.__b = b

    def setH (self, h):
        self.__h - h

    def getVolume(self):
        return self.__a * self.__b * self.__h



box = Box(100, 100, 100)
print(box)
print('상자의 부피는 ', box.getVolume())
