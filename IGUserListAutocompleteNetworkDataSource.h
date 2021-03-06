
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
-(IGFeedItem *)feedItem;
-(id)localSuggestionsForQueryString:(id)arg1 numRequested:(int)arg2 ;
-(id)requestForQueryString:(id)arg1 rankToken:(id)arg2 additionalParams:(id)arg3 ;
-(id)parseServerResponse:(id)arg1 ;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(int)searchSet;
-(void)setSearchSet:(int)arg1 ;
-(void)setSearchScope:(int)arg1 ;
-(int)searchScope;
@end

