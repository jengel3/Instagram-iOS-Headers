

@protocol IGAdsManagerListDataReceiving <NSObject>
@required
-(void)adsManagerListDataProvider:(id)arg1 didReceiveAdsList:(id)arg2;
-(void)adsManagerListDataProvider:(id)arg1 didFailWithError:(id)arg2;
-(void)willStartFetchingWithAdsManagerListDataProvider:(id)arg1;
-(void)didFinishFetchingWithAdsManagerListDataProvider:(id)arg1;

@end

