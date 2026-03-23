# ASSINATURA_WIFI_IFPB

| [Data](data) |[Technologies](#tecnologias-utilizadas)| [Docs](#supported-boards) | [Models](#examples) | [SRC](firmware/src) | [Images](images) | [Notebooks](notebooks) | [Interface](web/interface.html) |[Authors](#autores)|
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: |

## Proposito do Projeto
<div style="text-align: justify;">
O propósito deste projeto é investigar, desenvolver e validar uma solução de localização indoor baseada em assinaturas de redes Wi-Fi, utilizando técnicas de Inteligência Artificial embarcada (Edge AI) em dispositivos com recursos limitados, como o ESP32.

A proposta parte da limitação de tecnologias tradicionais, como o GPS, que apresentam baixo desempenho em ambientes internos devido à atenuação dos sinais. Nesse contexto, o projeto explora o uso da infraestrutura Wi-Fi já existente como alternativa viável, eliminando a necessidade de hardware adicional e reduzindo custos de implementação.

Além do desenvolvimento técnico, o projeto busca compreender e mitigar um dos principais desafios desse tipo de sistema: a instabilidade do sinal RSSI. Para isso, são aplicados modelos de Machine Learning capazes de identificar padrões complexos e não lineares, aumentando a robustez e a precisão na identificação de ambientes.

Do ponto de vista prático, a solução proposta tem potencial de aplicação em diferentes cenários, como monitoramento de ativos, navegação indoor e otimização do uso de espaços em ambientes institucionais. Ao mesmo tempo, o projeto contribui academicamente ao fornecer análises experimentais em um ambiente real, servindo como base para pesquisas futuras na área de localização indoor e Edge AI.
</div>

## Tecnologias Utilizadas

### - Hardware

- ESP32 (coleta e inferência)

- Comunicação via Bluetooth

### - Software

- Python

- HTML, CSS e JavaScript (interface)

- Arduino IDE

### - Machine Learning

- [Random Forest (scikit-learn)](https://scikit-learn.org/stable/modules/ensemble.html#random-forests)
- [XGBoost (Documentação Oficial)](https://xgboost.readthedocs.io/en/stable/)

### - Bibliotecas

#### - Análise e visualização

- [pandas](https://pandas.pydata.org/)
- [numpy](https://numpy.org/)
- [matplotlib](https://matplotlib.org/)
- [seaborn](https://seaborn.pydata.org/)

#### - Machine Learning

- [scikit-learn](https://scikit-learn.org/)
- [micromlgen](https://github.com/eloquentarduino/micromlgen)

## Autores

- João Pedro - 20232610025

- Patric Lacouth - 20191370047