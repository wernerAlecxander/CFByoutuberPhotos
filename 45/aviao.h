#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED


class Aviao{
    public:
        int vel=0;
        int velmax;
        std::string tipo;
        Aviao(int tp);
        void imprimir();
    private:
};
Aviao::Aviao(int tp){
    if(tp==1){
        tipo="jato";
        velmax=800;
    } else if(tp==2){
        tipo="monomotor";
        velmax=300;
    } else if(tp==3){
        tipo="planador";
        velmax=100;
    }else{
        tipo="não existe este modelo de aviao";
        velmax=-1;
    }
}
void Aviao::imprimir(){
    std::cout<<"TIPO: ...............: "<<tipo<<std::endl;
    std::cout<<"VELOCIDADE_MAXIMA....: "<<velmax<<std::endl;
    std::cout<<"VELOCIDADE ATUAL.....: "<<vel<<std::endl;
    std::cout<<"----------------------------"<<std::endl;
}

#endif // AVIAO_H_INCLUDED
