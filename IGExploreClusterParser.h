/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGNetworkParser.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IGExploreClusterParser : NSObject <IGNetworkParser> {

	NSObject*<OS_dispatch_queue> _parsingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parsingQueue;              //@synthesize parsingQueue=_parsingQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)parsingQueue;
-(id)parsedObjectFromResponse:(id)arg1 ;
-(void)setParsingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

