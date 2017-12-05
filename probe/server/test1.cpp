    int bind_server_udp1(int server_s)  
    {  
        struct sockaddr_in local_addr;  
        memset(&local_addr,0,sizeof(local_addr));  
        local_addr.sin_family = AF_INET;  
        local_addr.sin_addr.s_addr = htonl(INADDR_ANY);  
        local_addr.sin_port = htons(3702);  
        return bind(server_s,(struct sockaddr*)&local_addr,sizeof(local_addr));  
      
    }  
    static int create_server_socket_udp(void)  
    {  
        int server_udp;  
        unsigned char one = 1;  
        int sock_opt = 1;  
          
        //server_udp = socket(PF_INET, SOCK_DGRAM, 0);  
        server_udp = socket(PF_INET, SOCK_DGRAM, IPPROTO_UDP);  
        if (server_udp == -1) {  
            printf("unable to create socket\n");  
        }  
      
        /* reuse socket addr */  
        if ((setsockopt(server_udp, SOL_SOCKET, SO_REUSEADDR, (void *) &sock_opt,  
                        sizeof (sock_opt))) == -1) {  
            printf("setsockopt\n");  
        }  
        if ((setsockopt(server_udp, IPPROTO_IP, IP_MULTICAST_LOOP,  
                           &one, sizeof (unsigned char))) == -1) {  
            printf("setsockopt\n");  
        }  
      
        struct ip_mreq mreq;  
        mreq.imr_multiaddr.s_addr = inet_addr("239.255.255.250");  
        mreq.imr_interface.s_addr = htonl(INADDR_ANY);  
      
        if(setsockopt(server_udp,IPPROTO_IP,IP_ADD_MEMBERSHIP,&mreq,sizeof(mreq))==-1){  
            perror("memberchip error\n");  
        }  
      
        return server_udp;  
    }  