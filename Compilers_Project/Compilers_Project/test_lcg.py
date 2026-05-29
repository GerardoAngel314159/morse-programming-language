def run():
    seed = 12345
    inside = 0
    for i in range(10000):
        # simulate 32-bit signed integer overflow exactly
        seed = (seed * 1103 + 123)
        seed = (seed + 2**31) % 2**32 - 2**31
        rx = seed % 1000
        
        seed = (seed * 1103 + 123)
        seed = (seed + 2**31) % 2**32 - 2**31
        ry = seed % 1000
        
        x = rx / 1000.0
        y = ry / 1000.0
        
        dist = x*x + y*y
        if dist < 1.0:
            inside += 1
            
    print(inside * 4.0 / 10000)
    
run()
