# Password Manager CLI (C++)

## Un Gestor de Contraseñas Seguro y Local Basado en Consola

**Password Manager CLI** es una aplicación de línea de comandos (CLI) robusta y ligera, escrita en C++, diseñada para almacenar de forma segura las credenciales de cuentas (usuarios y contraseñas) de manera local.

A diferencia de los gestores basados en la nube, esta herramienta cifra y guarda toda tu información en tu propio sistema, ofreciendo control total sobre tus datos.

## Características Principales

* **Almacenamiento Local Cifrado:** Todos los datos de cuentas se guardan en archivos locales utilizando un algoritmo de cifrado fuerte, asegurando que solo puedan ser accedidos con tu contraseña maestra.

* **Gestión de Perfiles (Entornos):** Permite dividir tus credenciales en diferentes perfiles o entornos (ej: `School`, `Work`, `Personal`). Esto facilita la organización y reduce el riesgo si solo un segmento de datos es comprometido accidentalmente.

* **Ruta Estándar:** Los archivos se almacenan de forma oculta en una ruta estándar del sistema operativo Windows:
  `C:\Users\{user}\AppData\Roaming\Web Design Nodes\Password Manager`