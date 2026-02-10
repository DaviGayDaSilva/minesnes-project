# 🎮 Fuck The Hardware - SNES Minecraft 2D

> Uma versão **ultra-simplificada** de Minecraft para Super Nintendo (SNES)  
> Porque às vezes é melhor **foder-se o hardware** do que complicar tudo.

## 📝 Sobre o Projeto

**Fuck The Hardware** é um jogo sandbox 2D side-scroller estilo Minecraft/Terraria feito para rodar no SNES com o máximo de simplicidade possível. O objetivo é trazer a essência de Minecraft (minerar, construir, craftar) respeitando os limites do hardware clássico.

- ✅ Open-source (MIT License)
- ✅ ROM compilada (.sfc)
- ✅ Feito em C com PVSNESlib
- ✅ Mundo 2D procedural
- ✅ Crafting e construção
- ✅ IA básica de monstros

---

## 🎮 Controles (SNES)

| Botão | Ação |
|-------|------|
| **D-Pad ←/→** | Mover esquerda/direita |
| **A** | Pular |
| **B** | Minerar/Quebrar bloco |
| **Y** | Colocar bloco |
| **X** | Abrir inventário |
| **Start** | Pausar |

---

## 🌍 Features Principais

### 🧱 Blocos (4 Tipos)
- **Dirt** (Terra) - Quebra rápido, base para construção
- **Grass** (Grama) - Topo do terreno, decorativo
- **Stone** (Pedra) - Quebra lento, mais durável
- **Wood** (Madeira) - Matéria-prima para crafting

### 🎒 Sistema de Inventário
- Máximo 8 slots
- Blocos empilháveis (até 99 cada)
- Ferramentas (picareta, espada)
- Comida (maçã, carne)

### 🔨 Crafting Ultra-Simplificado
```
2× Madeira → 4× Bloco de Madeira
4× Madeira → 1× Picareta (quebra pedra)
2× Pedra   → 1× Espada (mata monstros)
1× Carne   → Recupera vida
```

### 👹 Monstros Básicos
- **Zombie** - Anda lentamente, ataca ao tocar
- **Skeleton** - Atira ocasionalmente
- **Creeper** - Explode perto do jogador
- Spawnam à noite, desaparecem ao amanhecer

### 🌙 Ciclo Dia/Noite
- **Dia** (6h-18h) - Exploração segura
- **Noite** (18h-6h) - Monstros spawnão

---

## 🛠️ Tecnologias

- **Linguagem:** C
- **Compiler:** WLA-DX + GCC para SNES
- **Biblioteca:** [PVSNESlib](https://github.com/alekmaul/pvsneslib)
- **ROM:** .sfc (Super Nintendo Entertainment System)
- **Tamanho:** ~2-3 MB

---

## 📦 Como Compilar

### Pré-requisitos
- Linux/macOS/Windows
- [PVSNESlib](https://github.com/alekmaul/pvsneslib) instalado
- GCC cross-compiler para SNES
- Make

### Passos

```bash
# Clone o repositório
git clone https://github.com/DaviGayDaSilva/minesnes-project.git
cd minesnes-project

# Compile
make

# ROM gerada em /rom/fuck-the-hardware.sfc
```

### Rodar no Emulador
```bash
# Use Snes9x, Higan ou similar
snes9x rom/fuck-the-hardware.sfc
```

---

## 📂 Estrutura de Arquivos

```
minesnes-project/
├── README.md                    # Este arquivo
├── LICENSE                      # MIT License
├── Makefile                     # Build configuration
├── src/
│   ├── main.c                  # Loop principal do jogo
│   ├── main.h
│   ├── world.c                 # Geração e renderização de blocos
│   ├── world.h
│   ├── player.c                # Lógica do personagem
│   ├── player.h
│   ├── inventory.c             # Sistema de inventário
│   ├── inventory.h
│   ├── crafting.c              # Receitas de crafting
│   ├── crafting.h
│   ├── enemy.c                 # IA dos monstros
│   ├── enemy.h
│   └── util.h                  # Funções auxiliares
├── graphics/
│   ├── tiles_16x16.png         # Tileset (dirt, grass, stone, wood)
│   ├── player_sprite.png       # Sprite do personagem
│   ├── enemies_sprite.png      # Sprites dos monstros
│   └── README.md               # Guia de sprite sheets
├── rom/
│   └── fuck-the-hardware.sfc   # ROM compilada
└── docs/
    ├── CONTRIBUTING.md         # Como contribuir
    ├── GAME_DESIGN.md          # Design document
    └── BUILDING.md             # Instruções de build detalhadas
```

---

## 🚀 Roadmap

- [ ] v0.1 - Renderização de mundo 2D e movimento do jogador
- [ ] v0.2 - Sistema de blocos e destruição
- [ ] v0.3 - Inventário e crafting básico
- [ ] v0.4 - Monstros simples e IA
- [ ] v0.5 - Ciclo dia/noite
- [ ] v1.0 - Release da ROM
- [ ] v1.1 - Otimizações de performance
- [ ] v1.2 - Mais tipos de blocos e itens

---

## 🤝 Como Contribuir

Quer ajudar? Leia [CONTRIBUTING.md](docs/CONTRIBUTING.md) para saber como!

### Maneiras de Contribuir
- 🐛 Reporte bugs e issues
- 💡 Sugira features
- 🎨 Crie ou melhore sprites
- 💻 Envie pull requests com código
- 📝 Melhore a documentação

---

## 📜 Licença

Este projeto está sob a licença **MIT**. Veja [LICENSE](LICENSE) para detalhes.

---

## 👨‍💻 Autor

**DaviGayDaSilva**  
GitHub: [@DaviGayDaSilva](https://github.com/DaviGayDaSilva)

---

## 🎮 Emuladores Recomendados

- [Snes9x](http://www.snes9x.com/) - Rápido e fácil
- [Higan](https://byuu.org/) - Muito preciso
- [bsnes](https://github.com/bsnes-emu/bsnes) - Preciso e moderno

---

**Divirta-se! 🚀**