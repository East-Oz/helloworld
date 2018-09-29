download GPG key from https://bintray.com/user/downloadSubjectPublicKey?username=bintray to ~/Downloads/bintray-public.key.asc
sudo apt-key add ~/Downloads/bintray-public.key.asc
echo "deb https://dl.bintray.com/east-oz/otus-cpp trusty main" | sudo tee -a /etc/apt/sources.list
sudo apt-get update
sudo apt-get install helloworld