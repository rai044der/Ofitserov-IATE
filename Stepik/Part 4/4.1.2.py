n, W = map(lambda x: int(x), input().split())
result_price = 0
subjects = []

for i in range(n):
    c, w = map(lambda x: int(x), input().split())
    subjects.append([c, w])

subjects.sort(key=lambda x: -(x[0] / x[1]))


for subject in subjects:
    if subject[1] <= W:
        result_price += subject[0]
        W -= subject[1]

    elif 0 < W < subject[1]:
        result_price += subject[0] * (W / subject[1])
        W = 0

    if W == 0:
        break

print(result_price)