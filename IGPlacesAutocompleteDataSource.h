
#import <Instagram/IGAutocompleteAsyncDataSource.h>
#import <Instagram/IGAutocompleteNetworkDataSourceDelegate.h>
#import <Instagram/IGAutocompleteNetworkDataSourceAnalytics.h>

@class IGPlacesAutocompleteNetworkDataSource, IGAutocompleteDataSourceStore, NSString, NSDictionary;

@interface IGPlacesAutocompleteDataSource : IGAutocompleteAsyncDataSource <IGAutocompleteNetworkDataSourceDelegate, IGAutocompleteNetworkDataSourceAnalytics> {

	char _searching;
	char _responseWasFoundInQueryCache;
	char _isResponseQueryLocation;
	IGPlacesAutocompleteNetworkDataSource* _dataSource;
	IGAutocompleteDataSourceStore* _dataStore;
	NSString* _responseQueryText;
	NSString* _responseRankToken;
	NSDictionary* _analyticsInfo;

}

@property (nonatomic,retain) IGPlacesAutocompleteNetworkDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) IGAutocompleteDataSourceStore * dataStore;                       //@synthesize dataStore=_dataStore - In the implementation block
@property (assign,getter=isSearching,nonatomic) char searching;                               //@synthesize searching=_searching - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                      //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                      //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                                    //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (assign,nonatomic) char responseWasFoundInQueryCache;                               //@synthesize responseWasFoundInQueryCache=_responseWasFoundInQueryCache - In the implementation block
@property (assign,nonatomic) char isResponseQueryLocation;                                    //@synthesize isResponseQueryLocation=_isResponseQueryLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(NSDictionary *)analyticsInfo;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didUpdateSuggestions:(id)arg2 forQuery:(id)arg3 foundInQueryCache:(char)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 isLoading:(char)arg7 ;
-(void)autocompleteNetworkDataSource:(id)arg1 didFailUpdateWithError:(id)arg2 forQuery:(id)arg3 fallbackData:(id)arg4 rankToken:(id)arg5 analyticsInfo:(id)arg6 ;
-(void)setResponseWasFoundInQueryCache:(char)arg1 ;
-(NSString *)responseQueryText;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1 ;
-(NSString *)responseRankToken;
-(char)responseWasFoundInQueryCache;
-(char)isResponseQueryLocation;
-(void)setIsResponseQueryLocation:(char)arg1 ;
-(id)initWithMaximumLocalResults:(unsigned)arg1 maximumServerResults:(unsigned)arg2 ;
-(void)beginFilteringLocations:(id)arg1 closeToLocation:(id)arg2 rankToken:(id)arg3 analyticsInfo:(id)arg4 ;
-(void)beginFilteringLocations:(id)arg1 closeToLocation:(id)arg2 rankToken:(id)arg3 analyticsInfo:(id)arg4 ignoreEmptyQuery:(char)arg5 ;
-(void)beginFilteringLocationsCloseTo:(id)arg1 rankToken:(id)arg2 analyticsInfo:(id)arg3 ;
-(char)isSearching;
-(void)setDataSource:(IGPlacesAutocompleteNetworkDataSource *)arg1 ;
-(id)init;
-(IGPlacesAutocompleteNetworkDataSource *)dataSource;
-(void)reset;
-(void)setSearching:(char)arg1 ;
-(unsigned)numberOfResults;
-(void)setDataStore:(IGAutocompleteDataSourceStore *)arg1 ;
-(IGAutocompleteDataSourceStore *)dataStore;
-(void)clearResults;
@end

