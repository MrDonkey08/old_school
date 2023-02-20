` `1  #include <iostream>

` `2  #include "fecha.h"

` `3  #include <locale.h>

` `4  

` `5  **using namespace std**;

` `6  

` `7  **void** leerFecha(**int** &, **int** &, **int**&);

` `8  **void** visualizarFecha(CFecha& fecha);

` `9  **void** visualizarFechaTxt(CFecha& fecha);

10  

11  

12  **int** main(){

13      setlocale(LC\_ALL, "");

14  

15      CFecha fecha1, fecha2;

16      **int** dd = 0, mm = 0, aaaa = 0;

17  

18      **bool** fechaValida = **true**;

19      **do**{

20          **cout** << "Introduce tu fecha de cumpleaÃ±os: \n\n";

21          leerFecha(dd, mm, aaaa);

22          fechaValida = fecha1.asignarFecha(dd, mm, aaaa);

23          **cout** << "\n";

24          system("pause");

25          system("cls");

26      } **while** (!fechaValida);

27  

28      **cout** << "Tu fecha de cumpleaÃ±os es el ";

29      visualizarFechaTxt(fecha1);

30  

31      **cout** << "\nLa fecha del dÃ­a de hoy es ";

32  

33      fecha2.asignarFecha(0, 0, 0);

34      visualizarFechaTxt(fecha2);

35      **cout** <<"\n";

36  

37      **return** 0;

38  }

39  

40  **void** visualizarFecha(CFecha& fecha){

41      **int** dd = 0, mm = 0, aaaa = 0;

42      fecha.obtenerFecha(dd, mm, aaaa);

43      **cout** << dd << "/" << mm << "/" << aaaa;

44  }

45  

46  

47  **void** visualizarFechaTxt(CFecha& fecha){

48      **int** dd = 0, mm = 0, aaaa = 0;

49      **string** mmTex;

50      fecha.obtenerFecha(dd, mm, aaaa);

51  

52      **switch** (mm){

53          **case** 1: mmTex = "enero"; **break**;

54          **case** 2: mmTex = "febrero"; **break**;

55          **case** 3: mmTex = "marzo"; **break**;

56          **case** 4: mmTex = "abril"; **break**;

57          **case** 5: mmTex = "mayo"; **break**;

58          **case** 6: mmTex = "junio"; **break**;

59          **case** 7: mmTex = "julio"; **break**;

60          **case** 8: mmTex = "agosto"; **break**;

61          **case** 9: mmTex = "septiembre"; **break**;

62          **case** 10: mmTex = "octubre"; **break**;

63          **case** 11: mmTex = "noviembre"; **break**;

64          **case** 12: mmTex = "diciembre"; **break**;

65      }

66  

67      **cout** << dd << " de " << mmTex;

68  }

69  

70  **void** leerFecha(**int**& dia, **int**& mes, **int**& anyo){

71      **cout** << "dÃ­a: "; **cin** >> dia;

72      **cout** << "mes: "; **cin** >> mes;

73      **cout** << "aÃ±o: "; **cin** >> anyo;

74  }
