# UND4_Tarefa2

# Controle de Pinos GPIO com BitDogLab

## Descrição do Projeto
Este projeto utiliza a ferramenta educacional **BitDogLab** para controlar pinos GPIO do microcontrolador **RP2040**. A comunicação entre o sistema embarcado e o usuário ocorre via UART, permitindo o controle de LEDs RGB e de um buzzer conectado a GPIOs específicas.

## Funcionalidades
1. **Controle de LEDs RGB**:
   - GPIO 11: LED verde
   - GPIO 12: LED azul
   - GPIO 13: LED vermelho
2. **Controle do Buzzer**:
   - GPIO 21: Buzzer com sinal sonoro por 2 segundos.
3. **Comandos UART** para interação com o microcontrolador:
   - `green`: Liga o LED verde.
   - `blue`: Liga o LED azul.
   - `red`: Liga o LED vermelho.
   - `white`: Liga todos os LEDs (luz branca).
   - `off`: Desliga todos os LEDs.
   - `buzz`: Aciona o buzzer por 2 segundos.
   - `exit`: Reinicia o sistema e habilita o modo de gravação.

## Componentes Necessários
- **BitDogLab** (versão 6.3).
- Cabo USB (micro-USB para USB-A).
- Computador com ambiente de desenvolvimento configurado.

## Configuração do Ambiente
1. **Instalar as Dependências**:
   - Visual Studio Code.
   - Pico SDK.
   - Simulador Wokwi.
2. **Clonar o Repositório**:
   ```bash
   git clone https://github.com/elioenai365/UND4_Tarefa2.git
      ```
3. **Configurar o Ambiente de Desenvolvimento**:
   - Abrir o projeto no VS Code.
   - Certificar-se de que as extensões de C/C++ estão instaladas.

## Estrutura do Projeto
```
.
├── src
│   ├── main.c          # Código principal
├── include
│   ├── menu.h          # Cabeçalhos e definições
├── .vscode             # Configurações do VS Code
├── CMakeLists.txt      # Configuração do CMake
├── pico_sdk_import.cmake
└── README.md           # Documentação
```

## Como Executar
1. **Build do Projeto**:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```
2. **Carregar no Simulador Wokwi**:
   - Abra o arquivo `wokwi.toml` no simulador.
   - Verifique a comunicação UART.
3. **Interagir com o Sistema**:
   - Utilize o software de terminal (e.g., PuTTY) para enviar comandos.

## Testes Realizados
- **LEDs RGB**:
  - Verificado o controle individual e combinado das cores.
- **Buzzer**:
  - Testado o sinal sonoro por 2 segundos.
- **Comandos UART**:
  - Garantido que todos os comandos funcionam conforme esperado.

## Vídeo de Demonstração
Assista ao vídeo de apresentação dos resultados no link abaixo:


## Contribuidores
- **Líder do Projeto**: Elioenai
- **Desenvolvedores**:
  - Elioenai Santana de Jesus
## Licença
Este projeto é licenciado sob a [MIT License](LICENSE).
