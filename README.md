# tp6_cpp
Exercice1


<img width="269" height="176" alt="image" src="https://github.com/user-attachments/assets/6c0a200c-3492-4ce5-bb49-26468e867628" />


Dans cet exercice, j’ai créé une classe `Personne` contenant les attributs `nom` et `age`, puis une classe `Etudiant` qui hérite publiquement de `Personne` et possède un attribut supplémentaire `niveau`. J’ai utilisé des constructeurs pour initialiser les attributs des deux classes, en faisant appel au constructeur de la classe mère à l’aide de la liste d’initialisation. J’ai également ajouté une méthode `afficher()` dans chaque classe afin d’afficher les informations complètes de l’étudiant. Cet exercice m’a permis de comprendre le principe de l’héritage, la réutilisation des attributs et l’appel du constructeur de la classe mère.


Exercice2

<img width="242" height="247" alt="image" src="https://github.com/user-attachments/assets/9253b76a-7e6d-4f35-94cf-f16475ba4a15" />

Dans cet exercice, j’ai créé une classe `Compte` contenant les attributs `numero` et `solde`, ainsi que les méthodes `deposer()` et `retirer()` pour effectuer les opérations bancaires. Ensuite, j’ai créé une classe `CompteEpargne` qui hérite publiquement de `Compte` et possède un attribut supplémentaire `tauxInteret`. J’ai utilisé la liste d’initialisation pour appeler le constructeur de la classe mère et initialiser les attributs hérités. J’ai également ajouté la méthode `calculerInteret()` pour calculer les intérêts du compte épargne. Cet exercice m’a permis de pratiquer l’héritage public, l’appel du constructeur de la classe de base et l’utilisation de méthodes spécialisées dans une classe dérivée.

Exercice 3

<img width="277" height="218" alt="image" src="https://github.com/user-attachments/assets/8bacd8c6-1f23-404f-8c16-30c5fe8df29c" />

Dans cet exercice, j’ai créé une classe de base `Produit` contenant les attributs `nom` et `prix`, ainsi qu’une méthode virtuelle `afficherInfos()`. Ensuite, j’ai créé deux classes dérivées : `ProduitAlimentaire`, qui possède un attribut `dateExpiration`, et `ProduitElectronique`, qui possède un attribut `garantie`. J’ai redéfini la méthode `afficherInfos()` dans chaque classe dérivée afin d’afficher toutes les informations spécifiques à chaque produit. J’ai également utilisé le mot-clé `override` pour indiquer la redéfinition de la méthode virtuelle. Cet exercice m’a permis de comprendre l’héritage, le polymorphisme et l’utilisation des méthodes virtuelles en C++.

Exercice 4 

<img width="284" height="361" alt="image" src="https://github.com/user-attachments/assets/ed5cb794-f7c6-4b45-825e-7497ab2b8e46" />

<img width="357" height="352" alt="image" src="https://github.com/user-attachments/assets/f308a7ae-a8c9-4f25-9e2b-ebaa4037ac53" />

Dans cet exercice, j’ai créé une classe de base `Employe` contenant les attributs `nom`, `id` et `salaireDeBase`, ainsi qu’une méthode virtuelle `afficherInfos()` et un destructeur virtuel. Ensuite, j’ai créé deux classes dérivées : `Permanent`, qui possède un attribut `primeAnnuelle`, et `Contractuel`, qui possède les attributs `dureeContrat` et `tauxHoraire`, ainsi qu’une méthode `calculerSalaireMensuel()`. Dans la fonction principale, j’ai utilisé un tableau dynamique de pointeurs vers la classe de base pour stocker différents types d’employés. J’ai appliqué le polymorphisme en appelant `afficherInfos()` sur chaque objet, puis j’ai libéré la mémoire avec `delete`. Cet exercice m’a permis de comprendre l’héritage, le polymorphisme, les pointeurs vers une classe de base et l’importance des destructeurs virtuels.
