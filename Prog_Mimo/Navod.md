# Portfolio web

Tento kód obsahuje web-stránku, ktorú je možné využiť pre zostrojenie vlastného portfólia. Pôvodná stránka bola vytvorená za pomoci React JS, my sme sa rozhodli ju prepísať do čístého HTML s pomocou frameworku Tailwind pre lepšie pochopenie štrukturizácie kódu. Na stránku zostrojenú v React JS a aj na generovanie komponentov na základe obsahu, sa pozrieme v link: "<link.>"

## Boilerplate

```
 <!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, 
                initial-scale=1.0" />
    <title>Portfólio</title>
    <link href="https://unpkg.com/tailwindcss@^2/dist/tailwind.min.css" rel="stylesheet">
    <link rel="stylesheet" 
            href="https://pro.fontawesome.com/releases/v5.10.0/css/all.css" 
            integrity="sha384-AYmEC3Yw5cVb3ZcuHtOA93w35dYTsvhLPVnYs9eStHfGJvOvKxVfELGroGkvsg+p" 
            crossorigin="anonymous"/>
  </head>
  <body>

  </body>
</html>
```

Knižnince a frameworky, ktoré sme využili pri programovaní webstránky. 

## Navbar

Správny web by mal obsahovať isté navigačné prostredie. V našom prípade to je "Navbar".

```
<header class="bg-gray-800 md:sticky top-0 z-10">
    <div class="container mx-auto flex 
                flex-wrap p-5 flex-col md:flex-row 
                items-center justify-around">
      <a class="title-font font-medium text-white mb-4 md:mb-0">
        <a href="#about" class="text-xl">
          Moje Meno
        </a>
      </a>
      <nav class="md:mr-auto md:ml-4 md:py-1 md:pl-4 md:border-l 
                    md:border-gray-700	flex flex-wrap items-center 
                    text-base justify-center">
        <a href="#projects" class="mr-5 hover:text-white">
          Moja práca
        </a>
        <a href="#skills" class="mr-5 hover:text-white">
          Zručnosti
        </a>
        <a href="#testimonials" class="mr-5 hover:text-white">
          Referencie
        </a>
      </nav>
      <a
        href="#contact"
        class="inline-flex items-center bg-gray-800
                border-0 py-1 px-3 focus:outline-none
                hover:bg-gray-700 rounded text-base 
                mt-4 md:mt-0">
        Zamestnaj ma!
      </a>
    </div>
  </header>
```

Navbar obsahuje prepojenie s jednotlyvýme časťami web stránky. Prepojenie prebieha za pomoci "id atribútu", ktorý priradíme k jednotlivým sekciám. Rozhodli sme sa pre fix-nutú modifikáciu "navbaru".

## About

About sekcia obsahuje krátky úrivok o majiteľovi webstránky. Záujmy a schopnosti, ktoré by mali možnosť zaujať sú viac než výtané. 

```
<section id="about">
    <div class="container mx-auto flex px-10 py-20 md:flex-row flex-col items-center">
      <div class="lg:flex-grow md:w-1/2 lg:pr-24 md:pr-16 flex 
                flex-col md:items-start md:text-left mb-16 md:mb-0 
                items-center text-center">
        <h1 class="title-font sm:text-4xl text-3xl mb-4 font-medium text-white">
          Ahoj, ja som (tvoje meno).
        </h1>
        <p class="mb-8 leading-relaxed">
          Lorem ipsum dolor sit amet, consectetur adipisicing elit. Qui
          laborum quasi, incidunt dolore iste nostrum cupiditate voluptas?
          Laborum, voluptas natus?
        </p>
        <div class="flex justify-center">
          <a
            href="#contact"
            class="inline-flex text-white bg-green-500 border-0 py-2 
                    px-6 focus:outline-none hover:bg-green-600 rounded 
                    text-lg">
            Napíš mi
          </a>
          <a
            href="#projects"
            class="ml-4 inline-flex text-gray-400 bg-gray-800 border-0 
                    py-2 px-6 focus:outline-none hover:bg-gray-700 
                    hover:text-white rounded text-lg">
            Predošlé práce
          </a>
        </div>
      </div>
      <div class="lg:max-w-lg lg:w-full md:w-1/2 w-5/6">
        <img
          class="object-cover object-center rounded"
          alt="hero"
          src="./coding.svg"
        />
      </div>
    </div>
  </section>

```

## Projects

V sekcii "Projects" vytvoríme zoznam prác, ktoré sme počas našej kariéry zostrojili. 

```
<section id="projects" class="text-gray-400 bg-gray-900 body-font">
    <div class="container px-5 py-10 mx-auto text-center lg:px-40">
      <div class="flex flex-col w-full mb-20">
        <i class="fas fa-code mx-auto inline-block w-10 mb-4 text-4xl"></i>
        <h1 class="sm:text-4xl text-3xl font-medium title-font mb-4 text-white">
          Moje práce
        </h1>
        <p class="lg:w-2/3 mx-auto leading-relaxed text-base">
          Lorem ipsum, dolor sit amet consectetur adipisicing elit. Explicabo
          facilis repellat ab cupiditate alias vero aliquid obcaecati quisquam
          fuga dolore.
        </p>
      </div>
      ...
```

Zoznam projektov :

```
<div class="flex flex-wrap -m-4">
        <a
          href="https://reactbootcamp.com"
          key="./project-1.gif"
          class="sm:w-1/2 w-100 p-4">
          <div class="flex relative">
            <img
              alt="gallery"
              class="absolute inset-0 w-full h-full object-cover object-center"
              src="./project-1.gif"
            />
            <div class="px-8 py-10 relative z-10 w-full border-4 border-gray-800 
                        bg-gray-900 opacity-0 hover:opacity-100 transition duration-500 
                        ease-in-out">
              <h2 class="tracking-widest text-sm title-font font-medium text-green-400 mb-1">
                Projekt 1
              </h2>
              <h1 class="title-font text-lg font-medium text-white mb-3">
                Názov projektu
              </h1>
              <p class="leading-relaxed">
              Lorem ipsum dolor sit amet consectetur adipisicing elit. 
              Praesentium dolore rerum laborum iure enim sint nemo omnis voluptate exercitationem eius?</p>
            </div>
          </div>
        </a>
        <a
          href="https://reactbootcamp.com"
          key="./project-1.gif"
          class="sm:w-1/2 w-100 p-4">
          <div class="flex relative">
            <img
              alt="gallery"
              class="absolute inset-0 w-full h-full object-cover object-center"
              src="./project-1.gif"
            />
            <div class="px-8 py-10 relative z-10 w-full border-4 border-gray-800 
                        bg-gray-900 opacity-0 hover:opacity-100 transition duration-500 
                        ease-in-out">
              <h2 class="tracking-widest text-sm title-font font-medium text-green-400 mb-1">
                Projekt 2
              </h2>
              <h1 class="title-font text-lg font-medium text-white mb-3">
                Názov projektu
              </h1>
              <p class="leading-relaxed">
              Lorem ipsum dolor sit amet consectetur adipisicing elit. 
              Praesentium dolore rerum laborum iure enim sint nemo omnis voluptate exercitationem eius?</p>
            </div>
          </div>
        </a>
```


1. Doplnte minimálne dva projekty na, ktorých ste pracovali.
2. Dokončite sekciu "Projects"

## Skills

Vypíšeme schopnosti, ktoré sme nadobudli na akademickej pôde alebo počas mimoškolských aktivít.

Začiatok sekcie pre "skills"

```
<section id="skills">
    <div class="container px-5 py-10 mx-auto">
      <div class="text-center mb-20">
        <i class="fas fa-microchip w-10 inline-block mb-4 text-4xl"></i>
        <h1 class="sm:text-4xl text-3xl font-medium title-font text-white mb-4">
          Moje zručnosti
        </h1>
        <p class="text-base leading-relaxed xl:w-2/4 lg:w-3/4 mx-auto">
          Lorem ipsum dolor sit amet consectetur, adipisicing elit. Nisi sit
          ipsa delectus eum quo voluptas aspernatur accusantium distinctio
          possimus est.
        </p>
      </div>
        ...
```

Ovládanie jazyka HTML + CSS

```
      <div class="flex flex-wrap lg:w-4/5 sm:mx-auto sm:mb-2 -mx-2">
        <div key="HTML & CSS" class="p-2 sm:w-1/2 w-full">
          <div class="bg-gray-800 rounded flex p-4 h-full items-center">
            <i class="far fa-check-circle 
                        text-green-400 w-6 h-6 
                        flex-shrink-0 mr-4 text-2xl">
            </i>
            <span class="title-font font-medium text-white">
              HMTL & CSS
            </span>
          </div>
        </div>

```

3. Doplnte zručnosti, ktoré ovládate.
4. Dokončite sekciu skills.

## Testimonials

Recenzie zákazníkov ponúknu lepší prehľad o tom s kým sme mali možnosť spolupracovať. 

```
<section id="testimonials">
    <div class="container px-5 py-10 mx-auto text-center">
      <i class="far fa-user w-10 inline-block mb-4 text-4xl"></i>
      <h1 class="sm:text-4xl text-3xl font-medium title-font text-white mb-12">
        Referencie
      </h1>
      <div class="flex flex-wrap m-4">
          <div class="p-4 md:w-1/2 w-full">
            <div class="h-full bg-gray-800 bg-opacity-40 p-8 rounded">
              <i class="fas fa-terminal block w-8 text-gray-500 mb-4"></i>
              <p class="leading-relaxed mb-6">
                “If I only had an hour to chop down a tree, 
                I would spend the first 45 minutes sharpening my axe.”</p>
              <div class="inline-flex items-center">
                <img
                  alt="testimonial"
                  src="lincoln.jpg"
                  class="w-12 h-12 rounded-full flex-shrink-0 
                  object-cover object-center"
                />
                <span class="flex-grow flex flex-col pl-4">
                  <span class="title-font font-medium text-white">
                    Abraham Lincoln
                  </span>
                  <span class="text-gray-500 text-sm uppercase">
                   USA
                  </span>
                </span>
              </div>
            </div>
          </div>
          ...

```

5. Do kódu vložte druhú recenziu.
6. Dokončite sekciu "Testimonials".

## Contact

Kontaktné informácie na nás. Pre tento tutoriál sme sa rozhodli sem vložiť kontakt na našu "Alma mater".

```
<section id="contact" class="relative">
      <div class="container px-5 py-10 mx-auto flex sm:flex-nowrap flex-wrap">
        <div class="lg:w-2/3 md:w-1/2 bg-gray-900 rounded-lg overflow-hidden sm:mr-10 p-10 flex items-end justify-start relative">
          <iframe
            width="100%"
            height="100%"
            title="map"
            class="absolute inset-0"
            frameBorder={0}
            marginHeight={0}
            marginWidth={0}
            style="filter: opacity(0.7)"
            src="https://www.google.com/maps/embed/v1/place?q=Prirodovedecka+fakulta+banska+bystrica&key=AIzaSyBFw0Qbyq9zTFTd-tUY6dZWTgaQzuU17R8"
          ></iframe>
          <div class="bg-gray-900 relative flex flex-wrap py-6 rounded shadow-md">
            <div class="lg:w-1/2 px-6">
              <h2 class="title-font font-semibold text-white tracking-widest text-xs">
                ADRESA
              </h2>
              <p class="mt-1">
                Tajovského 40 <br />
                Banská Bystrica, 974 01
              </p>
            </div>
            <div class="lg:w-1/2 px-6 mt-4 lg:mt-0">
              <h2 class="title-font font-semibold text-white tracking-widest text-xs">
                EMAIL
              </h2>
              <a class="text-indigo-400 leading-relaxed">
                môj-email@mail.com
              </a>
              <h2 class="title-font font-semibold text-white tracking-widest text-xs mt-4">
                Mobil
              </h2>
              <p class="leading-relaxed">+421 xxx xxx xxx</p>
            </div>
            ...

```

7. Do kódu vložte aj iné kontaktné údaje.
8. Ukončite sekciu "Contact".

## Footer

```
    <footer class="flex justify-center h-20 items-center">
      <p>Vytvorené 2021 modified by Jakub Daxner &amp; Lukáš Haring</p>
    </footer>
```

9. Zmente meno v footer na svoje vlastné.