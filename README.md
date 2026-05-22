<div align="center">
  <img src="./src/assets/imgs/vinheriaArdMS.png" 
       alt="Vinheria Agnello" 
       style="width: 100%; max-width: 850px; border-radius: 15px; box-shadow: 0 10px 30px rgba(139, 0, 0, 0.3);">
</div>

<br><br>

<br><br>

<div align="center">

![Status](https://img.shields.io/badge/Status-Andamento-9B1D30?style=for-the-badge)
![Checkpoint](https://img.shields.io/badge/Checkpoint-02-D4AF37?style=for-the-badge&color=D4AF37)
![Web Development](https://img.shields.io/badge/Edge-Computing-6B3E2A?style=for-the-badge)

</div>


<h1 align="center">
🍷 Vinheria Agnello  
</h1>


<h2 align="center">
📡 Sistema Completo de Monitoramento Ambiental
</h2>

<p align="center">
Sistema embarcado em Arduino Uno integrando <b>LDR</b>, <b>DHT11</b> e <b>Display LCD</b> para monitoramento ambiental inteligente de vinherias.
</p>

---

### 📋 Descrição do Projeto

Este projeto consiste em um sistema completo de monitoramento ambiental utilizando sensores **LDR** (luminosidade) e **DHT11** (temperatura e umidade) conectados a um **Arduino Uno**. O sistema lê continuamente os parâmetros climáticos do ambiente da vinheria, exibe dados em tempo real em um **Display LCD 16x2 I2C** e aciona um conjunto de LEDs coloridos e um buzzer para alertar sobre condições que possam comprometer a conservação dos vinhos

### 📦 Dependências

#### 🛠️ Lista de Componentes

| Identificador | Qtd | Componente | Função no Projeto |
|:-------------:|:---:|:-----------|:------------------|
| U1 | 1 | Arduino Uno | Placa controladora principal |
| U2 | 1 | Sensor DHT11 | Medição de temperatura e umidade |
| U4 | 1 | Display LCD 16x2 I2C | Exibição dos dados em tempo real |
| R1 | 1 | Fotorresistor (LDR) | Sensor de luminosidade ambiente |
| R2, R3, R4 | 3 | Resistor 100 kΩ | Limitação de corrente / Pull-up |
| R6 | 1 | Resistor 1 kΩ | Divisor de tensão para LDR |
| D1 | 1 | LED Verde | Indicador de ambiente ideal |
| D2 | 1 | LED Amarelo | Indicador de nível de atenção |
| D3 | 1 | LED Vermelho | Indicador de nível crítico |
| PIEZO1 | 1 | Buzzer | Alarme sonoro em condições críticas |
| — | 1 | Protoboard | Base para montagem do circuito |
| — | — | Jumpers | Conexões entre componentes |

#### ⚙️ Tecnologias Utilizadas

- ![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=flat-square&logo=arduino&logoColor=white)
- ![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)
- ![Tinkercad](https://img.shields.io/badge/Tinkercad-F3603B?style=flat-square&logo=tinkercad&logoColor=white)

## 📌 Nota 
Na simulação do Tinkercad, o componente DHT11 não está disponível. Por isso, utilizamos sensores analógicos equivalentes (LM35 para temperatura e sensor de umidade analógico) para validar a lógica do sistema. No protótipo físico real, o código seria adaptado para usar a biblioteca DHT.h com o sensor digital DHT11, mas a lógica de monitoramento e alertas permanece a mesma.

### 📚 *Bibliotecas*

> 🔴 **ATENÇÃO:** Este projeto utiliza bibliotecas externas obrigatórias. Sem elas, o código não compilirá.

### 1. Biblioteca DHT Sensor Library
Utilizada para comunicar com o sensor de temperatura e umidade.
*   **Nome na IDE:** `DHT sensor library` (por Adafruit)
*   Como instalar: *IDE Arduino → Sketch → Incluir Biblioteca → Gerenciar Bibliotecas → Buscar por "DHT" → Instalar*

### 2. Biblioteca LiquidCrystal_I2C
Utilizada para controlar o Display LCD através de apenas 2 fios (I2C).
*   **Nome na IDE:** `LiquidCrystal_I2C` (por Frank de Brabander)
*   Como instalar: *IDE Arduino → Sketch → Incluir Biblioteca → Gerenciar Bibliotecas → Buscar por "LiquidCrystal I2C" → Instalar*

> 💡 *Dica: Após instalar a biblioteca do DHT, a própria IDE pode pedir para instalar dependências adicionais (Adafruit Unified Sensor). Aceite a instalação.*

---

### 📐 Diagramas
| Link Tinkercard |
| :---------------------------------------: |
| [Clique aqui para acessar!](https://www.tinkercad.com/things/lsez4V5MCBO-multi-sensor-vinheriaagnello-offgrid) |



#### 🖼️ Diagrama do Circuito
![alt text](src/assets/imgs/MScirc.png)

#### 🖼️ Diagrama Esquemático
![alt text](src/assets/imgs/MSesmt.png)


### 🎥 Explicação

| Link |
| :------------: |
| link aqui |

### 👥 Partipantes

| Nomes         | RM             |
| :-------------| :------------: |
| Felipe Rabelo |  570340
| Gustavo Ferreira Tavares | 569928 |
| Ricardo Salmerón | 572916 |