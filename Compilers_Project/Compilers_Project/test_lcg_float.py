import struct
def float32(val):
    return struct.unpack('f', struct.pack('f', val))[0]

def run():
    seed = float32(12345.0)
    inside = 0
    for i in range(10000):
        seed = float32(float32(seed * float32(1103.0)) + float32(123.0))
        rx = float32(seed % float32(1000.0))
        
        seed = float32(float32(seed * float32(1103.0)) + float32(123.0))
        ry = float32(seed % float32(1000.0))
        
        x = float32(rx / float32(1000.0))
        y = float32(ry / float32(1000.0))
        
        dist = float32(float32(x*x) + float32(y*y))
        if dist < float32(1.0):
            inside += 1
            
    print(inside * 4.0 / 10000)
    
run()
