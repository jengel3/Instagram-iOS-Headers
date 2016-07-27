
@class NSString, NSDictionary;


@protocol IGAutocompleteNetworkDataSourceAnalytics <NSObject>
@property (nonatomic,copy,readonly) NSString * responseQueryText; 
@property (nonatomic,copy,readonly) NSString * responseRankToken; 
@property (nonatomic,readonly) NSDictionary * analyticsInfo; 
@property (nonatomic,readonly) char responseWasFoundInQueryCache; 
@property (nonatomic,readonly) char isResponseQueryLocation; 
@required
-(NSDictionary *)analyticsInfo;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1;
-(NSString *)responseQueryText;
-(NSString *)responseRankToken;
-(char)responseWasFoundInQueryCache;
-(char)isResponseQueryLocation;

@end

