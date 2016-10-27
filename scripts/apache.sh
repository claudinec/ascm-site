#!/bin/bash
# Originally copied from https://linode.com/docs/applications/configuration-management/vagrant-linode-environments
apt-get install 'lamp-server^' -y
mv /etc/apache2/ports.conf /etc/apache2/ports.conf.backup
mv /etc/apache2/ports1.conf /etc/apache2/ports.conf
chown -R www-data.www-data /var/www/html/
service apache2 reload
