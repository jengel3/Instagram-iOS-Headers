

@protocol IGInsightsDataProviderDelegate <NSObject>
@required
-(void)didGetResponseForDataProvider:(id)arg1;
-(void)failedToGetAccessTokenForDataProvider:(id)arg1;

@end

