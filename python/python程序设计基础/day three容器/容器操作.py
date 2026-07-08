'''
1. 集合去重并升序:
方法一:(缺点会失去最原始的序列)

lis = [3,1,4,1,5,9,2,6]
lis = list({x for x in lis})
lis.sort()
print(lis)

方法二：循环遍历去重(原始序列与输出序列不想干)
用条件判断来去重
lis = [3,1,4,1,5,9,2,6]
new_lis = []
for i in lis:
    if i not in new_lis:
        new_lis.append(i)
new_lis.sort() # 升序
print(new_lis)
''' 


'''
2. 输入一段英文句子按空格分割为列表
去除首尾空白将所有字母转为大写输出

s = input("输入一段英文句子:").strip()
s = s.split()  //默认空格切分
print(s)
new_s = []
for i in s:
    i=i.upper()
    new_s.append(i)
print(new_s)  
//极简
s = input().strip().split()
new_s = [x.upper() for x in s  ]
print(new_s)
'''

'''
3.两个列表 list1=[1,2,3,4] list2=[3,4,5,6]
用集合求出交集、并集、差集
先转化为集合

list1=[1,2,3,4] 
list2=[3,4,5,6]
s1  = set(list1)
s2  = set(list2)
inter = s1 & s2
union = s1 | s2
diff=  s1 - s2
print(inter,union,diff)

'''
'''
4. 字典 d={"a":1,"b":2,"c":3}
遍历打印所有键值对
交换字典的键和值（值唯一)

d={"a":1,"b":2,"c":3}
for k,v in d.items():
    print(f"{k}:{v}")
new_d = {v:k for k,v in d.items()}
print(new_d)

'''
'''
5. 使用推导式生成1~30所有偶数列表
生成键1-10值为数字平方的字典

lis_1 = [x for x in range(1,31) if x%2 == 0]
lis_2 = [x for x in range(2,31,2)]
print(lis)

dic = {k:k**2 for k in range(1,11) }
print(dic)
'''
