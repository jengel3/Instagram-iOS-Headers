/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGFeedItemDirectResponseLoggingProviderDelegate.h>

@class IGListAdapter, NSString;

@interface IGFeedItemLogger : NSObject <IGFeedItemLoggingProviderDelegate, IGFeedItemDirectResponseLoggingProviderDelegate> {

	IGListAdapter* _listAdapter;
	unsigned _mediaCellIndex;

}

@property (nonatomic,readonly) IGListAdapter * listAdapter;              //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) unsigned mediaCellIndex;                  //@synthesize mediaCellIndex=_mediaCellIndex - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 ;
-(unsigned)mediaCellIndex;
-(unsigned)offsetSectionForFeedItem:(id)arg1 inList:(id)arg2 atSection:(unsigned)arg3 ;
-(id)initWithListAdapter:(id)arg1 mediaCellIndex:(unsigned)arg2 ;
@end
