a, b, c = input().split()
if c>b:
    if b>a:
        print(a, b, c)
    if b<a and a<c:
        print(b, a, c)
    if b<a and c<a:
        print(b, c, a)
if c<b:
    if b>a and c>a:
        print(a, c, b)
    if b<a:
        print(c, b, a)
    if c<a and a<b:
        print(c, a, b)