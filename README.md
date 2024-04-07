Description variables + fonctions de la classe "objets" :

int type
  définit par un entier le type d'objet (pour l'instant seulement des bombes)

int animState
  utilisé pendant l'animation pour garder une trace de la frame actuelle

objets()
  constructeur de base, fonction non écrite dans le .cpp

objets(Vector2f)
  initialise la position de l'objet par un Vector2f (vecteur de 2 floats)

std::vector<Texture> textures[2] 
  créer un tableau de 2 vecteurs pour stocker les textures du sprite (valeur 2 modifiable)

Texture base
  texture initiale du sprite

Sprite objet
  création d'un sprite de nom objet

void RandPos()
  définit aléatoirement la position en fonction des dimentions de la map qui sont renseignées directement dans la fonction
    // A MODIFIER

void RandTypeObjet()
  détermine aléatoirement le type de l'objet

  int returnTypeObjet()
    retourne le type de l'objet

  Vector2f returnPos()
    retourne la position de l'objet sous forme Vector2f

  void update()
    update l'objet à chaque frame

  void animation(int)
    anime l'objet, l'int en argument est 'anim_state'

  void explosion()
    gère l'explosion (en collaboration avec les autres classes)

  void Draw(GLint renderModeLoc) cons override
    dessine à l'écran le Sprite de l'objet
