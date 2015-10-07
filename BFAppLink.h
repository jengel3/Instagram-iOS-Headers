/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:16 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSArray;

@interface BFAppLink : NSObject {

	char _isBackToReferrer;
	NSURL* _sourceURL;
	NSArray* _targets;
	NSURL* _webURL;

}

@property (nonatomic,retain) NSURL * sourceURL;                  //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSArray * targets;                    //@synthesize targets=_targets - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                     //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) char isBackToReferrer;              //@synthesize isBackToReferrer=_isBackToReferrer - In the implementation block
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(char)arg4 ;
+(id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 ;
-(id)initWithIsBackToReferrer:(char)arg1 ;
-(void)setIsBackToReferrer:(char)arg1 ;
-(char)isBackToReferrer;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(void)setWebURL:(NSURL *)arg1 ;
-(NSArray *)targets;
-(void)setTargets:(NSArray *)arg1 ;
-(NSURL *)webURL;
@end

