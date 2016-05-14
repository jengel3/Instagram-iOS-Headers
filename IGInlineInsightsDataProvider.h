/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGBusinessGraphQLService;

@interface IGInlineInsightsDataProvider : NSObject {

	char _isFetching;
	IGBusinessGraphQLService* _service;

}

@property (assign,nonatomic) char isFetching;                                   //@synthesize isFetching=_isFetching - In the implementation block
@property (nonatomic,readonly) IGBusinessGraphQLService * service;              //@synthesize service=_service - In the implementation block
-(void)queryOrganicInlineInsightsForMediaWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failHandler:(/*^block*/id)arg3 ;
-(void)queryAdsInlineInsightsForMediaWithID:(id)arg1 successHandler:(/*^block*/id)arg2 failHandler:(/*^block*/id)arg3 ;
-(id)init;
-(IGBusinessGraphQLService *)service;
-(char)isFetching;
-(void)setIsFetching:(char)arg1 ;
@end
