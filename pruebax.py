""" Este codigo entrega la diferencia entre momentos (dia-hora-minuto-segundo) """

datos = int(raw_input()) #Numero de datos
for i in range(datos):
    y = [int(a) for a in raw_input().split()]
    bs = 0
    bm = 0
    bh = 0
    seg = y[7]-y[3]
    if seg < 0:
        seg += 60
        bs = 1
    if bs == 1:
        minuts = y[6]-y[2]-1
    else:
        minuts = y[6]-y[2]
    if minuts < 0:
        minuts += 60
        bm = 1
    if bm == 1:
        hours = y[5]-y[1]-1
    else:
        hours = y[5]-y[1]
    if hours < 0:
            hours += 24
            bh = 1
    if bh == 1:
        days = y[4]-y[0]-1
    else:
        days = y[4]-y[0]
print '(' + str(days) + ' ' + str(hours) + ' ' + str(minuts) + ' ' + str(seg) + ') '
