import os

from jinja2 import Environment, FileSystemLoader

TemplateLoader = FileSystemLoader(os.path.abspath("./gen/template"))

env = Environment(loader=TemplateLoader)

gens = [
    'word2number'
]


def word2number_gen(include_list):
    include = ''
    validate_table = ''
    word2number_table = ''
    number2word_table = ''
    word2numberf_table = ''
    number2wordf_table = ''
    for path in include_list:
        include += f'#include "../locale/{path}/word2number_{path}.h"\n'
        validate_table += f'{{ "{path}", & validate_word_{path} }},\n'
        word2number_table += f'{{ "{path}", & word2number_{path} }},\n'
        number2word_table += f'{{ "{path}", & number2word_{path} }},\n'
        word2numberf_table += f'{{ "{path}", & word2numberf_{path} }},\n'
        number2wordf_table += f'{{ "{path}", & number2wordf_{path} }},\n'

    return {
        'include': include,
        'validate_table': validate_table,
        'word2number_table': word2number_table,
        'number2word_table': number2word_table,
        'word2numberf_table': word2numberf_table,
        'number2wordf_table': number2wordf_table,
    }


def code_gen(template_name):
    print(f'generator {template_name}.c')
    template = env.get_template(f'{template_name}.c.j2')
    if not os.path.exists('./src/gen'):
        os.mkdir('./src/gen')
    f = open(f'./src/gen/{template_name}.c', 'w+')
    dir_list = os.listdir(os.path.abspath('./src/locale'))
    include_list = []
    for path in dir_list:
        if os.path.exists(os.path.join('./src/locale', path, f'{template_name}_{path}.h')):
            include_list.append(path)

    f.write(template.render(globals()[f'{template_name}_gen'](include_list)))
    f.close()


for name in gens:
    code_gen(name)
