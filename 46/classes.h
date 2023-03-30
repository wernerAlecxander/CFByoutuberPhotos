#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Veiculo{
public:
    int tipo;
    Veiculo(int tp);
    int getvelmax();
    void setvelmax(int vm);
    bool getligado();
    void setligado(int state);
    string getnome();
    void setnome(string nm);
    void imprimir();
    int getvel();
    void setvel(int vl);
private:
    string nome;
    int velmax;
    bool ligado=false;
    int vel;
};

int Veiculo::getvel(){
    return vel;
}

void Veiculo::setvel(int vl){
    if(this->getligado()==false){
        vel=0;
        cout<<"\nimpossivel mudar velocidade. carro desligado\n";
    }else{
        vel=vl;
    }
}

bool Veiculo::getligado(){
    return ligado;
}


void Veiculo::setligado(int state){
    if(state==1){
        if(getligado()==false){
            this->ligado=true;
            cout<<"\ncarro LIGADO\n";
        } else{
            cout<<"\ncarro ja esta ligado\n";
        }
    } else if (state==0){
        if (getligado()==true){
            this->ligado=false;
            cout<<"\ncarro DESLIGADO\n";
        } else {
            cout<<"\ncarro já esta desligado\n";
        }
    } else {
        std::cout<<"opcao invalida. não foi possivel ligar ou desligar o carro"<<"\n"<<std::endl;
    }
}
int Veiculo::getvelmax(){
    return velmax;
}

void Veiculo::setvelmax(int vm){
    velmax=vm;
}

string Veiculo::getnome(){
    return nome;
}

void Veiculo::setnome(string nm){
    nome=nm;
}

Veiculo::Veiculo(int tp){
    tipo=tp;
    switch(tipo){
    case 1:
        this->setnome("carro");
        this->setvelmax(300);
        this->vel=0;
        this->setligado(0);
        break;
    case 2:
        this->setnome("aviao");
        this->setvelmax(800);
        this->vel=0;
        break;
    case 3:
        this->setnome("navio");
        this->setvelmax(100);
        this->vel=0;
        break;
    default:
        this->setnome("\n no registered vehicle!");
        this->setvelmax(00);
        this->vel=0;
        break;
    }
    setligado(0);
    this->vel=0;


}
void Veiculo::imprimir(){
    std::cout<<"TIPO: ...............: "<<this->tipo<<std::endl;
    std::cout<<"VELOCIDADE MAXIMA....: "<<this->getvelmax()<<std::endl;
    std::cout<<"VELOCIDADE ATUAL.....: "<<this->vel<<std::endl;
    std::cout<<"VEICULO LIGADO.......: "<<this->getligado()<<std::endl;
    std::cout<<"NOME VEICULO ........: "<<this->getnome()<<std::endl;
    std::cout<<"----------------------------"<<std::endl;
}

#endif // CLASSES_H_INCLUDED
