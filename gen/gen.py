import os

from jinja2 import Environment, FileSystemLoader

TemplateLoader = FileSystemLoader(os.path.abspath("../gen/template"))

env = Environment(loader=TemplateLoader)

gens = [
    'word2number'
]


def word2number_gen(include_list):
    include = ''
    word2number_table = ''
    number2word_table = ''
    word2numberf_table = ''
    number2wordf_table = ''
    for path in include_list:
        include += '#include "./locale/%s/word2number.h"\n' % path
        word2number_table += f'{{ "{path}", & word2number_{path} }},\n'
        number2word_table += f'{{ "{path}", & number2word_{path} }},\n'
        word2numberf_table += f'{{ "{path}", & word2numberf_{path} }},\n'
        number2wordf_table += f'{{ "{path}", & number2wordf_{path} }},\n'

    return {
        'include': include,
        'word2number_table': word2number_table,
        'number2word_table': number2word_table,
        'word2numberf_table': word2numberf_table,
        'number2wordf_table': number2wordf_table,
    }


def code_gen(template_name):
    print("generator %s.c" % template_name)
    template = env.get_template("%s.c.j2" % template_name)
    if not os.path.exists("./gen/"):
        os.mkdir("./gen")
    f = open("./gen/%s.c" % template_name, "w+")
    dir_list = os.listdir(os.path.abspath("./locale"))
    include_list = []
    for path in dir_list:
        if os.path.exists(os.path.join("./locale", path, "%s.h" % template_name)):
            include_list.append(path)

    f.write(template.render(globals()["%s_gen" % template_name](include_list)))
    f.close()


for name in gens:
    code_gen(name)
