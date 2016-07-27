

@interface FBSDKLoginError : NSObject
+(id)errorForFailedLoginWithCode:(int)arg1 ;
+(id)errorForSystemPasswordChange:(id)arg1 ;
+(id)errorFromReturnURLParameters:(id)arg1 ;
+(id)errorFromServerError:(id)arg1 ;
+(id)errorForSystemAccountStoreError:(id)arg1 ;
+(id)errorForFailedLoginWithCode:(int)arg1 innerError:(id)arg2 ;
+(id)errorWithSystemAccountStoreDeniedError:(id)arg1 isCancellation:(char*)arg2 ;
+(id)errorDomain;
-(id)init;
@end

