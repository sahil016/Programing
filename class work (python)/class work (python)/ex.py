d = {'p':10,'q':20,'r':30}
d1 = {'p':30,'s':40}
d2 = {}

for key in d:
    if key in d1:
        d2[key] = d[key] + d1[key]  # Add the values if the key exists in both
    else:
        d2[key] = d[key]  # Keep the value from the first dictionary if key is not in d1
for key in d1:
    if key not in d:  # Only add if the key is not already in d2
        d2[key] = d1[key]        

print(d2)



