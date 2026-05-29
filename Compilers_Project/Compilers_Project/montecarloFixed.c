FUNC FLOAT main ( ) {
    INT iter = 0 ;
    PRINT "ingresa iteraciones" ;
    INPUT iter ;
    INT inside = 0 ;
    INT i = 0 ;
    INT seed = 12345 ;
    
    WHILE ( i < iter ) {
        seed = seed * 1103 + 123 ;
        seed = seed % 65536 ;
        INT rx = seed % 1000 ;
        
        seed = seed * 1103 + 123 ;
        seed = seed % 65536 ;
        INT ry = seed % 1000 ;
        
        FLOAT x = rx / 1000.0 ;
        FLOAT y = ry / 1000.0 ;
        
        FLOAT xx = x * x ;
        FLOAT yy = y * y ;
        FLOAT dist = xx + yy ;
        
        IF ( dist < 1.0 ) {
            inside = inside + 1 ;
        }
        
        i = i + 1 ;
    }
    
    FLOAT pi = inside * 4.0 / iter ;
    PRINT "Aproximacion de Pi" ;
    PRINT pi ;
}
