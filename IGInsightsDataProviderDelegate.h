

@protocol IGInsightsDataProviderDelegate <NSObject>
@required
-(void)didGetResponseForDataProvider:(id)arg1;
-(void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2;

@end

