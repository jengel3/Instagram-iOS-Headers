
@class NSString, NSDictionary;


@protocol IGAutocompleteNetworkDataSourceAnalytics <NSObject>
@property (nonatomic,copy,readonly) NSString * responseQueryText; 
@property (nonatomic,copy,readonly) NSString * responseRankToken; 
@property (nonatomic,readonly) NSDictionary * analyticsInfo; 
@property (nonatomic,readonly) char responseWasFoundInQueryCache; 
@required
-(NSDictionary *)analyticsInfo;
-(NSString *)responseQueryText;
-(NSString *)responseRankToken;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1;
-(char)responseWasFoundInQueryCache;

@end

