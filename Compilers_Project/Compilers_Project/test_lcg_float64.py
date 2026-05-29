def run():
    seed = 12345.0
    inside = 0
    for i in range(100):
        seed = float(seed * 1103.0 + 123.0)
        rx = float(seed % 1000.0)
        seed = float(seed * 1103.0 + 123.0)
        ry = float(seed % 1000.0)
        x = float(rx / 1000.0)
        y = float(ry / 1000.0)
        dist = float(x*x + y*y)
        if i >= 15:
            print(f"dist={dist}, rx={rx}, ry={ry}")
run()
