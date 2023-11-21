from datetime import datetime
start_time = datetime.now()

threes = int(0)
fives = int(0)

for i in range(1000):
   ##s print(i)
    threes+=3
    fives+=5

print(threes)
print(fives)
print(threes+fives)

end_time = datetime.now()
print('Duration: {}'.format(end_time - start_time))