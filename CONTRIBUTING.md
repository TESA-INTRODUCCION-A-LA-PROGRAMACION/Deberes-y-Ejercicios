# Cómo entregar tu trabajo

## Ejercicios 1 y 2: usando la web de GitHub (no necesitas instalar nada pero se recomienda usar Git)

1. Ve a la página principal del repositorio.
2. Haz clic en el desplegable de ramas (dice `main`), escribe el nombre de una
   rama nueva, por ejemplo `maria-calculadora`, y haz clic en **Create branch**.
3. Entra a la carpeta `exercises/01-calculadora/`.
4. Haz clic en **Add file → Upload files** y sube tu archivo `.cpp`.
   - Asegúrate de que quede dentro de tu propia carpeta: `nombre_apellido/`.
     (Si tu carpeta no existe, créala escribiendo `nombre_apellido/`
     en la ruta y GitHub creará la carpeta.)
5. Escribe un mensaje de commit corto, por ejemplo `Agrega calculadora de Maria`.
6. Elige **Commit directly to the `maria-calculadora` branch**
   (NO a `main`) y haz clic en **Commit changes**.
7. Haz clic en **Compare & pull request**, completa la plantilla y
   haz clic en **Create pull request**.
8. Espera la revisión. Si te piden cambios, haz más commits en la misma
   rama y el Pull Request se actualiza solo.

## Git en tu computadora

El flujo básico es:

```
git clone <url-del-repositorio>
git checkout -b nombre-de-tu-rama
git add .
git commit -m "Agrega calculadora de Tu Nombre"
git push -u origin nombre-de-tu-rama
```

Después abre un Pull Request en GitHub.

## Lista de verificación antes de abrir un Pull Request

- [ ] Mi archivo está dentro de mi propia carpeta
- [ ] Mi archivo compila y se ejecuta
- [ ] Seguí la convención de nombres
- [ ] No modifiqué archivos de otras personas

## Errores comunes

- **Subí algo a `main` por accidente:** avisa al líder de la clase, no te preocupes.
- **Mi archivo está en la carpeta equivocada:** puedes moverlo editando la ruta del archivo en GitHub.
- **Subí archivos `.exe` o `.o`:** sube solo el código fuente `.cpp`.
