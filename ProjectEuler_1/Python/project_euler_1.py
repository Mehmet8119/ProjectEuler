from datetime import datetime
start_time = datetime.now()

summ = 0

for i in range(1000):
    if (i%3 == 0 or i%5==0):
    	summ += i

print(summ)

end_time = datetime.now()
print('Duration: {}'.format(end_time - start_time))
