class solution:
    def rev(self, s : str) -> str:
        splitstr = list(s.split(' '))
        arr = []
        for i in splitstr:
            arr.append(''.join(list(reversed(i))))
            #print((list(reversed(splitstr[0]))))
        #print(' '.join(splitstr))
        print(' '.join(arr))

def main():
    p = solution()
    txt = "Let's take LeetCode contest"
    p.rev(txt)

if __name__ == '__main__':
    main()