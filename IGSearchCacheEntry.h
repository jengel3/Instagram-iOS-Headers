

@class NSString, NSDictionary, NSOrderedSet;

@interface IGSearchCacheEntry : NSObject {

	NSString* _queryString;
	NSDictionary* _additionalParams;
	NSOrderedSet* _suggestions;
	unsigned _state;
	NSString* _rankToken;
	NSOrderedSet* _localSuggestions;
	NSDictionary* _analyticsInfo;

}

@property (nonatomic,copy,readonly) NSString * queryString;                //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalParams;              //@synthesize additionalParams=_additionalParams - In the implementation block
@property (nonatomic,retain) NSOrderedSet * suggestions;                   //@synthesize suggestions=_suggestions - In the implementation block
@property (assign) unsigned state;                                         //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                           //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,retain) NSOrderedSet * localSuggestions;              //@synthesize localSuggestions=_localSuggestions - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsInfo;                 //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(NSDictionary *)additionalParams;
-(id)initWithQueryString:(id)arg1 additionalParams:(id)arg2 ;
-(char)isEqualToQueryString:(id)arg1 additionalParams:(id)arg2 ;
-(void)setAdditionalParams:(NSDictionary *)arg1 ;
-(NSOrderedSet *)localSuggestions;
-(void)setLocalSuggestions:(NSOrderedSet *)arg1 ;
-(NSDictionary *)analyticsInfo;
-(void)setAnalyticsInfo:(NSDictionary *)arg1 ;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)queryString;
-(void)setSuggestions:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)suggestions;
@end

