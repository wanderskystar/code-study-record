'''
一、
a = float(input())
if a>=90:
    print("A")
elif 80<=a<90:
    print("B")
elif 70<=a<80:
    print("C")
elif 60<=a<70:
    print("D")
else:
    print("不及格")
'''


'''

二、

实现乘法口诀表的原理：(弄清每层循环是干嘛的)
1.内外层循环分工
外层 i : 控制【行数】i=1 第一行 i=2 第二行...

内层 j : 控制【每行有几个算式】 range(1,i+1) 
                            左闭右开[1,i+1)

2.print(end = "\t")
python默认print()结尾自动换行;
end="\t" 代表打印完这条式子后，
不换行，插入一个制表符空格，同一行继续打印下一个算式。

3.print() 实现阶梯效果
当一行的 j 循环完,执行一次空print(),作用是切到下一行

正序99乘法口诀表:
for i in range(1,10,1):
    for j in range(1,i+1):
        print(f"{j}*{i}={i*j}", end='\t')
    print()

倒99乘法口诀表:
# i代表当前行最大数字，从9递减到1
for i in range(9, 0, -1):
    # j从1循环到i，每行i个式子
    for j in range(1, i + 1):
        print(f"{j}×{i}={i*j}", end="\t")
    # 一行打印完换行
    print()
'''

'''
三、

水仙花数（百位³+十位³+个位³=自身）
for i in range(100,1000):
    a =  i // 100
    b = (i % 100) // 10
    c = (i % 100) % 10
    if(a**3+b**3+c**3 == i):
        print(i)
'''

'''
四、

password = "key"
for i in range(1,6):
    a = str(input())
    if(a == password):
        print("欢迎")
        break;   #匹配成功就退出，不要多余循环了
    else:
        if(i == 5):
            print("账号锁定")
        else:
            pass
'''
