import os
from turtledemo.sorting_animate import ssort

from jinja2 import PackageLoader, Environment, FileSystemLoader

TemplateLoader = FileSystemLoader(os.path.abspath("../gen/template"))

env = Environment(loader=TemplateLoader)

gens = [
    'word2number'
]


def word2number_gen(include_list):
    return {
        'include': '',
        'word2number_table': '',
        'number2word_table': '',
        'word2numberf_table': '',
        'number2wordf_table': '',
    }


def code_gen(template_name):
    print("generator %s.c" % template_name)
    template = env.get_template("%s.c.j2" % template_name)
    print(os.path.abspath("./gen/%s.c" % template_name))
    f = open("./gen/%s.c" % template_name, "w")
    dir_list = os.listdir("../src/locale")
    include_list = []
    for path in dir_list:
        if os.path.exists(os.path.join(path, template_name)):
            include_list.append(path)

    f.write(template.render(globals()["%s_gen" % template_name](include_list)))
    f.close()


for name in gens:
    code_gen(name)
