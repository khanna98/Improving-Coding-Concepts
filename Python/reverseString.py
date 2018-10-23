if __name__ == "__main__":
    a = input()
    list1 = a.split()
    for i in range(len(list1)-1,0,-1):
        print(list1[i],end=" ")
    print(list1[0])