Vagrant.configure('2') do |config|

    config.env.enable

    config.vm.define :ascm_dev

    config.vm.provider :linode do |provider, override|
      override.ssh.private_key_path = '~/.ssh/id_rsa'
      override.vm.box = 'linode'
      override.vm.box_url = "https://github.com/displague/vagrant-linode/raw/master/box/linode.box"

      provider.api_key = ENV['LINODE_API_KEY']
      provider.distribution = 'Ubuntu 16.04 LTS'
      provider.datacenter = 'singapore'
      provider.plan = 'Linode 2048'
      provider.label = 'ascm_dev'
      provider.group = 'Development'
    end

    config.vm.provision "shell", path: "scripts/apache.sh"

    config.vm.synced_folder "web/", "/var/www/html"

end
