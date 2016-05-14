/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGraphQLParsing.h>

@class NSString;

@interface IGAdsInlineInsightsParser : NSObject <IGGraphQLParsing> {

	NSString* _mediaID;

}

@property (nonatomic,copy,readonly) NSString * mediaID;              //@synthesize mediaID=_mediaID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(NSString *)mediaID;
-(id)initWithMediaID:(id)arg1 ;
@end
