def binary_search(l,key):
    beg=0
    end=len(l)-1
    while(beg<=end):
        mid=(beg+end)//2
        mid_val=ord(l[mid])
        if(mid_val==key):
            return mid
        if mid_val>key:
            end=mid-1
        else:
            beg=mid+1    

# l=[1,2,5,7,11,13]
txt="Plaintext: THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG"
key=3
print(binary_search(txt,key))