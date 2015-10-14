/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGAutocompleteNetworkDataSource.h>

@class IGFeedItem;

@interface IGUserListAutocompleteNetworkDataSource : IGAutocompleteNetworkDataSource {

	int _searchSet;
	int _searchScope;
	IGFeedItem* _feedItem;

}

@property (assign,nonatomic) int searchSet;                      //@synthesize searchSet=_searchSet - In the implementation block
@property (assign,nonatomic) int searchScope;                    //@synthesize searchScope=_searchScope - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;              //@synthesize feedItem=_feedItem - In the implementation block
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(id)localSuggestionsForQueryString:(id)arg1 numRequested:(int)arg2 ;
-(id)requestForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 ;
-(id)parseServerResponse:(id)arg1 ;
-(int)searchSet;
-(void)setSearchSet:(int)arg1 ;
-(void)setSearchScope:(int)arg1 ;
-(int)searchScope;
@end

