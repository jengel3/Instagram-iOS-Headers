/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FBSDKError : NSObject
+(char)errorIsNetworkError:(id)arg1 ;
+(id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
+(id)errorWithCode:(int)arg1 userInfo:(id)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
+(id)errorWithCode:(int)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 underlyingError:(id)arg5 ;
+(id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
+(id)invalidArgumentErrorWithName:(id)arg1 value:(id)arg2 message:(id)arg3 ;
+(id)invalidCollectionErrorWithName:(id)arg1 collection:(id)arg2 item:(id)arg3 message:(id)arg4 ;
+(id)requiredArgumentErrorWithName:(id)arg1 message:(id)arg2 ;
+(id)unknownErrorWithMessage:(id)arg1 ;
+(id)errorWithCode:(int)arg1 message:(id)arg2 ;
+(id)errorDomain;
-(id)init;
@end
