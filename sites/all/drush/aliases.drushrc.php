<?php

$aliases['dev'] = array(
	'uri'=> 'otools.ccistaging.com',
	'root' => '/home/staging/otools.ccistaging.com/html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
		'%drush-script'=> '/home/staging/.config/composer/vendor/bin/drush'
	),
);

$aliases['live'] = array(
	'uri'=> 'www.otools.ca',
	'root' => '/home/otools/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'otools',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
		'%drush-script'=> '/home/otools/.config/composer/vendor/bin/drush'
	),
);
