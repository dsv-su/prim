; prim Make File
core = "7.x"
api = "2"

; Modules

projects[ctools][version] = "1.4"
projects[ctools][subdir] = "contrib"
projects[ctools][type] = "module"

projects[date][version] = "2.7"
projects[date][subdir] = "contrib"
projects[date][type] = "module"

projects[node_clone][version] = "1.0-rc1"
projects[node_clone][subdir] = "contrib"
projects[node_clone][type] = "module"

projects[options_element][version] = "1.10"
projects[options_element][subdir] = "contrib"
projects[options_element][type] = "module"

projects[piwik][version] = "2.4"
projects[piwik][subdir] = "contrib"
projects[piwik][type] = "module"

projects[libraries][version] = "2.1"
projects[libraries][subdir] = "contrib"
projects[libraries][type] = "module"

projects[print][version] = "1.2"
projects[print][subdir] = "contrib"
projects[print][type] = "module"

projects[references][version] = "2.1"
projects[references][subdir] = "contrib"
projects[references][type] = "module"

projects[webform][version] = "3.19"
projects[webform][subdir] = "contrib"
projects[webform][type] = "module"

projects[webform_conditional][version] = "1.0-beta2"
projects[webform_conditional][subdir] = "contrib"
projects[webform_conditional][type] = "module"

projects[webform_optionsmarkup][version] = "1.0"
projects[webform_optionsmarkup][subdir] = "contrib"
projects[webform_optionsmarkup][type] = "module"

projects[views][version] = "3.7"
projects[views][subdir] = "contrib"
projects[views][type] = "module"

projects[nodeaccess][version] = "1.3"
projects[nodeaccess][subdir] = "contrib"
projects[nodeaccess][type] = "module"


; Themes
; bootstrap
projects[mothership][type] = "theme"
projects[mothership][version] = "2.10"
projects[mothership][subdir] = "contrib"

; Libraries
libraries[dompdf][directory_name] = "dompdf"
libraries[dompdf][type] = "library"
libraries[dompdf][destination] = "libraries"
libraries[dompdf][download][type] = "git"
libraries[dompdf][download][url] = "https://github.com/dompdf/dompdf"

libraries[php-font-lib][directory_name] = "php-font-lib"
libraries[php-font-lib][type] = "library"
libraries[php-font-lib][destination] = "libraries/dompdf/lib"
libraries[php-font-lib][download][type] = "git"
libraries[php-font-lib][download][url] = "https://github.com/PhenX/php-font-lib"

; Patches