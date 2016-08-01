
@class NSString, NSDictionary;


@protocol IGAutocompleteNetworkDataSourceAnalytics <NSObject>
@property (nonatomic,copy,readonly) NSString * responseQueryText; 
@property (nonatomic,copy,readonly) NSString * responseRankToken; 
@property (nonatomic,readonly) NSDictionary * analyticsInfo; 
@required
-(NSDictionary *)analyticsInfo;
-(int)numberOfLocalResults;
-(char)isLocalResult:(id)arg1;
-(NSString *)responseQueryText;
-(NSString *)responseRankToken;

@end

