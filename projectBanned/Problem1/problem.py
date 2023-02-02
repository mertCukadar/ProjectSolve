import numpy as np

hundred_value  = np.arange(0,1000)
collected_items = []



for i in hundred_value:
    if i % 3 == 0 or i % 5 == 0: 
        collected_items.append(i)
    else :
        continue

print(np.sum(collected_items))