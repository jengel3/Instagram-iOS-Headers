
#import <Instagram/IGAutocompleteNetworkDataSourceDelegate.h>
#import <Instagram/IGAutocompleteAsyncDataSource.h>
#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>

@protocol IGAutocompleteAsyncDataSourceDelegate;
@class IGUserListAutocompleteNetworkDataSource, NSArray, NSString, NSDictionary;

@interface IGUserListAutocompleteDataSource : NSObject <IGAutocompleteNetworkDataSourceDelegate, IGAutocompleteAsyncDataSource, IGAutocompleteNetworkDataSourceAnalytics> {

	char _searching;
	char _emptyQuery;
	char _responseWasFoundInQueryCache;
	id<IGAutocompleteAsyncDataSourceDelegate> _delegate;
	IGUserListAutocompleteNetworkDataSource* _dataSource;
	NSArray* _currentResults;
	NSString* _responseQueryText;
	NSString* _responseRankToken;
	NSDictionary* _analyticsInfo;

}

@property (assign,nonatomic,__weak) id<IGAutocompleteAsyncDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSearching,nonatomic) char searching;                                      //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic) char shouldReverseSort; 
@property (nonatomic,retain) IGUserListAutocompleteNetworkDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * currentResults;                                               //@synthesize currentResults=_currentResults - In the implementation block
@property (assign,getter=isEmptyQuery,nonatomic) char emptyQuery;                                    //@synthesize emptyQuery=_emptyQuery - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                             //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                             //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                                           //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (assign,nonatomic) char responseWasFoundInQueryCache;                                      //@synthesize responseWasFoundInQueryCache=_responseWasFoundInQueryCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(char)shouldReverseSort;
-(void)setShouldReverseSort:(char)arg1 ;
-(void)addUsersForFeedItem:(id)arg1 ;
-(void)beginFilteringUsersInSet:(int)arg1 scope:(int)arg2 query:(id)arg3 rankToken:(id)arg4 analyticsInfo:(id)arg5 ;
-(NSDictionary *)analyticsInfo;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 forQuery:(id)arg3 foundInQueryCache:(char)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 isLoading:(char)arg7 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 forQuery:(id)arg3 fallbackData:(id)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 ;
-(NSString *)responseQueryText;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(NSString *)responseRankToken;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(void)setCurrentResults:(NSArray *)arg1 ;
-(void)setResponseWasFoundInQueryCache:(char)arg1 ;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1 ;
-(char)responseWasFoundInQueryCache;
-(void)setEmptyQuery:(char)arg1 ;
-(char)isEmptyQuery;
-(char)isSearching;
-(void)setDataSource:(IGUserListAutocompleteNetworkDataSource *)arg1 ;
-(void)setDelegate:(id<IGAutocompleteAsyncDataSourceDelegate>)arg1 ;
-(id)init;
-(IGUserListAutocompleteNetworkDataSource *)dataSource;
-(id<IGAutocompleteAsyncDataSourceDelegate>)delegate;
-(void)reset;
-(void)setSearching:(char)arg1 ;
-(unsigned)numberOfResults;
-(NSArray *)currentResults;
-(void)clearResults;
@end

