

@protocol IGInsightsHeaderTabPageViewDataSource <NSObject>
@required
-(unsigned)numberOfContentViewsForInsightsHeaderTabPageView:(id)arg1;
-(id)insightsHeaderTabPageView:(id)arg1 viewForTabAtIndex:(unsigned)arg2;
-(id)insightsHeaderTabPageView:(id)arg1 titleForTabAtIndex:(unsigned)arg2;
-(id)titleForInsightsHeaderTabPageView:(id)arg1;
-(id)navigateButtonTextForInsightsHeaderTabPageView:(id)arg1;
-(UIEdgeInsets*)contentViewPaddingsForInsightsHeaderTabPageView:(id)arg1;

@end

