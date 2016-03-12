

@interface FBSDKBridgeAPICrypto : NSObject
+(id)_cipherKey;
+(id)_resetCipherKey;
+(void)addCipherKeyToQueryParameters:(id)arg1 ;
+(id)decryptResponseForRequest:(id)arg1 queryParameters:(id)arg2 error:(id*)arg3 ;
+(void)reset;
-(id)init;
@end

