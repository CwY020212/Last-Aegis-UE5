# Last-Aegis-UE5
Third-Person Cover Shooter | Unreal Engine 5.8 | C++ | Blueprints | Gameplay Ability System

Last Aegis is a solo-developed, sci-fi third-person cover shooter focused on strategic weapon switching, gameplay abilities, and wave-based combat.

This project was developed to explore Unreal Engine's Gameplay Ability System (GAS) and demonstrate gameplay programming and system integration using C++ and Blueprints.

**[Play Last Aegis on itch.io](https://chungwy.itch.io/last-aegis)**

## Gameplay Features

- **Dual Weapon System:** Select two weapons before combat and switch between them.
- **Active & Passive Abilities:** Unique weapon skills, buffs, debuffs, and passive effects.
- **Weapon Progression:** Upgrade weapon passives through the Skill Lab.
- **Enemy Behaviors:** Different enemy movement and attack patterns.
- **Wave-Based Encounters:** Enemy waves followed by a boss fight.
- **Combat UI:** Health, weapon selection, cooldowns, and status indicators.

## Gameplay Screenshots

### Main Menu
![Last Aegis Main Menu](Screenshots/Main%20Menu.png)

### Weapon Selection
![Weapon Selection](Screenshots/Weapon%20Selection.png)

### Skill Lab
![Skill Lab](Screenshots/Skill%20Lab.png)

## Technical Implementation

### C++ — GAS Foundation

- Custom `AEBCharacterBase` implementing `IAbilitySystemInterface`.
- `UAbilitySystemComponent` initialization.
- `UEBAttributeSet` for Health, MaxHealth, Shield, and MaxShield.
- Attribute clamping through `PreAttributeChange` and `PostGameplayEffectExecute`.

### Blueprints — Gameplay Systems

- Weapon equipping, firing, reloading, and switching.
- Gameplay Abilities, buffs, and debuffs.
- Enemy behavior and wave spawning.
- Weapon upgrade and SaveGame systems.
- Combat HUD and Skill Lab UI.

## Repository Scope

This repository contains selected C++ source code for portfolio purposes.

The complete Unreal Engine project and third-party assets are not included. This repository is not a standalone buildable game.

## Development Notes

ChatGPT was used as a learning and development assistant for C++ implementation, Blueprint guidance, and debugging.

This repository is not intended to compile as a standalone game. The playable Windows build is available on itch.io.

Engine: Unreal Engine 5.8

Language: C++ and Blueprint Visual Scripting

Development: Solo project

Platform: Windows

AI Assistance: ChatGPT was used as a development and learning assistant for C++ implementation, Blueprint guidance, and debugging.

Play the Game

Download Last Aegis on itch.io
