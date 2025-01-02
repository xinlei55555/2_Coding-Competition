def main():
    n = int(input())
    for i in range(n):
        verdict = False
        t = int(input())
        elements = list(map(int, input().split()))
        for j in range(t-1) :
            k = j + 1
            if k!= j and abs(elements[j] - elements[k]) < elements[k] and abs(elements[j] - elements[k]) < elements[j] and elements[j] + elements[j] > elements[k] and elements[k] + elements[k] > elements[j]:
                verdict = True
                # print(elements[j], elements[k])
        if verdict:
            print("YES")
        else:
            print("NO")
            
        
        
if __name__ == '__main__':
    main()