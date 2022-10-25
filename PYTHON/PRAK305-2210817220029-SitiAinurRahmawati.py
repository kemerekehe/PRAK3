detik=int(input())
hari=detik//86400
jam=(detik-hari*86400)//3600
menit=(detik-jam*3600-hari*86400)//60
detik=(detik-menit*60-jam*3600-hari*86400)
if hari>0:
    print("%d hari %.2d:%.2d:%.2d" %(hari, jam, menit, detik) )
else:
    print("%.2d:%.2d:%.2d" %(jam, menit, detik))