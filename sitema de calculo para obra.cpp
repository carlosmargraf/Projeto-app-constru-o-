
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char menu;

    do
    {
        cout << "   PROGRAMA PARA CALCULOS E MEDIDAS" << endl;
        cout << "  PARA ENGENHEIROS E MESTRE DE OBRAS\n" << endl << endl;

        cout << "                  MENU                  \n\n";
        cout << "     DIGITE O NÚMERO CORRESPONDENTE" <<endl << endl;
        cout << " (1) CÁLCULO DE QUANTIDADE DE TELHAS: \n";
        cout << " (2) CÁLCULO INCLINAÇÃO DE TELHADO: \n";
        cout << " (3) CÁLCULO DE TIJOLOS POR M²: \n";
        cout << " (0) SAIR (EXIT)\n";
        cout << "  >: ";
        cin >> menu;

        switch ( menu )
        {
        case '1':{
            cout << "\n     CÁLCULO DE QUANTIDADE DE TELHAS\n\n";
            float largura;
            float comprimento;
            float calculo;
            float inclinacao = 1.02;
            float calculo_incli;
            float consumo_telha = 15;
            float calculo_consumo;
            float calculo_seguranca;
            float porcentagem = 5;
            float final;
            int total;
            int duas_aguas = 2;

            char menu_1;

            do
            {
                cout << "Por favor digite o número corresponde a quantidade de águas:\n\n";
                cout << " (1) 1 ÁGUA\n";
                cout << " (2) 2 ÁGUAS\n";
                cout << " (0) SAIR (EXIT)\n";
                cout << "  Escolha: ";

                cin >> menu_1;
            
            switch ( menu_1 )
            {
                case '1':{
                cout << "\n Digite por favor o comprimento: ";
                cin >> comprimento;
                cout << "\n Digite por favor a largura: ";
                cin >> largura;
                calculo = comprimento * largura;
                cout << "\n Ok! Total de: " << calculo << "m²" << endl;


                cout << "\n Sabemos o total em m², faremos uma inclinação basica de 20%.";
                calculo_incli = calculo * inclinacao;
                cout << "\n Calculado a inclinação, total de: " << calculo_incli << "m²\n\n";


                cout << "\n A média de consumo de telha, em torno de 15 telhas por m².\n";
                calculo_consumo = calculo_incli * consumo_telha;
                cout << "\n Total de: " << calculo_consumo << " Telhas para: " << calculo_incli << "m²\n\n\n";


                cout << " Ok! Vamos calcular 5% para uma margem de segurança" << endl;
                calculo_seguranca = porcentagem * calculo_consumo;
                final = calculo_seguranca / 100;
                total = final + calculo_consumo;
                cout << " Total de telha a comprar: " << total << endl << endl;
                }break;

                case '2':{
                cout << "\n Digite por favor o comprimento: ";
                cin >> comprimento;
                cout << "\n Digite por favor a largura: ";
                cin >> largura;
                calculo = comprimento * largura * duas_aguas;
                cout << "\n Ok! Total de: " << calculo << "m²" << endl;


                cout << "\n Sabemos o total em m², faremos uma inclinação basica de 20%.";
                calculo_incli = calculo * inclinacao;
                cout << "\n Calculado a inclinação, total de: " << calculo_incli << "m²\n\n";


                cout << "\n A média de consumo de telha, em torno de 15 telhas por m².\n";
                calculo_consumo = calculo_incli * consumo_telha;
                cout << "\n Total de: " << calculo_consumo << " Telhas para: " << calculo_incli << "m²\n\n\n";


                cout << " Ok! Vamos calcular 5% para uma margem de segurança" << endl;
                calculo_seguranca = porcentagem * calculo_consumo;
                final = calculo_seguranca / 100;
                total = final + calculo_consumo;
                cout << " Total de telha a comprar: " << total << endl << endl;
                }break;
                case '0': exit(0);
                default: cout << "\n\n        Número não corresponde." << endl;
                         cout << "      Por favor tente novamente!!\n\n" << endl;

                
            }
            } while (1);            
            
        }break;
        
        case '2':{
              cout << "\n     CÁLCULO INCLINAÇÃO DO TELHADO\n\n";   
              float inclinacao;
              float altura;
              float comprimento;

              cout << " Por favor informe a altura: ";
              cin >> altura;
              cout << " Por favor informe o comprimento: ";
              cin >> comprimento;
              inclinacao = (altura / comprimento) * 100;

              cout << "\n Seu telhado irá subir: " << inclinacao << " % de inclinação\n\n\n";
        }break;

        case '3':{
              cout << "\n     CÁLCULO DE TIJOLOS POR M².\n\n";
              float altura;  
              float largura;
              int tijolo6 = 39;
              int tijolo8 = 28; 
              int tijolo9 = 30;
              float calculo;
              float total;


              char menu_2;

              do
              {
                cout << "Por favor digite o número corresponte a furação do tijolo:\n\n";
                cout << "(1) 6 furos: 9 x 14 x 19 – Residencial\n";
                cout << "(2) 8 furos: 9 x 19 x 19 – Predial\n";
                cout << "(3) 9 furos: 11,5 x 14 x 24 – Residencial e Predial\n";
                cout << "(0) SAIR (EXIT)\n"; 
                cout << "  Escolha: ";   

                cin >> menu_2;

              switch ( menu_2 )
              {
                case '1':{
                    cout << "\n\n6 furos: 9 x 14 x 19 – Residencial\n\n";
                    cout << "Agora vamos ao cálculo de quantos tijolos de 6 furos \npor m² você irá usar em sua obra. "
                            "Um tijolo de 6 furos \ntem por padrão: 9 x 14 x 19cm (medidas de espessura, \naltura e comprimento em centímetros)."
                            "Como será usado \nem pé na obra, vamos ao cálculo dos lados 0,14 x 0,19 = 0,0252m². \nOu seja, 1 tijolo tem 0,0252 m². "
                            "E quantos tijolos cobrem 1m²?" 
                            "\nPara chegar no resultado, o cálculo: 1m² ÷ 0,0252 = 39,68."
                            "Ou seja, \né preciso aproximadamente 39 tijolos de 6 furos para cobrir uma área de 1m².\n\n\n";
                    
                    cout << "Vamos para calculo de uma parede utilizando tijolos de 6 furos.\n\n ";
                    cout << "Por favor digite a altura da parede: ";
                    cin >> altura;
                    cout << "Por favor digite a largura da parede: ";
                    cin >> largura;

                    calculo = altura * largura;
                    total = calculo * tijolo6;
                    cout << "OK! Sua parede mede "<< calculo << "m² você precisa comprar " << total << " tijolos\n\n";
                }break;

                case '2':{
                    cout << "\n\n8 furos: 9 x 19 x 19 – Predial\n\n";
                    cout << "Cálculo com tijolo baiano de 8 furos\n\n"
                            "O que é tijolo baiano? É o tipo mais frágil se comparado\n"
                            "aos outros modelos. Não aguenta cargas estruturais e só pode\n"
                            "ser aplicado para vedação em obras.\n"
                            "Geralmente, gasta-se mais em material de reboco.\n"
                            "O tijolo baiano está presente na etapa de nivelamento de paredes e\n"
                            "apesar do baixo rendimento devido ao alto índice de quebras durante a obra,\n"
                            "a vantagem é o seu desempenho térmico.\n\n\n";
                    
                    cout << "Vamos para calculo de uma parede utilizando tijolos baiano de 8 furos.\n\n ";
                    cout << "Por favor digite a altura da parede: ";
                    cin >> altura;
                    cout << "Por favor digite a largura da parede: ";
                    cin >> largura;

                    calculo = altura * largura;
                    total = calculo * tijolo8;
                    cout << "OK! Sua parede mede "<< calculo << "m² você precisa comprar " << total << " tijolos baiano\n\n";
                }break;

                case '3':{
                    cout << "\n\n9 furos: 11,5 x 14 x 24 – Residencial e Predial\n\n";
                    cout << "Calcular quantos tijolos de 9 furos por metro quadrado uma\n"
                            "área consome, parte do mesmo princípio: Quanto maior é o tijolo,\n"
                            "menos unidades serão gastas.\n"
                            "O tijolo de 9 furos mede 11,5 x 14 x 24cm (espessura, altura\n"
                            "e comprimento em centímetros). Esse é o padrão do tijolo 9 furos\n"
                            "que vai servir para sabermos quantos metros quadrados tem 1 unidade,\n"
                            "e quantos tijolos serão precisos para cobrir uma área de 1 m².";
                    
                    cout << "Vamos para calculo de uma parede utilizando tijolos 9 furos.\n\n ";
                    cout << "Por favor digite a altura da parede: ";
                    cin >> altura;
                    cout << "Por favor digite a largura da parede: ";
                    cin >> largura;

                    calculo = altura * largura;
                    total = calculo * tijolo9;
                    cout << "OK! Sua parede mede "<< calculo << "m² você precisa comprar " << total << " tijolos de 9 furos: 11,5 x 14 x 24 – Residencial e Predial\n\n";
                    }break;
                    case '0': exit(0);
                    default: cout << "\n\n        Número não corresponde." << endl;
                             cout << "      Por favor tente novamente!!\n\n" << endl;
            }
            } while (1);
        }break;

        case '0': exit(0);
        default: cout << "\n\n        Número não corresponde." << endl;
                 cout << "      Por favor tente novamente!!\n\n" << endl;

    }
         

    }while (1);
    return 0;
}