'''
1. 输入两个整数
计算两数商
分别捕获输入非整数、除数为0两种异常，给出对应提示

try:
    # 获取输入并转为整数
    num1 = int(input("请输入被除数："))
    num2 = int(input("请输入除数："))
    # 计算商
    res = num1 / num2
    print(f"两数的商为：{res}")
except ValueError:
    # 输入非整数触发
    print("异常提示：输入内容不是有效整数！")
except ZeroDivisionError:
    # 除数为0触发
    print("异常提示：除数不能为0，无法计算！")
'''

'''
2. 使用with语句新建txt文件
写入三行文本
再读取全部内容打印

# 第一步：with w模式新建/覆盖文件，写入三行文本
with open("test.txt", "w", encoding="utf-8") as f:
    f.write("第一行文字\n")
    f.write("第二行文字\n")
    f.write("第三行文字\n")

# 第二步：with r模式读取全部内容并打印
with open("test.txt", "r", encoding="utf-8") as f:
    content = f.read()  # read()读取文件全部内容
    print("文件全部内容：")
    print(content)
'''

'''
3. 列表存放多条学生字典信息
使用json模块存入文件
再读取文件还原列表并打印

import json

# 1. 定义列表，内部存放多个学生字典
student_list = [
    {"name": "小明", "age": 17, "sid": "2026001"},
    {"name": "小红", "age": 18, "sid": "2026002"},
    {"name": "小李", "age": 17, "sid": "2026003"}
]

# 2. json.dump() 将列表存入json文件
with open("student.json", "w", encoding="utf-8") as f:
    # ensure_ascii=False 防止中文变成unicode编码
    json.dump(student_list, f, ensure_ascii=False, indent=4)
#json 写入：json.dump (数据，文件对象)
#ensure_ascii=False保留中文不转义为\uxxx
#indent = 4，格式化缩进可省略
# 3. json.load() 读取文件，还原为列表对象

#json 读取：json.load (文件对象)
#直接把文件里的 json 文本还原成 Python 原生列表 / 字典，可直接下标取值

with open("student.json", "r", encoding="utf-8") as f:
    data = json.load(f)

# 4. 打印还原后的列表
print("读取还原后的学生列表：")
print(data)
print("单独取第一个学生姓名：", data[0]["name"])



'''
4. 自定义异常PasswordShortError编写密码校验函数，密码小于8位主动抛出该异常外部捕获处理

# 1. 自定义异常类，必须继承 Exception
class PasswordShortError(Exception):
    """密码长度不足8位专属异常"""
    pass

# 2. 编写密码校验函数
def check_password(pwd):
    if len(pwd) < 8:
        # 不满足条件，主动抛出自定义异常
        raise PasswordShortError("密码长度必须大于等于8位！")
    else:
        print("密码格式合法")

# 3. 外部调用函数，捕获自定义异常
try:
    pwd_input = input("请输入密码：")
    check_password(pwd_input)
except PasswordShortError as e:
    # 捕获我们自己定义的异常并打印提示
    print("捕获异常：", e)
'''