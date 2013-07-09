core = 7.x
api = 2



; Modules
projects[admin_menu][subdir] = contrib
projects[admin_menu][download][type] = git
projects[admin_menu][download][revision] = fc307c1abcbb035ddb88371d7e05810358ecf5ae

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.3

projects[coffee][subdir] = contrib
projects[coffee][version] = 2.0

projects[devel][subdir] = contrib
projects[devel][version] = 1.3

projects[entity][subdir] = contrib
projects[entity][version] = 1.1

projects[features][subdir] = contrib
projects[features][version] = 2.0-rc1

projects[libraries][subdir] = contrib
projects[libraries][version] = 2.1

projects[module_filter][subdir] = contrib
projects[module_filter][version] = 1.7

projects[oauth][subdir] = contrib
projects[oauth][version] = 3.1
; Provide oauth_token_secret - https://drupal.org/node/1424452#comment-6867052
projects[oauth][patch][] = https://drupal.org/files/token_secret-1424452-3.patch

projects[rules][subdir] = contrib
projects[rules][version] = 2.3

projects[services][subdir] = contrib
projects[services][version] = 3.4
; Apply endpoint settings - https://drupal.org/node/1965612#comment-7508727
projects[services][patch][] = https://drupal.org/files/apply_endpoint-1965612-2.patch

projects[services_rules][subdir] = contrib
projects[services_rules][version] = 1.0-beta1

projects[services_views][subdir] = contrib
projects[services_views][version] = 1.0-beta2

projects[views][subdir] = contrib
projects[views][version] = 3.7



; Libraries
libraries[profiler][download][type] = git
libraries[profiler][download][url] = http://git.drupal.org/project/profiler.git
libraries[profiler][download][revision] = d0137cb42bc7a4e9ce0a0431f875806285d09758
; Added support for Devel generate: http://drupal.org/node/1420344#comment-6015282
libraries[profiler][patch][] = http://drupal.org/files/beta_and_devel-1420344-9.patch
