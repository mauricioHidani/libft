# Aprendizado [Libft]
🚩_42 School [São Paulo]_ \
📆_Monday, 21 July 2025_ - 📌_São Paulo, Brazil_

## Manipulate string

### [ft_strlen]()

Pega o tamanaho de uma string.

**Parâmetros**

- `str`: String que contém o conteúdo que será contado para determinar o seu
tamanho.

**Retorno**

Tamaho da string.

<details>
<summary>English</summary>

Get the length of string.

**Parameters**

- `str`: String containing the content that will be counted to determine its 
length.

**Returns**

Length of string.
</details>

### [ft_strlcpy]()



<details>
<summary>English</summary>

</details>


### [ft_calloc]()

Aloca espaços na memória de acordo com o tamanho do tipo 
(`memsize`) e da quantidade (`length`), com todos os valores definidos como 
zero.

Quanto o tamanho do tipo e a quantidade são definidos como nulos (`zeros`), ou 
mesmo quando ambos excederem o tamanho viável de `size_t`, que pode variar 
entre 32-bits (`unsigned int`) e 64-bits (`unsigned long`). Retorna a alocação 
de um byte na memória.

**Parêmetros**

- `memsize`: Tamanho do tipo que será alocado na memória.
- `length`: Quantidade ou tamanho dos espaços com o tamanho do tipo alocado na 
memória.

**Retorno**

Espaço na memória alocado com todos os seus valos definidos como zero.

<details>
<summary>English</summary>

Allocates memory spaces according to type size (`memsize`) and quantity 
(`length`), with all values set to zero.

When type size and quantity are set to null (`zero`), or even when both exceed 
the feasible size of `size_t`, which can very between 32-bits (`unsigned int`) 
and 64-bits (`unsigned long`) architectures. Returned the allocation of one 
byte in memory.

**Parameters**

- `memsize`: Size of the type will be allocated in memory.
- `length`: Quantity or size of spaces with the size of the type allocated in 
memory.

**Returns**

Allocated memory spaces with all its values set to zero.
</details>
