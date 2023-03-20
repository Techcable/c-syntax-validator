check-format:
    black --check .
    isort --check .

build: check-format
    echo "Building project"
    pyproject-build

format:
    black .
    isort .
