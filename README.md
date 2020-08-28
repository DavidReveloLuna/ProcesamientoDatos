# PROCESAMIENTO DE DATOS
En este repositorio trabajaremos la parte práctica en Python de algunos temas relacionados con procesamiento de señales y datos. A continuación se presenta la preparación del entorno y el contenido del curso

# Preparación del entorno
    Descargar miniconda desde el siguiente enlace: https://docs.conda.io/en/latest/miniconda.html
    Realizar la instalación convencional
    Ejecutar la consola de miniconda (lo pueden hacer escribiendo miniconda en el buscador principal de windows)

## Crear un entorno con python 3.6 y activarlo
    $ conda create -n MiEntorno anaconda python=3.6
    $ conda activate MiEntorno


## Instalar kernel y jupyter notebook
    $pip install jupyter
    $conda install ipykernel
    $python -m ipykernel install --user --name MiEntorno --display-name "MiEntorno"
    

## Correr el curso
    Descargar el repositorio, ingrear desde conda y ejecutar jupyter notebook
    
    $d:
    $cd [directorio]
    $jupyter notebook
    
    Se abrirá jupyter notebook, entrar a la carpeta scripts y seleccionar el módulo que desee trabajar
    
## Módulos del curso

### [1. Numeros Complejos](https://github.com/DavidReveloLuna/ProcesamientoDatos/blob/master/Scripts/1_NumerosComplejos.ipynb)
### [2. Downsampling](https://github.com/DavidReveloLuna/ProcesamientoDatos/blob/master/Scripts/2_Downsampling.ipynb)
