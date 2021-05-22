segments = []
result_points = []
for numberOfIteration in range(int(input())):
    segments.append(list(map(int, input().split())))

segments.sort(key=lambda x: x[1])

while len(segments) > 0:
    segment = segments[0]
    for segment_other in segments[1:]:
        if segment_other[0] <= segment[1] and segment[0] <= segment_other[1]:
            del segments[segments.index(segment_other)]

    result_points.append(str(segment[1]))
    del segments[segments.index(segment)]

print(len(result_points))
print(' '.join(result_points))