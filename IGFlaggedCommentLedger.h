/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:59 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IGFlaggedCommentLedger : NSObject {

	NSMutableDictionary* _flaggedComments;

}
+(id)sharedLedger;
-(void)didBackground;
-(char)containsComment:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clear;
-(void)addComment:(id)arg1 ;
@end

