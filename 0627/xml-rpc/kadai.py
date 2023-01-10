import xmlrpclib
# server = xmlrpclib.Server('http://gggeek.altervista.org/sw/xmlrpc/demo/server/server.php')
# server = xmlrpclib.Server('http://yubin.senmon.net/service/xmlrpc/')
server = xmlrpclib.ServerProxy("http://yubin.senmon.net/service/xmlrpc/")

result = server.yubin.fetchAddressByPostcode("1138656")
print(result)
