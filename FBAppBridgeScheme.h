/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface FBAppBridgeScheme : NSObject {

	NSString* _version;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
+(id)installedFBNativeAppVersionForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)urlForMethod:(id)arg1 queryParams:(id)arg2 schemeVersion:(id)arg3 version:(id)arg4 ;
+(id)bridgeSchemeForFBAppForInvitesDialog;
+(id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBAppForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForLike;
+(char)isSupportedScheme:(id)arg1 ;
+(id)schemePrefix;
+(id)bridgeVersions;
-(id)urlForMethod:(id)arg1 queryParams:(id)arg2 ;
-(void)dealloc;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)initWithVersion:(id)arg1 ;
@end

