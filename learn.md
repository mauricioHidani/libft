# Aprendizado [Libft]
🚩*42 School [São Paulo]* \
📆*Monday, 21 July 2025* - 📌*São Paulo, Brazil*

## Summary
1. [Manipulate string](#manipulate-string) \
	1.1. [ft_strlen](#ft_strlen) \
	1.2. [ft_strlcpy](#ft_strlcpy) \
	1.3. [ft_strlcat](#ft_strlcat) \
	1.4. [ft_strchr](#ft_strchr) \
	1.5. [ft_strrchr](#ft_strrchr) \
	1.6. [ft_strncmp](#ft_strncmp) \
	1.7. [ft_strmapi](#ft_strmapi) \
	1.8. [ft_strnstr](#ft_strnstr)
2. [Manipulate Memory](#manipulate-memory) \
	1.1. [ft_calloc](#ft_calloc) \
	1.2. [ft_strdup](#ft_strdup)

## Manipulate String

### [ft_strlen]()

Pega o tamanaho de uma string.

**Parâmetros**

`str`: String que contém o conteúdo que será contado para determinar o seu
tamanho.

**Retorno**

Tamaho da string.

<details>
<summary>English</summary>

Get the length of string.

**Parameters**

`str`: String containing the content that will be counted to determine its 
length.

**Returns**

Length of string.
</details>
<hr style="background-color: #333; border: none;"></hr>

### [ft_strlcpy]()


<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>

### [ft_strlcat]()

<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>

### [ft_strchr]()

<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>

### [ft_strrchr]()

<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>

### [ft_strncmp]()

<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>

### [ft_strmapi]()

<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>

### [ft_strnstr]()

<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>

---

## Manipulate Memory

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
<hr style="background-color: #333; border: none;"></hr>

### [ft_strdup]()

<details>
<summary>English</summary>

</details>
<hr style="background-color: #333; border: none;"></hr>
