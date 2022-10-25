angka=int(input())
if angka>=100:
    print("Anda Menginput Melebihi Limit Bilangan")
elif angka>10 and angka<20:
    print("Belasan")
elif angka>=20 or angka==10:
    print("Puluhan");
elif angka<10 and angka>0:
    print("Satuan")
elif angka==0:
    print("Nol")