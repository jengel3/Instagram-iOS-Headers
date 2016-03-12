

@class IGBlendedSearchDataSource, IGUserListAutocompleteDataSource, IGHashtagAutocompleteDataSource, IGPlacesAutocompleteDataSource, NSString;

@interface IGExploreAutocompleteSearchHelper : NSObject {

	char _responseWasFoundInCache;
	IGBlendedSearchDataSource* _blendedDataSource;
	IGUserListAutocompleteDataSource* _userDataSource;
	IGHashtagAutocompleteDataSource* _hashtagDataSource;
	IGPlacesAutocompleteDataSource* _placesDataSource;
	NSString* _responseQueryText;
	NSString* _responseRankToken;

}

@property (nonatomic,readonly) IGBlendedSearchDataSource * blendedDataSource;                    //@synthesize blendedDataSource=_blendedDataSource - In the implementation block
@property (nonatomic,readonly) IGUserListAutocompleteDataSource * userDataSource;                //@synthesize userDataSource=_userDataSource - In the implementation block
@property (nonatomic,readonly) IGHashtagAutocompleteDataSource * hashtagDataSource;              //@synthesize hashtagDataSource=_hashtagDataSource - In the implementation block
@property (nonatomic,readonly) IGPlacesAutocompleteDataSource * placesDataSource;                //@synthesize placesDataSource=_placesDataSource - In the implementation block
@property (nonatomic,copy) NSString * responseQueryText;                                         //@synthesize responseQueryText=_responseQueryText - In the implementation block
@property (nonatomic,copy) NSString * responseRankToken;                                         //@synthesize responseRankToken=_responseRankToken - In the implementation block
@property (assign,nonatomic) char responseWasFoundInCache;                                       //@synthesize responseWasFoundInCache=_responseWasFoundInCache - In the implementation block
+(void)clearHistory;
-(IGUserListAutocompleteDataSource *)userDataSource;
-(IGHashtagAutocompleteDataSource *)hashtagDataSource;
-(IGPlacesAutocompleteDataSource *)placesDataSource;
-(IGBlendedSearchDataSource *)blendedDataSource;
-(NSString *)responseQueryText;
-(void)setResponseQueryText:(NSString *)arg1 ;
-(NSString *)responseRankToken;
-(void)setResponseRankToken:(NSString *)arg1 ;
-(char)responseWasFoundInCache;
-(void)setResponseWasFoundInCache:(char)arg1 ;
-(void)invalidateResults;
-(void)dealloc;
-(id)init;
-(void)reset;
@end

