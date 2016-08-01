
#import <Instagram/IGAutocompleteAsyncDataSource.h>
#import <Instagram/IGAutocompleteNetworkDataSourceDelegate.h>
#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>

@class IGUserListAutocompleteNetworkDataSource, IGAutocompleteDataSourceStore, NSString, NSDictionary;

@interface IGUserListAutocompleteDataSource : IGAutocompleteAsyncDataSource <IGAutocompleteNetworkDataSourceDelegate, IGAutocompleteNetworkDataSourceAnalytics> {

	char _searching;
	char _emptyQuery;
	IGUserListAutocompleteNetworkDataSource* _dataSource;
	IGAutocompleteDataSourceStore* _dataStore;
	NSString* _responseQueryText;
	NSString* _responseRankToken;
	NSDictionary* _analyticsInfo;

}

@property (nonatomic,retain) IGUserListAutocompleteNetworkDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGAutocompleteDataSourceStore * dataStore;                         //@synthesize dataStore=_dataStore - In the implementation block
@property (assign,getter=isEmptyQuery,nonatomic) char emptyQuery;                               //@synthesize emptyQuery=_emptyQuery - In the implementation block
@property (assign,getter=isSearching,nonatomic) char searching;                                 //@synthesize searching=_searching - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                        //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                        //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                                      //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(void)beginFilteringUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3 rankToken:(id)arg4 analyticsInfo:(id)arg5 ;
-(NSDictionary *)analyticsInfo;
-(void)autocompleteNetworkDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 forQuery:(id)arg3 foundInQueryCache:(char)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 isLoading:(char)arg7 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 forQuery:(id)arg3 fallbackData:(id)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 ;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1 ;
-(NSString *)responseQueryText;
-(NSString *)responseRankToken;
-(void)addUsersForFeedItem:(id)arg1 ;
-(void)setEmptyQuery:(char)arg1 ;
-(char)isEmptyQuery;
-(char)isSearching;
-(void)setDataSource:(IGUserListAutocompleteNetworkDataSource *)arg1 ;
-(id)init;
-(IGUserListAutocompleteNetworkDataSource *)dataSource;
-(void)reset;
-(void)setSearching:(char)arg1 ;
-(unsigned)numberOfResults;
-(void)setDataStore:(IGAutocompleteDataSourceStore *)arg1 ;
-(IGAutocompleteDataSourceStore *)dataStore;
-(void)clearResults;
@end

