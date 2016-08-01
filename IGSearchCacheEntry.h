

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

@property (nonatomic,copy,readonly) NSString * queryString;                       //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalParams;              //@synthesize additionalParams=_additionalParams - In the implementation block
@property (nonatomic,copy) NSOrderedSet * suggestions;                            //@synthesize suggestions=_suggestions - In the implementation block
@property (assign) unsigned state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * rankToken;                         //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,copy) NSOrderedSet * localSuggestions;                       //@synthesize localSuggestions=_localSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * analyticsInfo;                 //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
-(char)isEqualToQueryString:(id)arg1 additionalParams:(id)arg2 ;
-(void)updateWithRankToken:(id)arg1 analyticsInfo:(id)arg2 additionalParameters:(id)arg3 ;
-(NSString *)rankToken;
-(NSDictionary *)analyticsInfo;
-(void)setLocalSuggestions:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)localSuggestions;
-(NSDictionary *)additionalParams;
-(id)initWithQueryString:(id)arg1 additionalParams:(id)arg2 ;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(void)reset;
-(NSString *)queryString;
-(void)setSuggestions:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)suggestions;
@end

