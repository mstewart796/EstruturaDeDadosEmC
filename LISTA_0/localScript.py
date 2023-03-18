import os

# The directory containing your .c files
directory = 'C:\\Users\\mstew\\VS Code\\EstruturaDeDadosEmC\\LISTA_0'

# The line you want to add
new_line = '#include <locale.h>\n'
new_line2 = '\tsetlocale(LC_ALL, "Portuguese");\n'

for filename in os.listdir(directory):
    if filename.endswith('.c'):
        with open(os.path.join(directory, filename), 'r') as f:
            lines = f.readlines()
        
        # Check if the file already has the include line
        has_include = False
        for line in lines:
            if line.strip() == '#include <locale.h>':
                has_include = True
                break
        
        if not has_include:
            # If the file doesn't have the include line, insert it after the stdio include
            for i, line in enumerate(lines):
                if line.strip() == '#include <stdio.h>':
                    lines.insert(i+1, new_line)
            # check for void main() { to include new_line2
                if line.strip() == 'void main() {' or line.strip() == 'int main() {':
                    lines.insert(i+1, new_line2)
                    break
        
        # Write the modified file back to disk
        with open(os.path.join(directory, filename), 'w') as f:
            f.write(''.join(lines))
