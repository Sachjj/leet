import random

class solution:
    def cool(self, tasks: list[str], n: int) -> int:
        #print(tasks.count())
        #print(chr(65))
        #testD = {chr(a):random.randint(2,10) for a in (range(65,90,1))}
        #testD_sort = dict(sorted(testD.items(), key = lambda item:item[1]))
        #print(min(testD, key=testD.get))
        nits = len(tasks)
        cool = {i:0 for i in tasks}
        numLetters = {i:tasks.count(i) for i in tasks}
        print(numLetters)
        for i in range(nits):
            m = min(cool, key=cool.get)
            print("1st: ", m)
            for k,v in cool.items() : 
                if(v != 0): cool[k] = v - 1
            cool[i] = n


def main():
    p = solution()
    tasks = ["A","A","A","B","B","B"]
    print(p.cool(tasks=tasks, n=2))

if __name__ == '__main__':
    main()