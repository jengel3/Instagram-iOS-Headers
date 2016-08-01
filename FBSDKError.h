

@interface FBSDKError : NSObject
+(char)errorIsNetworkError:(id)arg1 ;
+(id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2 ;
+(id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 ;
+(id)errorWithCode:(int)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
+(id)errorWithCode:(int)arg1 userInfo:(id)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
+(id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 underlyingError:(id)arg5 ;
+(id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 ;
+(id)unknownErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(int)arg1 message:(id)arg2 ;
+(id)errorDomain;
-(id)init;
@end

