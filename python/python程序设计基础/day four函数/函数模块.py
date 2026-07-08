'''
1. 自定义函数sum_num
接收任意多个数字参数
返回所有数字累加和

def sum_num(*args):
    a=sum(args)
# 内置函数sum报错原因sum(可迭代对象,start=0)
# 不支持传入多个独立数字*args会解包成许多独立数字报错
    return a
print(sum_num(1,2,3,4,5)) 
'''
'''
2. 使用lambda匿名函数
实现两个数字求最大值
调用并测试

x = lambda a,b: a if a>b else b
# 自带return 返回
x = lambda a,b: max(a,b)
print(x(1,2))
'''

'''
3. 定义函数info(name, age=18)
格式化输出姓名年龄，分别使用传参、
不传年龄两种方式调用

def info(name,age=18):
    print(f"{name},{age}")
info("小明",20)
info("小名")

'''