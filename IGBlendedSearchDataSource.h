
#import <Instagram/IGAutocompleteAsyncDataSource.h>
#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>

@class IGRequest, IGService, NSSet, NSDictionary, NSString;

@interface IGBlendedSearchDataSource : IGAutocompleteAsyncDataSource <IGAutocompleteNetworkDataSourceAnalytics> {

	char _searching;
	char _shouldUseLocalResults;
	IGRequest* _currentRequest;
	IGService* _service;
	NSSet* _hashtags;
	NSSet* _users;
	NSSet* _places;
	unsigned _recentUserThreshold;
	NSDictionary* _userInfo;
	NSString* _responseQueryText;
	NSString* _responseRankToken;

}

@property (assign,getter=isSearching,nonatomic) char searching;              //@synthesize searching=_searching - In the implementation block
@property (assign,nonatomic,__weak) IGService * service;                     //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) IGRequest * currentRequest;                     //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,readonly) NSSet * hashtags;                             //@synthesize hashtags=_hashtags - In the implementation block
@property (nonatomic,readonly) NSSet * users;                                //@synthesize users=_users - In the implementation block
@property (nonatomic,readonly) NSSet * places;                               //@synthesize places=_places - In the implementation block
@property (assign,nonatomic) unsigned recentUserThreshold;                   //@synthesize recentUserThreshold=_recentUserThreshold - In the implementation block
@property (assign,nonatomic) char shouldUseLocalResults;                     //@synthesize shouldUseLocalResults=_shouldUseLocalResults - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                          //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                     //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                     //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * analyticsInfo; 
+(id)itemsFromJson:(id)arg1 itemCreationBlock:(/*^block*/id)arg2 ;
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(id)canonicalQueryString:(id)arg1 ;
-(NSDictionary *)analyticsInfo;
-(id)requestForQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3 ;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(unsigned)recentUserThreshold;
-(id)requestForFrequentItemsWithRankToken:(id)arg1 ;
-(NSSet *)hashtags;
-(id)blendedResults;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1 ;
-(NSString *)responseQueryText;
-(NSString *)responseRankToken;
-(id)initWithService:(id)arg1 recentUserThreshold:(unsigned)arg2 usingLocalResults:(char)arg3 userInfo:(id)arg4 ;
-(void)fetchDataForSearchQuery:(id)arg1 location:(id)arg2 rankToken:(id)arg3 ;
-(void)fetchFrequentItemsWithRankToken:(id)arg1 ;
-(id)hashtagResults;
-(id)userResults;
-(void)setRecentUserThreshold:(unsigned)arg1 ;
-(char)shouldUseLocalResults;
-(void)setShouldUseLocalResults:(char)arg1 ;
-(void)setCurrentRequest:(IGRequest *)arg1 ;
-(char)isSearching;
-(void)fetchData;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setSearching:(char)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(IGRequest *)currentRequest;
-(IGService *)service;
-(id)placeResults;
-(NSSet *)places;
-(unsigned)numberOfResults;
-(NSSet *)users;
-(void)clearResults;
-(void)setService:(IGService *)arg1 ;
@end

