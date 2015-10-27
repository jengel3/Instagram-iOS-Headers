/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBRequestDelegate.h>

@class NSArray, FBRequest, NSString;

@interface FBFrictionlessRequestSettings : NSObject <FBRequestDelegate> {

	NSArray* _allowedRecipients;
	FBRequest* _activeRequest;
	char _enabled;

}

@property (nonatomic,readonly) char enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * recipientIDs; 
@property (retain) NSArray * allowedRecipients;                      //@synthesize allowedRecipients=_allowedRecipients - In the implementation block
@property (nonatomic,retain) FBRequest * activeRequest;              //@synthesize activeRequest=_activeRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)request:(id)arg1 didLoad:(id)arg2 ;
-(void)setAllowedRecipients:(NSArray *)arg1 ;
-(void)reloadRecipientCacheWithFacebook:(id)arg1 ;
-(NSArray *)allowedRecipients;
-(char)isFrictionlessEnabledForRecipient:(id)arg1 ;
-(void)updateRecipientCacheWithRequestResult:(id)arg1 ;
-(void)enableWithFacebook:(id)arg1 ;
-(NSArray *)recipientIDs;
-(void)updateRecipientCacheWithRecipients:(id)arg1 ;
-(char)isFrictionlessEnabledForRecipients:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(char)enabled;
-(void)dealloc;
-(id)init;
-(void)setActiveRequest:(FBRequest *)arg1 ;
-(FBRequest *)activeRequest;
@end

