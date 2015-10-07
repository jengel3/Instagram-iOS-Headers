/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>

@class NSMutableSet, IGHashtagModel, NSURL, UIAlertView, NSDictionary, NSString;

@interface IGHashTagWarningHelper : NSObject <UIWebViewDelegate> {

	NSMutableSet* _approvedHashtags;
	IGHashtagModel* _hashtag;
	/*^block*/id _decisionBlock;
	NSURL* _warningURL;
	UIAlertView* _alertView;
	NSDictionary* _hashtagWarningInfo;

}

@property (nonatomic,retain) NSDictionary * hashtagWarningInfo;              //@synthesize hashtagWarningInfo=_hashtagWarningInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(void)checkHashtagForWarning:(id)arg1 decisionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)hashtagWarningInfo;
-(id)warningForHashTag:(id)arg1 ;
-(void)userDidAcceptWarning:(char)arg1 ;
-(void)setHashtagWarningInfo:(NSDictionary *)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

