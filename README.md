# FreePlayOS

FreePlayOS is an open-source project aimed at providing a free and versatile operating system.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

FreePlayOS is designed to be a free and versatile operating system, offering a range of functionalities for various types of users. This project is in its initial stages and welcomes contributions from the community.

## Features

- Lightweight and efficient
- Open source

## Requirements

- G++ (GNU Compiler Collection)
- GNU Make
- Sfml (Simple and Fast Multimedia Library)

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/ElCabris/FreePlayOS.git
    cd FreePlayOS
    ```
2. Dowload sfml
    ```bash
    sudo apt-get install libsfml-dev
    ```
    The previous command works for debian based distributions, if the previous step does not work or you have problems you can consult the [official page of sfml](https://www.sfml-dev.org/download.php)
 
3. Compile the source code:
    ```bash
    make
    ```

## Usage

After compilation you can use the program by running

    ```bash
    ./FreePlayOS
    ```

## Contributing

Contributions are welcome! Please follow these steps to contribute:

1. Fork the repository.
2. Create a new branch:
    ```bash
    git checkout -b feature-name
    ```
3. Make your changes.
4. Commit your changes:
    ```bash
    git commit -m "Description of changes"
    ```
5. Push to the branch:
    ```bash
    git push origin feature-name
    ```
6. Create a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

