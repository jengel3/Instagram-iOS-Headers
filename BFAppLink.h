/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:11 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
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
-(void)setWebURL:(NSURL *)arg1 ;
-(void)setTargets:(NSArray *)arg1 ;
-(NSArray *)targets;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSURL *)webURL;
@end

