#include <stdio.h>

void JVM_GetVmArguments() {}
void JVM_FillInStackTrace(){}
void JVM_InitializeFromArchive(){}
void JVM_LatestUserDefinedLoader(){}

void Java_java_io_ObjectInputStream_bytesToDoubles(){}
void Java_java_io_ObjectInputStream_bytesToFloats(){}
void Java_java_io_ObjectOutputStream_doublesToBytes(){}
void Java_java_io_ObjectOutputStream_floatsToBytes(){}

void Java_jdk_net_MacOSXSocketOptions_getTcpKeepAliveIntvl0(){}

void Java_jdk_net_MacOSXSocketOptions_getTcpKeepAliveTime0(){}
void Java_jdk_net_MacOSXSocketOptions_getTcpkeepAliveProbes0(){}
void Java_jdk_net_MacOSXSocketOptions_setTcpKeepAliveIntvl0(){}

void Java_jdk_net_MacOSXSocketOptions_setTcpKeepAliveTime0(){}
void Java_jdk_net_MacOSXSocketOptions_setTcpkeepAliveProbes0(){}
void Java_jdk_net_MacOSXSocketOptions_keepAliveOptionsSupported0(){}

void Java_sun_nio_ch_ServerSocketChannelImpl_accept0(){}
void Java_sun_nio_ch_ServerSocketChannelImpl_initIDs(){}
void Java_sun_nio_ch_SocketChannelImpl_checkConnect(){}

void toto(){
}

void c_print(void *thread, char* cstr) {
  printf("C: %s\n", cstr);
}

void determineCPUFeatures() {
    fprintf(stderr, "determineCPUFeatures asked, not supported\n");
}

