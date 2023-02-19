#if !defined (_CFECHA_H_)
#define _CFECHA_H_

class CFecha{
    // Atributos
    private:
        int dia, mes, anyo;

    // Métodos
    protected:
        bool anyoBisiesto(int aaaa);
        bool fechaValida(int dd, int mm, int aaaa);
    public:
        bool asignarFecha(int dd, int mm, int aaaa);
        void obtenerFecha(int& dd, int& mm, int& aaaa);
        void visualizarFecha();
        void visualizarFechaTextual();
        void leerFecha();
        void signoZodiacal();
};

#endif
