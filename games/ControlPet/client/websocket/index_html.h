/* Autogenerated by hxtools bin2c */
#ifdef __cplusplus
extern "C" {
#endif

/* Autogenerated from index.html */
static const unsigned char bin2c_index_html[8407] = {'<','h','t','m','l','>',012,'<','h','e','a','d','>',012,012,' ',' ',' ',' ','<','s','t','y','l','e','>',012,' ',' ',' ',' ',012,' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','f','o','n','t','-','s','i','z','e',':',' ','1','.','5','e','m',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,' ',' ',' ',' ',012,' ',' ',' ',' ','<','/','s','t','y','l','e','>',012,' ',' ',' ',' ','<','s','c','r','i','p','t','>',012,' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','s','o','c','k',';',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','o','n','M','e','s','s','a','g','e','(','e','v','t',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','o','n','s','o','l','e','.','l','o','g','(','"','M','e','s','s','a','g','e',' ','r','e','c','e','i','v','e','d',':',' ','"',' ','+',' ','e','v','t','.','d','a','t','a',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','o','n','C','l','o','s','e','(','e','v','t',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','d','o','c','u','m','e','n','t','.','g','e','t','E','l','e','m','e','n','t','B','y','I','d','(','"','c','o','n','n','_','s','t','a','t','u','s','"',')','.','i','n','n','e','r','H','T','M','L',' ','=',' ','"','D','i','s','c','o','n','n','e','c','t','e','d','"',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','o','n','s','o','l','e','.','l','o','g','(','"','D','i','s','c','o','n','n','e','c','t','e','d','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','o','n','O','p','e','n','(','e','v','t',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','d','o','c','u','m','e','n','t','.','g','e','t','E','l','e','m','e','n','t','B','y','I','d','(','"','c','o','n','n','_','s','t','a','t','u','s','"',')','.','i','n','n','e','r','H','T','M','L',' ','=',' ','"','C','o','n','n','e','c','t','e','d','"',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','o','n','s','o','l','e','.','l','o','g','(','"','C','o','n','n','e','c','t','e','d','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','c','o','n','n','e','c','t','W','S','(','u','r','i',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','o','c','k',' ','=',' ','n','e','w',' ','W','e','b','S','o','c','k','e','t','(','u','r','i',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','o','c','k','.','o','n','m','e','s','s','a','g','e',' ','=',' ','o','n','M','e','s','s','a','g','e',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','o','c','k','.','o','n','o','p','e','n',' ','=',' ','o','n','O','p','e','n',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','c','o','n','n','e','c','t','B','u','t','t','o','n','(',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','o','n','n','e','c','t','W','S','(','"','w','s',':','/','/','"',' ','+',' ','w','i','n','d','o','w','.','l','o','c','a','t','i','o','n','.','h','o','s','t','n','a','m','e',' ','+',' ','"',':','4','8','9','0','/','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','s','e','n','d','C','o','m','m','a','n','d','(','c','m','d',')','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','o','n','s','o','l','e','.','l','o','g','(','"','S','e','n','d','i','n','g',' ','"','+',' ','c','m','d',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','i','f',' ','(','s','o','c','k','.','r','e','a','d','y','S','t','a','t','e',' ','=','=','=',' ','W','e','b','S','o','c','k','e','t','.','O','P','E','N',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','o','c','k','.','s','e','n','d','(','c','m','d',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','}',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','w','i','n','d','o','w','.','a','d','d','E','v','e','n','t','L','i','s','t','e','n','e','r','(','"','l','o','a','d','"',',',' ','f','u','n','c','t','i','o','n','(',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','o','n','n','e','c','t','B','u','t','t','o','n','(',')',';',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',012,' ',' ',' ',' ',' ',' ',' ',' ','}',')',';',012,012,' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','b','u','t','t','o','n','_','n','a','m','e','_','v','a','l','u','e',' ','=',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','l','e','f','t','"',':',' ','0',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','0','"',':',' ','0',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','m','i','d','d','l','e','"',':',' ','1',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','1','"',':',' ','1',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','r','i','g','h','t','"',':',' ','2',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','2','"',':',' ','2',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','c','u','e','"',':',' ','3',',',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','"','3','"',':',' ','3',012,' ',' ',' ',' ',' ',' ',' ',' ','}',';',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','b','u','t','t','o','n','T','o','V','a','l','u','e','(','b','u','t','t','o','n',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','r','e','t','V','a','l',' ','=',' ','-','1',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','r','e','t','V','a','l',' ','=',' ','b','u','t','t','o','n','_','n','a','m','e','_','v','a','l','u','e','[','"','"','+','b','u','t','t','o','n',']',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','r','e','t','u','r','n',' ','r','e','t','V','a','l',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','b','u','t','t','o','n','C','o','l','o','r','(','b','u','t','t','o','n',',',' ','c','o','l','o','r',',',' ','i','n','t','e','n','s','i','t','y',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','y','e','l','l','o','w',' ','=',' ','0',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','b','l','u','e',' ','=',' ','0',';',012,012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','i','f',' ','(','i','n','t','e','n','s','i','t','y',' ','=','=',' ','u','n','d','e','f','i','n','e','d',')',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','i','n','t','e','n','s','i','t','y',' ','=',' ','1','0','0',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','b','u','t','t','o','n','_','i','d','x',' ','=',' ','b','u','t','t','o','n','T','o','V','a','l','u','e','(','b','u','t','t','o','n',')',';',012,012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','i','f',' ','(','b','u','t','t','o','n','_','i','d','x',' ','>','=',' ','0',')',' ',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','i','n','t','e','n','s','i','t','y',' ','=',' ','M','a','t','h','.','m','a','x','(','0',',',' ','M','a','t','h','.','m','i','n','(','i','n','t','e','n','s','i','t','y',',',' ','1','0','0',')',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','b','r','i','g','h','t','n','e','s','s',' ','=',' ','p','a','r','s','e','I','n','t','(','(','i','n','t','e','n','s','i','t','y',' ','*',' ','6','0',')',' ','/',' ','1','0','0',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','i','f',' ','(','c','o','l','o','r',' ','=','=','=',' ','"','y','e','l','l','o','w','"',' ','|','|',' ','c','o','l','o','r',' ','=','=','=',' ','"','w','h','i','t','e','"',')',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','y','e','l','l','o','w',' ','=',' ','b','r','i','g','h','t','n','e','s','s',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','}',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','i','f',' ','(','c','o','l','o','r',' ','=','=','=',' ','"','b','l','u','e','"',' ','|','|',' ','c','o','l','o','r',' ','=','=','=',' ','"','w','h','i','t','e','"',')',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','l','u','e',' ','=',' ','b','r','i','g','h','t','n','e','s','s',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','}',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','e','n','d','C','o','m','m','a','n','d','(','"','@','l','i','g','h','t',':','"','+','b','u','t','t','o','n','_','i','d','x','+','"',':','"','+','y','e','l','l','o','w','+','"',':','"','+','b','l','u','e','+','"',':',';','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','d','i','s','p','e','n','s','e','(',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','e','n','d','C','o','m','m','a','n','d','(','"','@','d','i','s','p','e','n','s','e',';','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','g','o','o','d','R','e','s','u','l','t','(',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','o','s','i','t','i','v','e','S','o','u','n','d','(',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n','C','o','l','o','r','(','"','l','e','f','t','"',',','"','o','f','f','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n','C','o','l','o','r','(','"','m','i','d','d','l','e','"',',','"','o','f','f','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n','C','o','l','o','r','(','"','r','i','g','h','t','"',',','"','o','f','f','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','d','i','s','p','e','n','s','e','(',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','n','e','w','R','o','u','n','d','(',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','b','a','d','R','e','s','u','l','t','(',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','n','e','g','a','t','i','v','e','S','o','u','n','d','(',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n','C','o','l','o','r','(','"','l','e','f','t','"',',','"','o','f','f','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n','C','o','l','o','r','(','"','m','i','d','d','l','e','"',',','"','o','f','f','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n','C','o','l','o','r','(','"','r','i','g','h','t','"',',','"','o','f','f','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','n','e','w','R','o','u','n','d','(',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','p','l','a','y','A','u','d','i','o','(','s','o','u','n','d',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','e','n','d','C','o','m','m','a','n','d','(','"','@','p','l','a','y','a','u','d','i','o',':','"','+','s','o','u','n','d','+','"',':',';','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','n','e','w','R','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','s','e','n','d','C','o','m','m','a','n','d','(','"','@','r','e','i','n','i','t','i','a','l','i','z','e',';','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,' ',' ',' ',' ',012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','p','o','s','i','t','i','v','e','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','p','o','s','i','t','i','v','e','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','n','e','g','a','t','i','v','e','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','n','e','g','a','t','i','v','e','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','d','o','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','d','o','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','c','l','i','c','k','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','c','l','i','c','k','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','s','q','u','e','a','k','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','s','q','u','e','a','k','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','l','e','f','t','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','l','e','f','t','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','m','i','d','d','l','e','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','m','i','d','d','l','e','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','r','i','g','h','t','S','o','u','n','d','(',')',012,' ',' ',' ',' ',' ',' ',' ',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','p','l','a','y','A','u','d','i','o','(','"','r','i','g','h','t','"',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','c','o','l','o','r','s',' ','=',' ','[','"','w','h','i','t','e','"',',','"','y','e','l','l','o','w','"',',','"','b','l','u','e','"',']',';',012,012,' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','c','u','r','r','e','n','t','_','c','o','l','o','r','_','i','n','d','e','x',' ','=',' ','[','0',',','0',',','0',']',';',012,' ',' ',' ',' ',' ',' ',' ',' ',012,' ',' ',' ',' ',' ',' ',' ',' ','f','u','n','c','t','i','o','n',' ','n','e','x','t','C','o','l','o','r','(','b','u','t','t','o','n',')',' ','{',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','v','a','r',' ','b','u','t','t','o','n','_','i','d','x',' ','=',' ','b','u','t','t','o','n','T','o','V','a','l','u','e','(','b','u','t','t','o','n',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','c','u','r','r','e','n','t','_','c','o','l','o','r','_','i','n','d','e','x','[','b','u','t','t','o','n','_','i','d','x',']',' ','=',' ','(','c','u','r','r','e','n','t','_','c','o','l','o','r','_','i','n','d','e','x','[','b','u','t','t','o','n','_','i','d','x',']',' ','+',' ','1',')',' ','%',' ','c','o','l','o','r','s','.','l','e','n','g','t','h',';',012,' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','b','u','t','t','o','n','C','o','l','o','r','(','b','u','t','t','o','n','_','i','d','x',',',' ','c','o','l','o','r','s','[','c','u','r','r','e','n','t','_','c','o','l','o','r','_','i','n','d','e','x','[','b','u','t','t','o','n','_','i','d','x',']',']',')',';',012,' ',' ',' ',' ',' ',' ',' ',' ','}',012,012,012,' ',' ',' ',' ','<','/','s','c','r','i','p','t','>',012,'<','/','h','e','a','d','>',012,012,'<','b','o','d','y',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','w','i','d','t','h',':',' ','1','0','0','%',';',' ','p','a','d','d','i','n','g',':',' ','0',';','"','>',012,' ',' ',' ',' ','S','t','a','t','u','s',':',' ','<','s','p','a','n',' ','i','d','=','"','c','o','n','n','_','s','t','a','t','u','s','"','>','D','i','s','c','o','n','n','e','c','t','e','d','<','/','s','p','a','n','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','m','a','r','g','i','n',':',' ','0',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','w','i','d','t','h',';',' ','1','0','0','%',';',' ','m','a','r','g','i','n',':',' ','0',';',' ','p','a','d','d','i','n','g',':',' ','0',';','"','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','1','0','0','%',';',' ','h','e','i','g','h','t',':',' ','8','%',';',' ','d','i','s','p','l','a','y',':',' ','f','l','e','x',';','"','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','c','o','l','o','r',':',' ','b','l','a','c','k',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'l','e','f','t',047,',',047,'w','h','i','t','e',047,')',';','"',' ','>','W','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','c','o','l','o','r',':',' ','b','l','a','c','k',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'m','i','d','d','l','e',047,',',047,'w','h','i','t','e',047,')',';','"','>','W','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','c','o','l','o','r',':',' ','b','l','a','c','k',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'r','i','g','h','t',047,',',047,'w','h','i','t','e',047,')',';','"','>','W','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','1','0','0','%',';',' ','h','e','i','g','h','t',':',' ','8','%',';',' ','d','i','s','p','l','a','y',':',' ','f','l','e','x',';','"','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','b','l','u','e',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'l','e','f','t',047,',',047,'b','l','u','e',047,')',';','"',' ','>','B','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','b','l','u','e',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'m','i','d','d','l','e',047,',',047,'b','l','u','e',047,')',';','"','>','B','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','b','l','u','e',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'r','i','g','h','t',047,',',047,'b','l','u','e',047,')',';','"','>','B','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','1','0','0','%',';',' ','h','e','i','g','h','t',':',' ','8','%',';',' ','d','i','s','p','l','a','y',':',' ','f','l','e','x',';','"','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','y','e','l','l','o','w',';',' ','c','o','l','o','r',':',' ','b','l','a','c','k',';',' ',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'l','e','f','t',047,',',047,'y','e','l','l','o','w',047,')',';','"',' ','>','Y','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','y','e','l','l','o','w',';',' ','c','o','l','o','r',':',' ','b','l','a','c','k',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'m','i','d','d','l','e',047,',',047,'y','e','l','l','o','w',047,')',';','"','>','Y','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','y','e','l','l','o','w',';',' ','c','o','l','o','r',':',' ','b','l','a','c','k',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'r','i','g','h','t',047,',',047,'y','e','l','l','o','w',047,')',';','"','>','Y','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','1','0','0','%',';',' ','h','e','i','g','h','t',':',' ','8','%',';',' ','d','i','s','p','l','a','y',':',' ','f','l','e','x',';','"','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','d','a','r','k','g','r','a','y',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'l','e','f','t',047,',',047,'o','f','f',047,')',';','"',' ','>','O','F','F','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','d','a','r','k','g','r','a','y',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'m','i','d','d','l','e',047,',',047,'o','f','f',047,')',';','"','>','O','F','F','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','d','a','r','k','g','r','a','y',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','"',' ','o','n','c','l','i','c','k','=','"','b','u','t','t','o','n','C','o','l','o','r','(',047,'r','i','g','h','t',047,',',047,'o','f','f',047,')',';','"','>','O','F','F','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','1','0','0','%',';',' ','h','e','i','g','h','t',':',' ','8','%',';',' ','d','i','s','p','l','a','y',':',' ','f','l','e','x',';','"','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ',' ',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','n','e','x','t','C','o','l','o','r','(',047,'l','e','f','t',047,')',';','"',' ','>','N','E','X','T',' ','C','O','L','O','R','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','n','e','x','t','C','o','l','o','r','(',047,'m','i','d','d','l','e',047,')',';','"','>','N','E','X','T',' ','C','O','L','O','R','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','"',' ','o','n','c','l','i','c','k','=','"','n','e','x','t','C','o','l','o','r','(',047,'r','i','g','h','t',047,')',';','"','>','N','E','X','T',' ','C','O','L','O','R','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','1','0','0','%',';',' ','h','e','i','g','h','t',':',' ','8','%',';',' ','d','i','s','p','l','a','y',':',' ','f','l','e','x',';','"','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ',' ',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','d','i','s','p','e','n','s','e','(',')',';','"',' ','>','D','I','S','P','E','N','S','E','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','n','e','w','R','o','u','n','d','(',')',';','"','>','R','E','I','N','I','T','I','A','L','I','Z','E','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','3','0','%',';',' ','m','i','n','-','w','i','d','t','h',':',' ','4','0','p','x',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ',' ','m','a','r','g','i','n','-','l','e','f','t',':',' ','a','u','t','o',';',' ','"',' ','o','n','c','l','i','c','k','=','"','s','q','u','e','a','k','S','o','u','n','d','(',')',';','"','>','S','Q','U','E','A','K','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','/','d','i','v','>',012,012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','1','0','0','%',';',' ','h','e','i','g','h','t',':',' ','2','0','%',';',' ','d','i','s','p','l','a','y',':',' ','f','l','e','x',';','"','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','4','5','%',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','d','a','r','k','g','r','e','e','n',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','m','a','r','g','i','n','-','r','i','g','h','t',':',' ','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','g','o','o','d','R','e','s','u','l','t','(',')',';','"','>','G','O','O','D','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','b','u','t','t','o','n',' ','s','t','y','l','e','=','"','w','i','d','t','h',':',' ','4','5','%',';',' ','h','e','i','g','h','t',':',' ','1','0','0','%',';',' ','b','a','c','k','g','r','o','u','n','d','-','c','o','l','o','r',':',' ','d','a','r','k','r','e','d',';',' ','c','o','l','o','r',':',' ','w','h','i','t','e',';',' ','m','a','r','g','i','n','-','l','e','g','f','t',':',' ','a','u','t','o',';','"',' ','o','n','c','l','i','c','k','=','"','b','a','d','R','e','s','u','l','t','(',')',';','"','>','F','A','I','L','<','/','b','u','t','t','o','n','>',012,' ',' ',' ',' ','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','d','i','v',' ','s','t','y','l','e','=','"','h','e','i','g','h','t',':',' ','4','%',';',' ','"','>','<','/','d','i','v','>',012,012,' ',' ',' ',' ','<','/','d','i','v','>',012,'<','/','b','o','d','y','>',012,012,'<','/','h','t','m','l','>',};

#ifdef __cplusplus
} /* extern "C" */
#endif
