# ShootingSam

A feature-complete 3D Third-Person Shooter (TPS) prototype built in Unreal Engine. This project features responsive character mechanics, a dynamic user interface, visual feedback systems, and an advanced, state-driven Enemy AI built using industry-standard architecture.

## 🚀 Key Features

### 👤 Player Mechanics & Controls
* **Locomotion:** Full 3D movement system including walking, running, and jumping based on player input.
* **Combat:** Smooth aiming mechanics paired with a responsive weapon shooting system.
* **UI/HUD:** Dynamic crosshair (reticle) and a real-time Player Health HUD to track vitals.

### 🧠 Advanced Enemy AI (Behavior Tree Architecture)
The enemy AI is driven by an Unreal Engine **Behavior Tree** and **Blackboard** framework, allowing it to dynamically switch states based on player visibility and tactical conditions:
* **Sight & Engagement:** Leverages AI Perception. If the player is detected in sight, the Behavior Tree switches to an offensive node to engage and shoot.
* **Tactical Chase:** If line of sight is broken, the Blackboard updates the target location, driving the AI to chase the player's last known position.
* **Cooldown & Return:** If the player remains hidden, a timer decorator triggers a wait state. If the cooldown expires without re-detection, the AI executes a task to safely return to its initial spawn vector.

### 💥 Combat Feedback & Win/Loss Conditions
* **Visual Effects (VFX):** Immersive impact effects upon bullet hits for satisfying, immediate combat feedback.
* **Health System:** Both the player and enemies feature functional health pools. Reaching zero (or less) health triggers character death and handles game-over logic.

## 📦 Core Assets Integrated
* **Paragon: Wraith Asset Pack:** High-fidelity character meshes, materials, and custom animation sequences.
* **Shooter Game Pack:** Core gameplay framework and foundational environment assets.

## 🛠️ Built With
* **Engine:** Unreal Engine
* **Framework:** Blueprints / Behavior Trees