/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FBSDKServerConfigurationManager : NSObject
+(id)cachedServerConfiguration;
+(id)requestToLoadServerConfiguration:(id)arg1 ;
+(void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3 ;
+(void)loadServerConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
+(id)_defaultServerConfigurationForAppID:(id)arg1 ;
+(char)_serverConfigurationTimestampIsValid:(id)arg1 ;
+(/*^block*/id)_wrapperBlockForLoadBlock:(/*^block*/id)arg1 ;
+(void)_didProcessConfigurationFromNetwork:(id)arg1 appID:(id)arg2 error:(id)arg3 ;
+(id)_parseDialogConfigurations:(id)arg1 ;
+(void)initialize;
-(id)init;
@end
