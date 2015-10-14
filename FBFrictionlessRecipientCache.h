/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBCacheDescriptor.h>
#import <Instagram/FBFrictionlessDialogSupportDelegate.h>
#import <Instagram/FBWebDialogsDelegate.h>

@class FBFrictionlessRequestSettings, NSArray, NSString;

@interface FBFrictionlessRecipientCache : FBCacheDescriptor <FBFrictionlessDialogSupportDelegate, FBWebDialogsDelegate> {

	char _frictionlessShouldMakeViewInvisible;
	FBFrictionlessRequestSettings* _frictionlessSettings;

}

@property (nonatomic,copy) NSArray * recipientIDs; 
@property (assign,nonatomic) char frictionlessShouldMakeViewInvisible;                          //@synthesize frictionlessShouldMakeViewInvisible=_frictionlessShouldMakeViewInvisible - In the implementation block
@property (nonatomic,retain) FBFrictionlessRequestSettings * frictionlessSettings;              //@synthesize frictionlessSettings=_frictionlessSettings - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recipientIDs;
-(void)prefetchAndCacheForSession:(id)arg1 ;
-(void)setFrictionlessSettings:(FBFrictionlessRequestSettings *)arg1 ;
-(char)isFrictionlessRecipient:(id)arg1 ;
-(void)prefetchAndCacheForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setFrictionlessShouldMakeViewInvisible:(char)arg1 ;
-(void)setRecipientIDs:(NSArray *)arg1 ;
-(char)areFrictionlessRecipients:(id)arg1 ;
-(void)webDialogsWillPresentDialog:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(char)frictionlessShouldMakeViewInvisible;
-(FBFrictionlessRequestSettings *)frictionlessSettings;
-(void)dealloc;
-(id)init;
@end

