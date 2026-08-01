for i in range(1,101):
    if i%7==0:
        print(i,end=' ')

lst = [1,2,2,3,3,3,3]
new_lst = list(set(lst))
print("去重后：",new_lst)

d = {"a":1, "b":2, "c":3}
swap_d = {v:}