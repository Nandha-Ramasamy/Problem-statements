ex1='5 6 8'
ex1_='10 5 1 0 2'
ex2='10 5 9'
ex2_='1 2 3 4 5 6 7 8 9 10'

li=input() or ex2.split(" ")
li2=input() or ex2_.split(" ")
size=int(len(li2))
li=list(map(int,li))
li2=list(map(int,li2))
flag=0
#flag=int(flag)
for i in range(size):
    for j in range(size):
        if j+i>size:
            break
        s=sum(li2[i:i+j])
        if s>=li[1] and s<=li[2]:
            flag+=1
print(flag)#OUTPUT for ex2 = 10

