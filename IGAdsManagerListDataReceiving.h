

@protocol IGAdsManagerListDataReceiving <NSObject>
@required
-(void)willStartFetchingWithAdsManagerListDataProvider:(id)arg1;
-(void)adsManagerListDataProvider:(id)arg1 didReceiveAdsList:(id)arg2;
-(void)didFinishFetchingWithAdsManagerListDataProvider:(id)arg1;
-(void)adsManagerListDataProvider:(id)arg1 didFailWithError:(id)arg2;

@end

