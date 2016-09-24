/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPUtilities : NSObject

+ (id)connectionInfoToDict:(id)arg1 dictionary:(id)arg2;
+ (id)copyCurrentNetworkCharacteristicsForPath:(id)arg1;
+ (id)copyDataFromKeychainWithIdentifier:(id)arg1 accountName:(id)arg2;
+ (id)createConnectionInfoFromConnection:(id)arg1;
+ (id)endpointFromString:(id)arg1 defaultPortString:(id)arg2;
+ (id)getInterfaceTypeString:(int)arg1;
+ (BOOL)hasPacketDrop:(id)arg1;
+ (id)hexDumpBytes:(const void*)arg1 length:(unsigned long)arg2;
+ (int)interfaceTypeOfInterface:(id)arg1;
+ (id)parseXHost:(id)arg1;
+ (unsigned int)parseXRTT:(id)arg1;
+ (void)parseXTimeout:(id)arg1 hardTTLInSeconds:(double*)arg2;
+ (BOOL)printDictionaryAsJson:(id)arg1 debugName:(id)arg2;
+ (int)protocolTypeFromPath:(id)arg1 endpoint:(id)arg2;
+ (void)removeDataFromKeychainWithIdentifier:(id)arg1;
+ (void)saveDataToKeychain:(id)arg1 withIdentifier:(id)arg2 accountName:(id)arg3;

@end