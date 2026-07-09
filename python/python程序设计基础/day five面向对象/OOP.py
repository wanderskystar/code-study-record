'''基础构造 实例方法
1. 定义圆形Circle类
实例属性半径r 方法get_area()计算面积
get_perimeter()计算周长，实例对象调用输出
import math
class Circle:
    def __init__(self,r):
        self.r = r

    def  get_perimeter(self):
        return 2*math.pi*self.r

    def get_area(self):
        return math.pi * ((self.r)**2)

c = Circle(1)
print(c.get_area(),c.get_perimeter())
'''

'''继承super().__init__(属性)
2. 父类Animal属性name方法speak()
子类Dog继承Animal
重写speak输出“汪汪汪”实例测试

class Animal:
    def __init__(self,name):
        self.name=name

    def speak(self):
        print(f"{slf.name}发出叫声")

class Dog(Animal): 
    def __init__(self,name):
        super().__init__(name)

    def speak(self):
        print("汪汪汪")
dog1 = Dog("旺财")
dog1.speak()
'''

'''
3. 学生类Student 私有属性__sid学号
提供get_sid()公共方法读取学号
外部无法直接打印__sid

class Student:
    def __init__(self,sid):
        # __sid 双下划线 = 私有属性，外部不能直接访问
        self.__sid = sid
    # 公共读取方法，对外提供访问私有属性的通道
    def get_sid(self):
        # 把私有学号返回出去
        return self.__sid
s1 = Student("123456")
# 1.外部直接访问私有属性，报错！（封装的作用，保护数据）
# print(s1.__sid) # AttributeError，禁止直接读取

# 2.通过公共方法正常获取学号
print(s1.get_sid())

'''