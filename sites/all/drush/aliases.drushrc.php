<?php

$aliases['dev'] = array(
	'uri'=> 'otools.ccistaging.com',
	'root' => '/home/staging/subdomains/otools/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
);

$aliases['live'] = array(
	'uri'=> 'www.otools.ca',
	'root' => '/home/otools/subdomains/live/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'otools',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
		'%drush-script'=> '/home/otools/.composer/vendor/bin/drush'
	),
);
