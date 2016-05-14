/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class NSArray;

@interface IGAdsListViewModel : NSObject {

	NSArray* _pendingAds;
	NSArray* _activeAds;
	NSArray* _endedAds;

}

@property (nonatomic,copy,readonly) NSArray * pendingAds;              //@synthesize pendingAds=_pendingAds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeAds;               //@synthesize activeAds=_activeAds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * endedAds;                //@synthesize endedAds=_endedAds - In the implementation block
-(NSArray *)pendingAds;
-(NSArray *)activeAds;
-(NSArray *)endedAds;
-(id)initWithPendingAds:(NSArray*)arg1 activeAds:(NSArray*)arg2 endedAds:(NSArray*)arg3 ;
-(char)isEmptyViewmodel;
-(id)adForMediaID:(id)arg1 ;
@end
